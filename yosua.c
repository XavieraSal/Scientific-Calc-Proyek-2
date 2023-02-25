#include <stdio.h>
#include "yosua.h"
double tambah_bagi(double * x,double * y ){
    printf("==============================\n");
	printf("Masukan nilai Pertama =");
	
	scanf("%f",&(*x));
	printf("Masukan nilai Kedua =");
	scanf("%f",&(*y));

}

int modul (int * x,int * y ){
	printf("============================\n");
	printf("Masukan nilai Pertama =");
	scanf("%d",&*x);
	printf("Masukan nilai Kedua =");
	scanf("%d",&(*y));
}



int main() {	
	int menu, a, b, result;
	float c,d,hasil;
	
	printf("==================\n");
	printf("1. Penjumlahan\n");
	printf("2. Pengurangan\n");
	printf("3. Perkalian\n");
	printf("4. Pembagian\n");
	printf("5. Modulus\n");
	printf("==================\n");
	printf("Pilih Menu Diatas:"); scanf("%d", &menu);
	printf("\n");
	


	switch(menu) {
		case 1:
			tambah_bagi(&c,&d);
			hasil = penjumlahan(c, d);
			printf("Hasil Penjumlahan : %f", hasil);
		    printf("\n==============================");
			break;
		case 2:
			tambah_bagi(&c,&d);
			hasil = pengurangan(c, d);
			printf("Hasil Pengurangan : %f", hasil);
		    printf("\n==============================");	
			break;
		case 3:
			tambah_bagi(&c,&d);
			hasil = perkalian(c, d);
			printf("Hasil Perkalian : %f", hasil);
		    printf("\n=============================");
			break;
		case 4:
			tambah_bagi(&c,&d);
			hasil = pembagian(c, d);
			printf("Hasil Pembagian : %f", hasil);
			printf("\n=============================");
			break;
		case 5:
			modul(&a,&b);
			result = modulus(a,b);
			printf("Hasil Modulus :%d", result);
		  	printf("\n============================");
			break;
		default:
			printf("============================");
			printf("\nMaaf pilihan anda salah");
			printf("\n============================");
			
	}
	
	
	return 0;
}
