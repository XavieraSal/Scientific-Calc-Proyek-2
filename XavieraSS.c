#include "XavieraSS.h"


int main(){
	InversSin ();
}

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
        printf("Inverse of sin(%.2f) = %.2lf in radians\n", n, result);

      // converting radians to degree
        result = InversSinDeg (n);    
        printf("Inverse of sin(%.2f) = %.2lf in degrees\n", n, result);
    }
}

int InversSinRad(double n)
{
	return asin(n);
    
}

int InversSinDeg (double n)
{
	return asin(n)*180/phi;
}  

