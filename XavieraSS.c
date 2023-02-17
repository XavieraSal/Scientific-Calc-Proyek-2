#include "XavieraSS.h"


int main(void){
InversSin ();
InversCos ();
InversTan ();
logNatural ();
}


/* # mencari nilai sin invers */

void InversSin ()
{
	double n, result;
	printf("\nInvers Sin: ");   
    printf("\nMasukkan sebuah angka: ");                
    scanf("%lf",&n);
    if(n>1 || n<-1)  //tidak di dalam range
    {
        printf("Tidak di dalam range");
    }
    else
    {
        result = InversSinRad (n);
        printf("Inverse dari sin(%.2f) = %.2lf dalam radian\n", n, result);


        result = InversSinDrjt (n);    
        printf("Inverse dari sin(%.2f) = %.2lf dalam derajat\n", n, result);
    }
}

float InversSinRad(double n)
{
	return asin(n);
    
}

float InversSinDrjt (double n)
{
	return asin(n)*180/phi;
}  


/* # mencari nilai cos invers */

void InversCos()
{
	double n, result;  
	printf("\nInvers Cos: "); 
    printf("\nMasukkan sebuah angka: ");                
    scanf("%lf",&n);
    if(n>1 || n<-1)  //tidak di dalam range
    {
        printf("Tidak di dalam range");
    }
    else
    {
        result = InversCosRad(n);
        printf("Invers dari cos(%.2f) = %.2lf dalam radian\n", n, result);


        result = InversCosDrjt(n);    
        printf("Inverse dari sin(%.2f) = %.2lf dalam derajat\n", n, result);
    }
}

float InversCosRad(double n)
{
	return acos(n);
    
}

float InversCosDrjt (double n)
{
	return acos(n)*180/phi;
}  

/* Mencari nilai tan invers */

void InversTan()
{
	double n, result;  
	printf("\nInvers Tan: "); 
    printf("\nMasukkan sebuah angka: ");                
    scanf("%lf",&n);
    
    result = InversTanRad(n);
    printf("\nInverse of tan(%.2f) = %.2f in radians", n, result);

    result = InversTanDrjt (n);
    printf("\nInverse of tan(%.2f) = %.2f in degrees", n, result);
}

float InversTanRad(double n)
{
	return atan(n);
}

float InversTanDrjt (double n)
{
	return (atan(n) * 180) / phi;
}  

/* # Logaritma Natural */

void logNatural ()
{
	double n, result;
	printf("\nLogaritma Natural: ");
    printf("masukkan angka: ");
    scanf("%lf", &n);
    if(n<=0.0)
    {
    printf("angka yang dimasukkan harus lebih besar sama dengan dari 0.0\n");
    }
    else
    {
    result = logaritmaNatural (n);
    printf("\nResult = %lf", result);
	}
}

float logaritmaNatural (double n)
{
	return log(n);
}

