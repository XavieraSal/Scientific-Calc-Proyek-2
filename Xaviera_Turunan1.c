/*Turunan*/

#include <stdio.h>
#include <stdlib.h>

int main(void){
	Turunan();
}

double koefTurunan (double,double);
double ekspoTurunan (double);

void Turunan()
{
	double koef, ekspo, result1, result2;
	char var = 't';
	printf("\nTurunan");
	printf("\nMasukkan koefisien atau konstanta: ");
    scanf("%lf", &koef);
    fflush(stdin);
    printf("\nMasukkan variabel (jika tidak ada, input 't'): ");
    scanf("%s", &var);
    if (var=='t' && koef==0){
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

