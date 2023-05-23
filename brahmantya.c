#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "yosua.h"
#include "paulina.h"
#include "AuliaAziizah.h"
#include "XavieraSS.h"
#include "gian.h"
#include "brahmantya.h"


//	referensi

//	Algoritma Infix to Postfix
//	https://en.wikipedia.org/wiki/Shunting_yard_algorithm


//	Algoritma Post to Tree
//	https://en.wikipedia.org/wiki/Binary_expression_tree

//	Memset
//	https://www.tutorialspoint.com/c_standard_library/c_function_memset.htm
//	https://www.geeksforgeeks.org/memset-c-example/


//	strtok
//	https://www.codingame.com/playgrounds/14213/how-to-play-with-strings-in-c/string-split

//	Binary Expression Tree
//	https://www.geeksforgeeks.org/expression-tree/


void ins_queue(char* item,int* tail){
	
	*tail=*tail+1;
	
	queue[*tail] = (char*) malloc(strlen(item) + 1);
	strcpy(queue[*tail], item);
	//printf("cek ins head : %s\n", queue[head]);
	printf("cek ins tail %d : %s\n",*tail, queue[*tail]);
}

char* isoperator(char* op){
	
	if(strcmp(op, "+") == 0 || strcmp(op, "-") == 0 || strcmp(op, "*") == 0 || strcmp(op, "/") == 0 || strcmp(op, "^") == 0 ||strcmp(op, "v") == 0 || strcmp(op, "m") == 0 || strcmp(op, "%") == 0 || strcmp(op, "L") == 0 || strcmp(op, "l") == 0 ||strcmp(op, "S") == 0 || strcmp(op, "C") == 0 || strcmp(op, "T") == 0 || strcmp(op, "s") == 0 || strcmp(op, "c") == 0 || strcmp(op, "t") == 0 || strcmp(op, "!") == 0 || strcmp(op, "E") == 0 || strcmp(op, "|") == 0 || strcmp(op, "aS") == 0 || strcmp(op, "aC") == 0 || strcmp(op, "aT") == 0 ||strcmp(op, "as") == 0 || strcmp(op, "ac") == 0 || strcmp(op, "at") == 0){
		
		return op;
	}
	else {
		return '\0';
	}
	
}

int precedence(char* c) {
	if (strcmp(c, "!") == 0||strcmp(c, "aS") == 0 || strcmp(c, "aC") == 0 || strcmp(c, "aT") == 0 ||strcmp(c, "as") == 0 || strcmp(c, "ac") == 0 || strcmp(c, "at") == 0) {
		return 5;	
	}
	else if (strcmp(c, "L") == 0 || strcmp(c, "l") == 0 ||strcmp(c, "S") == 0 || strcmp(c, "C") == 0 || strcmp(c, "T") == 0 || strcmp(c, "s") == 0 || strcmp(c, "c") == 0 || strcmp(c, "t") == 0 ||strcmp(c, "E") == 0) {
		return 4;	
	}
	else if (strcmp(c, "^") == 0 ||strcmp(c, "v") == 0 ||strcmp(c, "%") == 0) {
		return 3;	
	}
    else if (strcmp(c, "*") == 0 || strcmp(c, "/") == 0 ||strcmp(c, "m") == 0) {
    	return 2;
	}
    else if (strcmp(c, "+") == 0 || strcmp(c, "-") == 0 ) {
    	return 1;
	}
	else{
		return 0;	
	}
    
}

void push(char* oper,int* top){
	
	*top=*top+1;;
	printf("cek push %d : %s\n",*top,oper);
	stack[*top]=oper;
	
}


char* pop(int* top){
	char* c;
	if (*top == -1) {
        return '\0';
    }
	c=stack[*top];
	*top=*top-1;
	printf("cek pop %d : %s\n",*top,c);
	return c;
}

void in_to_post(char* arr[], int x){
	
	
	char* c;
	
	char op, a,b;
	int i=0,loop=0,top=-1,tail=-1,head=0;
	memset(queue,'\0',sizeof(queue));
	memset(stack,'\0',sizeof(stack));
	while(loop<x){
		printf("\ncek loop %d\n",loop);
		memset(c,'\0',sizeof(c));
		
		if (isspace(arr[i])) {
			i++;
            continue; 
        }
//		else if(isdigit(arr[i])){
//			
//			printf("\ncek isdigit");
//			ins_queue(arr[i]);
//			
//			
//		}

		else if(strcmp(arr[i],"|")==0){
			printf("\ncek mutlak \n");
			push(arr[i],&top);
			
		}
		
		else if(isoperator(arr[i])){
			printf("\ncek top \n");
	
			
			while(top>=0&&precedence(stack[top])>=precedence(arr[i])){
				memset(c,'\0',sizeof(c));
				strcpy(c,pop(&top));
				ins_queue(c, &tail);
				
			} 
			push(arr[i],&top);
			
		}
		
		else if(strcmp(arr[i],"(")==0){
			
			push(arr[i],&top);
			
		}
		
		
		else if(strcmp(arr[i],"]")==0){
			
			while(!strcmp(stack[top],"|")==0){
				memset(c,'\0',sizeof(c));
				strcpy(c,pop(&top));
				ins_queue(c,&tail);
				
			}
			memset(c,'\0',sizeof(c));
			strcpy(c,pop(&top));
			ins_queue(c,&tail);
			
		}
		
		
		else if(strcmp(arr[i],")")==0){
			
			while(!strcmp(stack[top],"(")==0){
				memset(c,'\0',sizeof(c));
				strcpy(c,pop(&top));
				ins_queue(c,&tail);
				
			}
			
			pop(&top);
			
		}
		
		else{
			
			
			ins_queue(arr[i],&tail);
			
			
		}
		i++;
		loop++;
	}
	
	while(top>=0){
		memset(c,'\0',sizeof(c));
		strcpy(c,pop(&top));
		ins_queue(c,&tail);
		
	}
	
	
}

