
#include <stdio.h>
#include "yosua.h"

int main() {	
	double x, y, hasil;
	float desimal, hasil2;
	double a,  result;
	char c;
	scanf("%lf %c %lf",&x,&c,&y);
	
	printf("%lf%c%lf",x,c,y);
	
	switch(c){
		
		case '+':
			(&x,&y);
		hasil = penjumlahan (x,y);
		printf("\nHasil penjumlahan: %lf",hasil);
		break;
		case '-':
			(&x,&y);
			hasil = pengurangan (x,y);
			printf("\nHasil pengurangan: %lf",hasil);
			break;
		case '*':
			(&x,&y);
			hasil=perkalian (x,y);
			printf("\nHasil perkalian: %lf",hasil);
			break;
		case '/':
			(&x,&y);
			hasil = pembagian (x,y);
			printf("\nHasil bagi: %lf",hasil);
			break;
		case 'm':
			(&x,&y);
			hasil2=modulus(x,y);
			printf("\nHasil modulus:%f",hasil2);
			break;
		case '%':
		
			result = persent(a);
			printf("\nHasill presentas: %lf");
			break;
		
	}
//	printf("Masukan nilai pertama: ");
//	scanf("%lf", &x);
//	
//	printf("Masukan nilai kedua: ");
//	scanf("%lf", &y);
//	
//	hasil = penjumlahan(x, y);
//	printf("Hasil penjumlahan: %lf\n", hasil);
//	
//	hasil = pengurangan(x, y);
//	printf("Hasil pengurangan: %lf\n", hasil);
//	
//	hasil = perkalian(x, y);
//	printf("Hasil perkalian: %lf\n", hasil);
//	
//	hasil = pembagian(x, y);
//	printf("Hasil pembagian: %lf\n", hasil);
//	
//	printf("Masukan nilai pertama untuk modul: ");
//	scanf("%d", &a);
//	
//	printf("Masukan nilai kedua untuk modul: ");
//	scanf("%d", &b);
//	
//	result = modulus(a, b);
//	printf("Hasil modulus: %d\n", result);
//	
//	printf("Masukan angka desimal untuk persentase: ");
//	scanf("%f", &desimal);
//	
//	hasil2 = persent(desimal);
//	printf("Hasil persentase: %f\n", hasil2);
//	
	return 0;
}






