#include <stdio.h>
#include "yosua.h"

int main() {	
	int menu, a, b, hasil;
	
	printf("1. Penjumlahan\n");
	printf("2. Pengurangan\n");
	printf("3. Perkalian\n");
	printf("4. Pembagian\n");
	printf("5. Modulus\n");
	printf("Pilih Menu Diatas: \n"); scanf("%d", &menu);
	printf("\n");
	printf("Masukan nilai Pertama  =");
	scanf("%d",&a);
	printf("Masukan nilai Kedua =");
	scanf("%d",&b);
	
	switch(menu) {
		case 1:
			hasil = penjumlahan(a, b);
			printf("Hasil Penjumlahan : %d", hasil);
			break;
		case 2:
			hasil = pengurangan(a, b);
			printf("Hasil Pengurangan : %d", hasil);
			break;
		case 3:
			hasil = perkalian(a, b);
			printf("Hasil Perkalian : %d", hasil);
			break;
		case 4:
			hasil = pembagian(a, b);
			printf("Hasil Pembagian : %d", hasil);
			break;
		case 5:
			hasil = modulus(a,b);
			printf("Hasil Modulus :%d", hasil);
			break;
			
	}
	
	
	return 0;
}

int penjumlahan(int x, int y){
	return x+y;
}

int pengurangan(int x, int y){
	return x-y;
}

int perkalian(int x, int y){
	return x*y;
}

int pembagian(int x, int y){
	return x/y;
}

int modulus(int x, int y){
	return x%y;
}

