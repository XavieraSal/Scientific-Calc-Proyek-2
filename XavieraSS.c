#include "XavieraSS.h"


//int main(void){
//InversSin ();
//InversCos ();
//InversTan ();
//logNatural ();
//Turunan ();
//}


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
    printf("Invers dari tan(%.2f) = %.2f dalam radian", n, result);

    result = InversTanDrjt (n);
    printf("\nInvers dari tan(%.2f) = %.2f in derajat", n, result);
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
	printf("\n\nLogaritma Natural: ");
    printf("\nmasukkan angka: ");
    scanf("%lf", &n);
    if(n<=0.0)
    {
    printf("angka yang dimasukkan harus lebih besar sama dengan dari 0.0\n");
    }
    else
    {
    result = logaritmaNatural(n);
    printf("Hasil = %lf", result);
	}
}

float logaritmaNatural (double n)
{
	return log(n);
}

/* Mencari Turunan */

void Turunan()
{
	double koef, ekspo, result1, result2;
	char var = 't';
	printf("\n\nTurunan");
	printf("\nMasukkan koefisien atau konstanta: ");
    scanf("%lf", &koef);
    fflush(stdin);
    printf("\nMasukkan variabel (jika tidak ada, input 't'): ");
    scanf("%s", &var);
    if (var=='t' || koef==0){
    	printf("\nturunan dari %.1lf adalah 0", koef);
	}
	else{
	    printf("\nMasukkan pangkat dari variabel: ");
	    scanf(" %lf", &ekspo);
		result1 = koefTurunan (ekspo, koef);
	    result2 = ekspoTurunan(ekspo);
	    printf("\nturunan dari %.1lf%c^%.1lf adalah %.1lf%c^%.1lf", koef, var, ekspo, result1, var, result2);
	}
}

double koefTurunan (double ekspo, double koef)
{
	if (koef==0){
		koef+=1;
	}
	return ekspo*koef;
}

double ekspoTurunan (double ekspo)
{
	return ekspo-=1;
}
