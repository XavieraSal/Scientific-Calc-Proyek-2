#include <stdio.h>
#include <stdlib.h>
#include "paulina.h"
#include <math.h>

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
	printf("\t\t\t\t\t                                    ----------------                                      \n");
	printf("\t\t\t\t\t                                   (4) Logaritma 10                                       \n");
	printf("\t\t\t\t\t                                    ----------------                                      \n");
	printf("\t\t\t\t\t ==================================================================================       \n");
	printf("\t\t\t\t\t                                       PILIHAN : ");
	scanf("%d", &menu);
	printf("\t\t\t\t\t ==================================================================================       \n");
	system("cls");
	switch(menu)
	{
		case 1:
			pangkat2();
			break;
		case 2:
			akarsemua();
			break;
		case 3:
			mutlak();
			break;
		case 4:
			logBiasa();
			break;
		default:
			printf("\t\t\t\t\t Mohon maaf pilihan anda salah! ");
			getche();
	}	

}

int pangkat (int x, int y)
{
	int p;
	int hasil=1;
	 for(p=1;p<=y;p++){
        hasil=hasil*x;
    }
    return hasil;
}

void pangkat2()
{
	int x,y;
	int hasil;
	
	printf(" Perhitungan Pangkat \n ");
	printf("Masukkan angka   : ");
    scanf("%d", &x);
    printf("Pangkat          : ");
    scanf("%d", &y);
	hasil = pangkat(x, y);
    printf("\nHasilnya adalah  : %d", hasil);
}

float akar(int angka, int p)
{	
	float hasil;
	hasil = pow (angka, 1.0/p);
	return hasil;
}

void akarsemua()
{ 
	int p, angka;
	float hasil;
	printf("\n\n\n   Perhitungan Akar \n");
	printf("Masukkan angka : ");
    scanf("%d", &angka);
    printf("Masukkan akar : ");
    scanf("%d", &p);
    hasil = akar(angka, p);
    printf("Akar %d dari %d adalah %.3f \n ", p, angka, hasil);
}

int nilaimutlak(int x)
{
	int y;
	y = abs(x);
	return y;    
}
    
void mutlak()
{
	int x, mutlak;
	printf("\n\n\n   Perhitungan Nilai Mutlak \n");
	printf("Masukkan angka   : ");
	scanf("%d", &x);
	mutlak = nilaimutlak(x);
	printf("Nilai mutlak dari %d : %d\n", x, mutlak);
}


float logBasis10(double n)
{
	return log10(n);
}

void logBiasa()
{
	double n, result;
	printf("\n\n\n   Logaritma Basis 10 \n");
    printf("Masukkan angka   : ");
    scanf("%lf", &n);
    if(n<=0.0)
    {
    printf("angka yang dimasukkan harus lebih besar sama dengan dari 0.0\n");
    }
    else
    {
    result = logBasis10 (n);
    printf("Hasilnya adalah  : %.3f", result);
	}
}








