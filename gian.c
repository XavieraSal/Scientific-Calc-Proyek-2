#include <stdio.h>
#define phi 3.141592654
#include "gian.h"
int k = 0, a;
float result = 0;	

void sinus()
{
	float a;
    printf("SIN : \nEnter angle in radians: ");
    scanf("%f", &a);
//    result = sin(a*phi/180);
    printf("\nsin dari derajat adalah = %g", result);
}

int hitung_sin(){
	result = sin(a*phi/180);
	return result;
}
void cosinus()
{
    double a;
    printf("Enter angle in radians: ");
    scanf("%lf", &a);
    result = cos(a*phi/180);
    printf("\ncos dari %g derajat adalah = %.2f",a , result);
}
void tangent()
{
    double a;
    printf("Enter angle in radians: ");
    scanf("%lf", &a);
    result = tan(a*phi/180);
    printf("\nResult = %.2f", result);
}
void main()
{
	switch(menu())
	{
		case 1: sinus();
				hitung_sin();
		break;
		
		case 2: cosinus();
		break;
		
		case 3: tangent();
		break;
	 } 
}

int menu()
{
    int list;
    printf("\n1. Sinus");
    printf("\n2. Cosin");
    printf("\n3. Tangen");
    printf("\n\nmenu : ");
    scanf("%d", &list);
    return list;
}

