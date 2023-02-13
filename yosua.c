#include <stdio.h>
#include "yosua.h"

int main() {	
	int menu;
	
	do {
		printf("1. Penjumlahan\n");
		printf("2. Pengurangan\n");
		printf("3. Perkalian\n");
		printf("4. Pembagian\n");
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
				
		}
	} while (menu);
		
	return 0;
}
<<<<<<< HEAD

#include <conio.h>
#include "yosua.h"

float a,b;
void penjumlahan ();

//int main (){
// penjumlahan();
//}
=======
>>>>>>> dedb82980a5432438462172a0f1fce0fdfe134db

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


//#include <stdio.h>
//#include <conio.h>
//#include "yosua.h"
///* Yosua Balingga_221511033_ Suentific Calculator_Projek2 */
///*Saya buat operator penjumlahan, pengurangan, perkalian, pembagian dan modulus sisa, sebagai berikut ini:*/
//
//float a,b;
//void penjumlahan ();
//
//int main (){
// penjumlahan();
//}
//
//void penjumlahan(){
//
//	int a,b, hasil;
//	printf("Masukan nilai A =");
//	scanf("%d",&a);
//	printf("Masukan nilai B =");
//	scanf("%d",&b);
//	hasil= a+b;
//	printf("Hasil penjumlahan = %d", hasil);
//	getch();
//}
//

