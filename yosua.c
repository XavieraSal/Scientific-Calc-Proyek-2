#include <stdio.h>
#include <conio.h>
#include "yosua.h"

float a,b;
void penjumlahan ();

//int main (){
// penjumlahan();
//}

void penjumlahan(){

	int a,b, hasil;
	printf("Masukan nilai A =");
	scanf("%d",&a);
	printf("Masukan nilai B =");
	scanf("%d",&b);
	hasil= a+b;
	printf("Hasil penjumlahan = %d", hasil);
	getch();
}

