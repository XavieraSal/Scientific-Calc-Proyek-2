#include <stdio.h>
#include <stdlib.h>
#include "paulina.h"

//<<<<<<< HEAD
//int main (){
//	pangkat2();
//	akar();
//}
//int main (){
//	pangkat2();
//}
//>>>>>>> dedb82980a5432438462172a0f1fce0fdfe134db

int pangkat (int x, int y){
	int p;
	int hasil=1;
	
	 for(p=1;p<=y;p++){
        hasil=hasil*x;
    }
    return hasil;
}

void pangkat2(){
	int x,y;
	int hasil;
	printf("   Perhitungan Pangkat \n");
	printf("Masukkan angka   : ");
    scanf("%i", &x);
    printf("Pangkat          : ");
    scanf("%i", &y);
 
 	hasil=pangkat ( x,  y);
    printf("Hasilnya adalah  : %d", hasil);
}

float akarkuadrad(float a){
	float hasil;
	printf("Hasilnya adalah  : %.0f\n\n", hasil=sqrt(a));
	return hasil;
}

void akar(){
	float input;
	printf("\n\n\n   Perhitungan Akar Kuadrad \n");
	printf("Masukkan angka   : ");
	scanf("%f", &input);
	akarkuadrad (input);
}
