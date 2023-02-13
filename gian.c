#include <stdio.h>
#define PI 3.141592654
#include <math.h>
#include "gian.h"

int k = 0, result = 0;


void sinus()
{
	double a;
    printf("SIN : \nEnter angle in radians: ");
    scanf("%lf", &a);
    result = sin(a*PI/180);
    printf("\nsin dari %g derajat adalah = %.2f",a, result);
}
void cosinus()
{
    double a;
    printf("Enter angle in radians: ");
    scanf("%lf", &a);
    result = cos(a*PI/180);
    printf("\ncos dari %g derajat adalah = %.2f",a , result);
}
void  Tangen()
{
	double a;
    printf("Enter angle in radians: ");
    scanf("%lf", &a);
    result = tan(a*PI/180);
    printf("\ntan dari %g derajat adalah = %.2f",a, result);
}
void next()
{
	switch(menu())
	{
		case 1: sinus();
		break;
		
		
		case 2: cosinus();
		break;
		
		case 3: Tangen();
		break;
	 } 
}

int menu()
{
    int list;
    printf("\n1. Sin");
    printf("\n2. Cosin");
    printf("\n3. Tangen");
    printf("\n\nmenu : ");
    scanf("%d", &list);
    return list;
}

