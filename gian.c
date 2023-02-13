#include <stdio.h>
#define phi 3.14159265
#include <math.h>
#include "gian.h"
int k = 0, a;
float result = 0;	


void sinus()
{
	float a;
    printf("SIN : \nEnter angle in radians: ");
    scanf("%f", &a);
    result = sin(a*phi/180);
    printf("\nsin dari %d derajat adalah = %g",a , result);
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
    printf("\ntan dari %d derajat adalah = %.2f",a , result);
}

void Cotan()
{
	double a;
	printf("Enter angle in radians: " );
	scanf("%lf", &a);
	result = 1/tan(a*phi/180);
	printf("\Cot dari %d derajat adalah = %.2f",a , result);
}

void Secan()
{
	double a;
	printf("Enter angle in radians: ");
	scanf("%lf", &a);
	result  = 1/cos(a*phi/180);
	printf("\nsec dari %d derajat adalah = %.2f",a , result );
}

void cosec()
{
	double a;
	printf("Enter angele in radians: ");
	scanf("%lf", &a);
	result = 1/sin(a*phi/180);
	printf("\ncosec dari %d derajat adalah = %.2f", a, result);
}
void pilih()
{
	switch(menu())
	{
		case 1: sinus();
		break;
		
		case 2: cosinus();
		break;
		
		case 3: tangent();
		break;
		
		case 4: Cotan();
		break;
		
		case 5: Secan();
		break;
		
		case 6: cosec();
		break;
	 } 
}

int menu()
{
    int list;
    printf("\n1. Sinus");
    printf("\n2. Cosin");
    printf("\n3. Tangen");
    printf("\n4. Cotan");
	printf("\n5. Secan");
	printf("\n6. Cosec");
	printf("\n\nmenu : ");
    scanf("%d", &list);
    return list;
}

