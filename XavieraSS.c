#include "XavieraSS.h"

//
//int main(void){
//	InversSin ();
//}

void InversSin ()
{
	double n, result;  
    printf("\nEnter a number: ");                
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

