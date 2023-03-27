#include <stdio.h>
#include "yosua.h"


double tambah_bagi(double * x,double * y ){
    printf("==============================\n");
	printf("Masukan nilai Pertama =");
	
	scanf("%lf",&(*x));
	printf("Masukan nilai Kedua =");
	scanf("%lf",&(*y));

}

int modul (int * x,int * y ){
	printf("============================\n");
	printf("Masukan nilai Pertama =");
	scanf("%d",&*x);
	printf("Masukan nilai Kedua =");
	scanf("%d",&(*y));
}

float presentase(float *desimal){
	printf("================================\n");
	printf("Masukan angka persen =");
	scanf("%f",&*desimal);	
}



int main() {	
	int menu, a, b, result;
	double c,d,hasil;
	float desimal,persen,hasil2;
		printf("==================\n");
	printf("1. +\n");
	printf("2. -\n");
	printf("3. *\n");
	printf("4. /\n");
	printf("5. Mod\n");
	printf("6.persen\n");
	printf("==================\n");
	printf("Pilih Menu Diatas:"); scanf("%d", &menu);
	printf("\n");
	


	switch(menu) {
		case 1:
			tambah_bagi(&c,&d);
			hasil = penjumlahan(c, d);
			printf("Hasil Penjumlahan : %lf", hasil);
		    printf("\n==============================");
			break;
		case 2:
			tambah_bagi(&c,&d);
			hasil = pengurangan(c, d);
			printf("Hasil Pengurangan : %lf", hasil);
		    printf("\n==============================");	
			break;
		case 3:
			tambah_bagi(&c,&d);
			hasil = perkalian(c, d);
			printf("Hasil Perkalian : %lf", hasil);
		    printf("\n=============================");
			break;
		case 4:
			tambah_bagi(&c,&d);
			hasil = pembagian(c, d);
			printf("Hasil Pembagian : %lf", hasil);
			printf("\n=============================");
			break;
		case 5:
			modul(&a,&b);
			result = modulus(a,b);
			printf("Hasil Modulus :%d", result);
		  	printf("\n============================");
			break;
		case 6:
			presentase(&desimal);
			hasil2= persent(desimal);
			printf("Hasil %f:",hasil2);
			printf("\n============================");
			break;
			
		default:
			printf("============================");
			printf("\nMaaf pilihan anda salah");
			printf("\n============================");
			
	}
	
	
	return 0;
}