address make_node(char* Item){
	
	address PNew;
	PNew = (address) malloc(sizeof (nodeTree));
	PNew->left=NULL;
	PNew->right=NULL;
	PNew->info = (char*) malloc(strlen(Item) + 1);
	strcpy(PNew->info, Item);
	//PNew->info=Item;
	printf("\nbuat node %s",PNew->info);
	return PNew;
}

address popT(int* topT){
	printf("\ntes pop");
	address c;
	if (*topT == -1) {
        return NULL;
    }
	c=Pnode[*topT];
	*topT=*topT-1;
	printf("\ncek pop tree %d : %s\n",*topT,c->info);
	return c;
}


address post_to_tree(int x){
	
	int i=0,loop=0;
	int topT=-1;
	address a,b,c;
	while(loop<x){
		
		printf("\nloop %d",loop);
		printf("\ntopT : %d",topT);
		
		if(isoperator(queue[i])){
			
			
			
			if(strcmp(queue[i], "%") == 0 || strcmp(queue[i], "l") == 0 ||strcmp(queue[i], "S") == 0 || strcmp(queue[i], "C") == 0 || strcmp(queue[i], "T") == 0 || strcmp(queue[i], "s") == 0 || strcmp(queue[i], "c") == 0 || strcmp(queue[i], "t") == 0 || strcmp(queue[i], "!") == 0 || strcmp(queue[i], "|") == 0||strcmp(queue[i], "aS") == 0 || strcmp(queue[i], "aC") == 0 || strcmp(queue[i], "aT") == 0 || strcmp(queue[i], "as") == 0 || strcmp(queue[i], "ac") == 0 || strcmp(queue[i], "at") == 0){
				
				a=make_node(queue[i]);
				printf("\npop1");
				b=popT(&topT);
				
				c=make_node("0");
				a->left=b;
				a->right=c;
				topT++;
				Pnode[topT]=a;
				
			}
			
			else {
				
				a=make_node(queue[i]);
				printf("\npop1");
				b=popT(&topT);
				printf("\npop2");
				c=popT(&topT);
				a->left=c;
				a->right=b;
				topT++;
				Pnode[topT]=a;
				
			}
			
			
		}
		
		else{
			
			
			topT++;
			Pnode[topT]=make_node(queue[i]);
		}
		
		i++;
		loop++;
	}
	
	
	return Pnode[topT];
} 



double calculate(address node) {
    if (node != NULL) {
        double left = calculate(node->left);
        double right = calculate(node->right);
        if (isoperator(node->info)) {
        	
            if (strcmp(node->info ,"+")==0) {
            
			    return left + right;
            
			}
			
			else if (strcmp(node->info ,"-")==0) {
            
			    return left - right;
            
			}
			
			else if (strcmp(node->info ,"*")==0) {
            
			    return left * right;
            
			}
			
			else if (strcmp(node->info ,"/")==0) {
            
			    return left / right;
            
			}
			
			else if (strcmp(node->info ,"m")==0) {
            
			    return (int)left % (int)right;
            
			}
			 
			else if (strcmp(node->info ,"%")==0) {
            
			    //return persent(left);
            	return left/100;
			}
			
			else if (strcmp(node->info ,"^")==0) {
            
			    return pangkat(left,right);
            
			}
			
			else if (strcmp(node->info ,"v")==0) {
            
			    return akarsemua(right,left);
            
			}
			
			else if (strcmp(node->info ,"!")==0) {
            
			    return faktorial(left);
            
			}
			
			else if (strcmp(node->info ,"S")==0) {
            
			    return sin(left);
            
			}
			
			else if (strcmp(node->info ,"C")==0) {
            
			    return cos(left);
            
			}
			
			else if (strcmp(node->info ,"T")==0) {
            
			    return tan(left);
            
			}
			
			else if (strcmp(node->info ,"s")==0) {
            
			    return sec(left);
            
			}
			
			else if (strcmp(node->info ,"c")==0) {
            
			    return csc(left);
            
			}
			
			else if (strcmp(node->info ,"t")==0) {
            
			    return cot(left);
            
			}
			
			else if (strcmp(node->info ,"E")==0) {
            
			    return exponensial(left,right);
            
			}
			
			else if (strcmp(node->info ,"|")==0) {
            
			    return nilaimutlak(left);
        	
			}
	
			else if (strcmp(node->info ,"aS")==0) {
            
			    return arcsin(left);
            
			}
			
			else if (strcmp(node->info ,"aC")==0) {
            
			    return arccos(left);
            
			}
			
			else if (strcmp(node->info ,"aT")==0) {
            
			    return arctan(left);
        	
			}
			
			else if (strcmp(node->info ,"as")==0) {
            
			    return arcsec(left);
            
			}
			
			else if (strcmp(node->info ,"ac")==0) {
            
			    return arccsc(left);
            
			}
			
			else if (strcmp(node->info ,"at")==0) {
            
			    return arccot(left);
        	
			}
			
			else if (strcmp(node->info ,"L")==0) {
            
			    return logaritmaBebas(right,left);
            
			}
			
			else if (strcmp(node->info ,"l")==0) {
            
			    return ln(left);
        	
			}
        	
        } 
		
		else {
			
            return atof(node->info);
        
		}
    }
    
    return 0.0;
}
