#include "XavieraSS.h"


//int main(void){
//InversSin ();
//InversCos ();
//}

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


        result = InversSinDeg (n);    
        printf("Inverse dari sin(%.2f) = %.2lf dalam derajat\n", n, result);
    }
}

float InversSinRad(double n)
{
	return asin(n);
    
}

float InversSinDeg (double n)
{
	return asin(n)*180/phi;
}  

void InversCos()
{
	printf("\nInvers Cos: ");   
	double n, result;  
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


