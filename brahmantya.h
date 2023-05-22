
#ifndef brahmantya_h
#define brahmantya_h
#include <stdio.h>
#include <stdlib.h>
#include <string.h> 





char *queue[255];
char *stack[255];

typedef struct node *address;
typedef struct node{
	
	char* info;
	address right;
	address left;
	
}nodeTree;


address Pnode[255];

void ins_queue(char* item,int* tail);
char* isoperator(char* op);
int precedence(char* c);
void push(char* oper, int* top);
char* pop(int*top);
void in_to_post(char* arr[], int x);
address make_node(char* Item);
address popT(int* topT);
address post_to_tree(int x);
double calculate(address node);



#endif
