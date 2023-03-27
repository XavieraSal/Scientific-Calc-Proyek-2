#include <stdio.h>
#include <stdlib.h>
#include "paulina.h"

int main (void){
	pilihan();
}

void pilihan(){
	int menu;
	pilihan;
	printf("\t\t\t\t\t ==================================================================================       \n");
	printf("\t\t\t\t\t                                    ----------------                                      \n");
	printf("\t\t\t\t\t                                   (1) Perpangkatan                                       \n");
	printf("\t\t\t\t\t                                    ----------------                                      \n");
	printf("\t\t\t\t\t                                    ----------------                                      \n");
	printf("\t\t\t\t\t                                   (2) Akar                                               \n");
	printf("\t\t\t\t\t                                    ----------------                                      \n");
	printf("\t\t\t\t\t                                    ----------------                                      \n");
	printf("\t\t\t\t\t                                   (3) Mutlak                                             \n");
	printf("\t\t\t\t\t                                    ----------------                                      \n");
	printf("\t\t\t\t\t ==================================================================================       \n");
	printf("\t\t\t\t\t                                       PILIHAN : ");
	scanf("%d", &menu);
	printf("\t\t\t\t\t ==================================================================================       \n");
	system("cls");
	switch(menu)
	{
		case 1:
			perpangkatan();
			break;
		case 2:
			akar();
			break;
		case 3:
			mutlak();
			break;
		default:
			printf("\t\t\t\t\t Mohon maaf pilihan anda salah! ");
			getche();
	}	

}

int pangkat(int x, int y)
{
	int p;
	int hasil=1;
	for(p=1;p<=y;p++){  //y pangkat
		hasil=hasil*x;				
    }
    return hasil;
}

void perpangkatan()
{
	int x,y;
	int hasil;
	
	printf(" Perhitungan Pangkat \n");
	printf("Masukkan angka   : ");
    scanf("%d", &x);
    printf("Pangkat          : ");
    scanf("%d", &y);
	hasil = pangkat(x, y);
    printf("Hasilnya adalah  : %d", hasil);
}

double akar2 (double x)
{
    double epsilon, hasil = x;

    while ((hasil - x / hasil) > epsilon) {
        hasil = (hasil + x / hasil) / 2;
    }

    return hasil;
}

void akar()
{
	double x;
	float hasil;
    printf("Masukkan angka: ");
    scanf("%lf", &x);
    hasil = akar2(x);
    printf("Akar dari %.2f adalah %.6f\n", x, hasil);
}

int nilaimutlak(int angka) 
{
   if (angka < 0) {
      return -angka;
   }
   else {
      return angka;
   }
}
   
void mutlak()
{
	int angka;
   	printf("Masukkan angka: ");
  	scanf("%d", &angka);
	printf("Nilai mutlak dari %d adalah %d", angka, nilaimutlak(angka));
}

