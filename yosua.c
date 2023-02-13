#include <stdio.h>
#include "yosua.h"

//* Yosua Balingga_221511033_ Suentific Calculator_Projek2 */
//*Saya buat operator penjumlahan, pengurangan, perkalian, pembagian dan modulus sisa, sebagai berikut ini:*/

int main() {	
	int menu;
	
	do {
		printf("1. Penjumlahan\n");
		printf("2. Pengurangan\n");
		printf("3. Perkalian\n");
		printf("4. Pembagian\n");
		printf("5. Modulus\n");
		printf("Pilih Menu Diatas: \n"); scanf("%d", &menu);
		printf("\n");
		
		switch(menu) {
			case 1:
				penjumlahan();
				break;
			case 2:
				pengurangan();
				break;
			case 3:
				perkalian();
				break;
			case 4:
				pembagian();
				break;
				case 5:
					modulus();
					break;
				
		}
	} while (menu);
		
	return 0;
}

void penjumlahan() {
	int a,b, hasil;
	printf("Masukan nilai Pertama dari penjumlahan =");
	scanf("%d",&a);
	printf("Masukan nilai Kedua dari penjumlahan=");
	scanf("%d",&b);
	hasil= a+b;
	printf("-----------\n");
	printf("Hasil penjumlahan = %d", hasil);
	getch();
}

void pengurangan() {
	int a,b, hasil;
	printf("Masukan nilai Pertama dari pengurangan=");
	scanf("%d",&a);
	printf("Masukan nilai Kedua dari pengurangan=");
	scanf("%d",&b);
	hasil= a-b;
	printf("-----------\n");
	printf("Hasil Pengurangan = %d", hasil);
	getch();
}

void perkalian() {
	int a,b, hasil;
	printf("Masukan nilai Pertama dari perkalian=");
	scanf("%d",&a);
	printf("Masukan nilai Kedua dari perkalian=");
	scanf("%d",&b);
	hasil= a*b;
	printf("-----------\n");
	printf("Hasil Perkalian = %d", hasil);
	getch();	
}

void pembagian() {
	int a,b, hasil;
	printf("Masukan nilai Pertama dari pembagian =");
	scanf("%d",&a);
	printf("Masukan nilai Kedua dari pembagian=");
	scanf("%d",&b);
	hasil= a/b;
	printf("-----------\n");
	printf("Hasil Pembagian = %d\n", hasil);
	getch();	
}

void modulus(){
	int a,b, hasil;
	printf("Masukan nilai pertama dari modulus=");
	scanf("%d",&a);
	printf("Masukan nilai kedua dari modulus=");
	scanf("%d",&b);
	hasil= a%b;
	printf("-----------\n");
	printf("Hasil modulus =%d\n", hasil);
	getch();
}



