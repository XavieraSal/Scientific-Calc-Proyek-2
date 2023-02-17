#include <stdio.h>
#include "yosua.h"
void tambah_bagi(float * x,float * y ){
	printf("Masukan nilai Pertama  =");
	
	scanf("%f",&(*x));
	printf("Masukan nilai Kedua =");
	scanf("%f",&(*y));
}

void modul (int * x,int * y ){
	printf("Masukan nilai Pertama  =");
	scanf("%d",&*x);
	printf("Masukan nilai Kedua =");
	scanf("%d",&*y);
}



int main() {	
	int menu, a, b, result;
	float c,d,hasil;
	
	
	printf("1. Penjumlahan\n");
	printf("2. Pengurangan\n");
	printf("3. Perkalian\n");
	printf("4. Pembagian\n");
	printf("5. Modulus\n");
	printf("Pilih Menu Diatas: \n"); scanf("%d", &menu);
	printf("\n");
	


	switch(menu) {
		case 1:
			tambah_bagi(&c,&d);
			hasil = penjumlahan(c, d);
			printf("Hasil Penjumlahan : %f", hasil);
			break;
		case 2:
			tambah_bagi(&c,&d);
			hasil = pengurangan(c, d);
			printf("Hasil Pengurangan : %f", hasil);
			break;
		case 3:
			tambah_bagi(&c,&d);
			hasil = perkalian(c, d);
			printf("Hasil Perkalian : %f", hasil);
			break;
		case 4:
			tambah_bagi(&c,&d);
			hasil = pembagian(c, d);
			printf("Hasil Pembagian : %f", hasil);
			break;
		case 5:
			modul(&a,&b);
			result = modulus(a,b);
			printf("Hasil Modulus :%d", result);
			break;
			
	}
	
	
	return 0;
}

float penjumlahan(float x, float y){
	return x+y;
}

float pengurangan(float x, float y){
	return x-y;
}

float perkalian(float x, float y){
	return x*y;
}

float pembagian(float x, float y){
	return x/y;
}

int modulus(int x, int y){
	return x%y;
}

