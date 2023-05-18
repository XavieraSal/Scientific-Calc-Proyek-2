#include <string.h>



#include <stdlib.h>
#include <stdio.h>
#include "yosua.h"

int main() {	
	double x, y, hasil;
	float desimal, hasil2;
	double a,  result;
	char c[100],d;
	char *p;
	int i;
	fgets(c,sizeof(c),stdin); 
	i =0;
	
	p=strtok(c," "); 
	
	while(p!=NULL){ 
		
		if(isdigit(p[0])){ 
			
			if(i%2==0){ 
				printf("%s",p);
				x=atof(p); 
				i++; 
			}
			
			else{
				printf("%s",p);
				y=atof(p);
				i++;
			}
			
		}
		
		else {
			
			d=p[0];
			
		}
		
		p=strtok(NULL, " ");
		
		
		
	}
	printf("%lf",x);
	printf("%c",d);
	printf("%lf",y);
	switch(d){
		
		case '+':
			(&x,&y);
		hasil = penjumlahan (x,y);
		printf("\nHasil penjumlahan: %lf",hasil);
		break;
		case '-':
			(&x,&y);
			hasil = pengurangan (x,y);
			printf("\nHasil pengurangan: %lf",hasil);
			break;
		case '*':
			(&x,&y);
			hasil=perkalian (x,y);
			printf("\nHasil perkalian: %lf",hasil);
			break;
		case '/':
			(&x,&y);
			hasil = pembagian (x,y);
			printf("\nHasil bagi: %lf",hasil);
			break;
		case 'm':
			(&x,&y);
			hasil2=modulus(x,y);
			printf("\nHasil modulus:%f",hasil2);
			break;
		case '%':
		
			result = persent(x);
			printf("\nHasill presentas: %lf",result);
			break;
		
	}
	
	return 0;
}






