#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>
#include "yosua.h"
#include "paulina.h"
#include "AuliaAziizah.h"
#include "XavieraSS.h"
#include "gian.h"
#include "brahmantya.h"


void inorder_traversal(address node) {
    if (node != NULL) {
        inorder_traversal(node->left);
        printf("%s ", node->info);
        inorder_traversal(node->right);
    }
}

int main(){
	char input[255];
	char input2[355];
	char* input3[255];
	address tree;
	int i,j;
	char *p;
	int cek_o,cek_a, op=0,cekmutlak=0,kurung=0,mutlak=0,buka=0,tutup=0;
	char ulang='y';
	bool cek_input=true;
	while(ulang=='y'||ulang=='Y'){
		cek_input=true;
		system("cls");
		memset(input,'\0',sizeof(input));
		memset(input2,'\0',sizeof(input2));
		memset(input3,'\0',sizeof(input3));
		printf(" : ");
	//	getchar();
		fgets(input, sizeof(input), stdin); 
		
		i=0;
		while(input[i] != '\0'){
			
			if(isupper(input[i])){
				
				input[i]=tolower(input[i]);
			}
			i++;
			
		}
		
	
		i=0;
		j=0;
		while (input[i] != '\0') {
		    if (isspace(input[i])) { 
		      i++;
		      continue;
		    }
		
		    
		    if (isdigit(input[i]) || input[i] == '.') {
		      input2[j] = input[i];
		      j++;
		    } 
			
			else if (input[i] == 'a' && input[i+1] == 'r' && input[i+2] == 'c' && input[i+3] == 's' && input[i+4] == 'i' && input[i+5] == 'n') {
		      
		      input2[j] = 'a';
		      j++;
		      input2[j] = 'r';
		      j++;
		      input2[j] = 'c';
		      j++;
		      input2[j] = 's';
		      j++;
		      input2[j] = 'i';
		      j++;
		      input2[j] = 'n';
		      j++;
		      input2[j] = ' ';
		      j++;
		      i += 5;
		    } else if (input[i] == 'a' && input[i+1] == 'r' && input[i+2] == 'c' && input[i+3] == 'c' && input[i+4] == 'o' && input[i+5] == 's') {
		      
		      input2[j] = 'a';
		      j++;
		      input2[j] = 'r';
		      j++;
		      input2[j] = 'c';
		      j++;
			  input2[j] = 'c';
		      j++;
		      input2[j] = 'o';
		      j++;
		      input2[j] = 's';
		      j++;
		      input2[j] = ' ';
		      j++;
		      i += 5;
		    } else if (input[i] == 'a' && input[i+1] == 'r' && input[i+2] == 'c' && input[i+3] == 't' && input[i+4] == 'a' && input[i+5] == 'n') {
		      
		      input2[j] = 'a';
		      j++;
		      input2[j] = 'r';
		      j++;
		      input2[j] = 'c';
		      j++;
			  input2[j] = 't';
		      j++;
		      input2[j] = 'a';
		      j++;
		      input2[j] = 'n';
		      j++;
		      input2[j] = ' ';
		      j++;
		      i += 5;
		    }
		    
		    else if (input[i] == 'a' && input[i+1] == 'r' && input[i+2] == 'c' && input[i+3] == 's' && input[i+4] == 'e' && input[i+5] == 'c') {
		      
		      input2[j] = 'a';
		      j++;
		      input2[j] = 'r';
		      j++;
		      input2[j] = 'c';
		      j++;
		      input2[j] = 's';
		      j++;
		      input2[j] = 'e';
		      j++;
		      input2[j] = 'c';
		      j++;
		      input2[j] = ' ';
		      j++;
		      i += 5;
		    } else if (input[i] == 'a' && input[i+1] == 'r' && input[i+2] == 'c' && input[i+3] == 'c' && input[i+4] == 's' && input[i+5] == 'c') {
		      
		      input2[j] = 'a';
		      j++;
		      input2[j] = 'r';
		      j++;
		      input2[j] = 'c';
		      j++;
			  input2[j] = 'c';
		      j++;
		      input2[j] = 's';
		      j++;
		      input2[j] = 'c';
		      j++;
		      input2[j] = ' ';
		      j++;
		      i += 5;
		    } else if (input[i] == 'a' && input[i+1] == 'r' && input[i+2] == 'c' && input[i+3] == 'c' && input[i+4] == 'o' && input[i+5] == 't') {
		      
		      input2[j] = 'a';
		      j++;
		      input2[j] = 'r';
		      j++;
		      input2[j] = 'c';
		      j++;
			  input2[j] = 'c';
		      j++;
		      input2[j] = 'o';
		      j++;
		      input2[j] = 't';
		      j++;
		      input2[j] = ' ';
		      j++;
		      i += 5;
		    }
			
			else if (input[i-1]!='c' && input[i] == 's' && input[i+1] == 'i' && input[i+2] == 'n') {
		      
		      input2[j] = 's';
		      j++;
		      input2[j] = 'i';
		      j++;
		      input2[j] = 'n';
		      j++;
		      input2[j] = ' ';
		      j++;
		      i += 2;
		    } else if (input[i-1]!='c' && input[i] == 'c' && input[i+1] == 'o' && input[i+2] == 's') {
		      
		      input2[j] = 'c';
		      j++;
		      input2[j] = 'o';
		      j++;
		      input2[j] = 's';
		      j++;
		      input2[j] = ' ';
		      j++;
		      i += 2;
		    } else if (input[i-1]!='c' && input[i] == 't' && input[i+1] == 'a' && input[i+2] == 'n') {
		      
		      input2[j] = 't';
		      j++;
		      input2[j] = 'a';
		      j++;
		      input2[j] = 'n';
		      j++;
		      input2[j] = ' ';
		      j++;
		      i += 2;
		    } else if (input[i-1] !='c' && input[i] == 'c' && input[i+1] == 's' && input[i+2] == 'c') {
		      
		      input2[j] = 'c';
		      j++;
		      input2[j] = 's';
		      j++;
		      input2[j] = 'c';
		      j++;
		      input2[j] = ' ';
		      j++;
		      i += 2;
		    } else if (input[i-1]!='c' &&input[i] == 's' && input[i+1] == 'e' && input[i+2] == 'c') {
		      
		      input2[j] = 's';
		      j++;
		      input2[j] = 'e';
		      j++;
		      input2[j] = 'c';
		      j++;
		      input2[j] = ' ';
		      j++;
		      i += 2;
		    } else if (input[i-1]!='c' && input[i] == 'c' && input[i+1] == 'o' && input[i+2] == 't') {
		      
		      input2[j] = 'c';
		      j++;
		      input2[j] = 'o';
		      j++;
		      input2[j] = 't';
		      j++;
		      input2[j] = ' ';
		      j++;
		      i += 2;
		    } else if (input[i] == 'l' && input[i+1] == 'o' && input[i+2] == 'g') {
		     
		      input2[j] = 'l';
		      j++;
		      input2[j] = 'o';
		      j++;
		      input2[j] = 'g';
		      j++;
		      input2[j] = ' ';
		      j++;
		      i += 2;
		    } else if (input[i] == 'l' && input[i+1] == 'n') {
		      
		      input2[j] = 'l';
		      j++;
		      input2[j] = 'n';
		      j++;
		      input2[j] = ' ';
		      j++;
		      i++;
		    } else if (input[i] == 'p' && input[i+1] == 'i') {
		      
		      input2[j] = 'p';
		      j++;
		      input2[j] = 'i';
		      j++;
		      input2[j] = ' ';
		      j++;
		      i++;
		    } else if (input[i] == '-' && isspace(input2[j-1]) && !isdigit(input2[j-2])&&input2[j-2]!='!'&&input2[j-2]!='%'&&input2[j-2]!='i'&&input2[j-2]!=')'&&input2[j-2]!='('){
		      
		      input2[j] = input[i];
		      j++;
		    
		    }else if (input[i] == '-' && !isdigit(input2[j-1])&&input2[j-2]!='!'&&input2[j-2]!='%'&&input2[j-2]!='i'){
		      
		      input2[j] = input[i];
		      j++; 
		    
		    } else if (input[i] == 'm' && input[i+1] == 'o' && input[i+2] == 'd') {
		      
		      input2[j] = ' ';
		      j++;
		      input2[j] = 'm';
		      j++;
		      input2[j] = 'o';
		      j++;
		      input2[j] = 'd';
		      j++;
		      input2[j] = ' ';
		      j++;
		      i += 2;
		    }
		     
		    else if (input[i] == 'e' && input[i+1] == 'x' && input[i+2] == 'p') {
		     
		      input2[j] = ' ';
		      j++;
		      input2[j] = 'e';
		      j++;
		      input2[j] = 'x';
		      j++;
		      input2[j] = 'p';
		      j++;
		      input2[j] = ' ';
		      j++;
		      i += 2;
		    }
		    
			else {
		      
		      input2[j] = ' ';
		      j++;
		      input2[j] = input[i];
		      j++;
		      input2[j] = ' ';
		      j++;
		    }
	
	    	i++;
	  	}
	  
	  
	  	input2[j] = '\0';
	  	i=0;
	  	printf("\ninput2: ");
	  	while(input2[i]!='\0'){
	  		
			printf("%c",input2[i]);
			i++;
			  		
		}
	  	
	  	p = strtok(input2, " ");
		
		i=0;
		cek_o=0;
		cek_a=0;
		op=0;
		cekmutlak=0;
		kurung=0;
		mutlak=0;
		buka=0;
		tutup=0;
		while (p != NULL) {
	        if (isdigit(p[0]) || isdigit(p[1]) && p[0] == '-' || p[0] == '.'){
	        	
	            input3[i]=p;
	            cek_a++;
	        }
			
			else if (strcmp(p, "pi") == 0) {
				    input3[i]="3.14159265358979323846";
				    cek_a++;
				    
				} 
				
//			else if (p[0]=='e') {
//				    input3[i]="2.71828182846";
//				    cek_a++;
//				    
//				} 
	        
			else if(!isdigit(p[0])){
			
				if (p[0]=='+') {
					
		            input3[i]="+";
		            cek_o++;
		            op++;
	            
		        } 
		        
		        else if (!isdigit(p[1]) && p[0]=='-' ) {
		            input3[i]="-";
		            cek_o++;
		            op++;
		            
		        } 
		        
		        else if (p[0]=='*') {
		            input3[i]="*";
		            cek_o++;
		            op++;
		            
		        } 
		        
		        else if (p[0]=='/') {
		            input3[i]="/";
		            cek_o++;
		            op++;
		            
		        } 
		        else if (p[0] == '^') {
				    input3[i]="^";
				    cek_o++;
				    op++;
				    
				} 
				else if (p[0] == 'v') {
				    input3[i]="v";
				    cek_o++;
				    op++;
				    
				}
				else if (strcmp(p, "exp") == 0) {
		            input3[i]="E";
		            cek_o++;
		            op++;
		            
		        }  
				else if (strcmp(p, "sin") == 0 ) {
				    input3[i]="S";
				    cek_o++;
				    op++;
				    
				} 
				else if (strcmp(p, "cos") == 0 ) {
				    input3[i]="C";
				    cek_o++;
				    op++;
				    
				} 
				else if (strcmp(p, "tan") == 0 ) {
				    input3[i]="T";
				    cek_o++;
				    op++;
				    
				}
				else if (strcmp(p, "csc") == 0 ) {
				    input3[i]="s";
				    cek_o++;
				    op++;
				    
				} 
				else if (strcmp(p, "sec") == 0 ) {
				    input3[i]="c";
				    cek_o++;
				    op++;
				    
				} 
				else if (strcmp(p, "cot") == 0 ) {
				    input3[i]="t";
				    cek_o++;
				    op++;
				    
			 	}
				
				else if (strcmp(p, "log") == 0) {
				    input3[i]="L";
				    cek_o++;
				    op++;
				    
				}
				
				else if (strcmp(p, "mod") == 0) {
				    input3[i]="m";
				    cek_o++;
				    op++;
				    
				} 
				
				else if (strcmp(p, "ln") == 0) {
				    input3[i]="l";
				    cek_o++;
				    op++;
				    
				}
				
				else if (strcmp(p, "arcsin") == 0) {
				    input3[i]="aS";
				    cek_o++;
				    op++;
				    
				}
				
				else if (strcmp(p, "arccos") == 0) {
				    input3[i]="aC";
				    cek_o++;
				    op++;
				    
				} 
				
				else if (strcmp(p, "arctan") == 0) {
				    input3[i]="aT";
				    cek_o++;
				    op++;
				    
				}
				
				else if (strcmp(p, "arccsc") == 0) {
				    input3[i]="as";
				    cek_o++;
				    op++;
				    
				}
				
				else if (strcmp(p, "arcsec") == 0) {
				    input3[i]="ac";
				    cek_o++;
				    op++;
				    
				} 
				
				else if (strcmp(p, "arccot") == 0) {
				    input3[i]="at";
				    cek_o++;
				    op++;
				    
				}  
				 
				else if (p[0]== '%') {
				    input3[i]="%";
				    cek_o++;
				    op++;
				    
				} 
	
				else if (p[0] == '!') {
				    input3[i]="!";
				    cek_o++;
				    op++;
				    
				} 
				
				else if (p[0] == '(') {
				    input3[i]="(";
				    cek_o++;
				    op++;
				    buka++;
				    kurung++;
				    
				} 
				
				else if (p[0] == ')') {
				    input3[i]=")";
				    cek_o++;
				    op++;
				    tutup++;
				    kurung++;
				    
				} 
				
				else if (p[0] == '|') {
					cekmutlak++;
					if(cekmutlak%2==0){
						
						input3[i]="]";
						mutlak++;
					}
					
					else{
						input3[i]="|";
						
					}
				    
				    cek_o++;
				    op++;
				    
				}
				else {
		            printf("Salah input: %s\n", p);
		            cek_input=false;
		        } 
				
				
				
			}
			
			else {
		            printf("Salah input: %s\n", p);
		            return 1;
		        }
			
			
	        p = strtok(NULL, " ");
	        i++;
	    }
	    
	    if(buka!=tutup){
	    	printf("\nkurung tidak sesuai");
	    	cek_input=false;
		}
	    
    	i=0;
	    while (input3[i]!=NULL){
	    	
	    	if(strcmp(input3[i], "S") == 0 || strcmp(input3[i], "C") == 0 || strcmp(input3[i], "T") == 0 || strcmp(input3[i], "s") == 0 || strcmp(input3[i], "c") == 0 || strcmp(input3[i], "t") == 0 || strcmp(input3[i], "l") == 0||strcmp(input3[i], "aS") == 0 || strcmp(input3[i], "aC") == 0 || strcmp(input3[i], "aT") == 0 || strcmp(input3[i], "as") == 0 || strcmp(input3[i], "ac") == 0 || strcmp(input3[i], "at") == 0) {
				if (strcmp(input3[i+1], "(") != 0){
	    			printf("\n input salah\n");
	    			cek_input=false;
	    			break;
				}
			}
			else if (strcmp(input3[i], "L") == 0){
				if (!isdigit(input3[i+1])&&strcmp(input3[i+2], "(") != 0||strcmp(input3[i+2], "(") != 0){
	    			printf("\n input salah\n");
	    			cek_input=false;
	    			break;
	    		}
	    	}
			i++;	
		}
	    
	  	if(cek_input==true){
			
		
			
		  	//printf("\ntes\n");
		  	i=0;
		  	while(i<cek_o+cek_a){
		  		
				printf("%s",input3[i]);
				i++;
				  		
			}
			
		  	printf("\npanjang : %d\n",cek_o+cek_a);
			in_to_post(input3,cek_o+cek_a);
		
			printf("\npostfix : ");
			i=0;
			while(queue[i]) {
			    printf("%s ", queue[i]);
			    i++;
			}
			
			tree=post_to_tree(cek_o+cek_a-kurung-mutlak);
			printf("\ninorder traversal : ");
			inorder_traversal(tree);
			
			double result = calculate(tree);
			printf("\nHasil perhitungan: %g", result);
		
			history(input3,result,cek_o+cek_a);
		
		}
		
//		else if(cek_input==false){
//			
//			printf("\n input salah");
//			
//		}
		
		printf("\n\nApakah ingin mengulang ? (y/t) ");
		ulang=getch();
		
		
	}
	return 0;
}




