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

/*  is : terdapat 2 buah angka, satu sebagai basis dan satu sebagai pangkat
	fs : hasil perhitungan pangkat
	referensi : http://cahyasmara.blogspot.com/2017/04/program-perhitungan-perpangkatan-dengan.html
*/
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

/*  is : terdapat 2 buang angka, satu sebagai basis dan satu sebagai akar
	fs : hasil perhitungan akar
	referensi : Teman (Ridha)	
*/
double akarsemua(double x, double n) 
{
    double hasil = 1.0;
    double delta = 0.00001;
    double error = 1.0;
    double precision = 0.00001;

    while (error > precision) {
        double prevResult = hasil;
        hasil = ((n - 1.0) * hasil + x / pow(hasil, n - 1)) / n;
        error = (hasil - prevResult) / prevResult;
        if (error < 0) {
            error = -error;
        }
        if (error < delta) {
            error = delta;
        }
    }
    return hasil;
}

void akar()
{
	double base, hasil;
    double n;
    printf("Masukkan bilangan: ");
    scanf("%lf", &base);
    printf("Masukkan akar: ");
    scanf("%lf", &n);
    hasil = akarsemua(base, n);
    printf("%.2lf akar %.2lf adalah: %.5lf\n", base, n, hasil);
}

/*  is : terdapat 1 buah angka
	fs : hasil perhitungan nilai mutlak
	referensi : kalkulator
*/
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

/*  is :
	fs :
	referensi : Tugas besar pribadi DDP semester 1,
				https://stackoverflow.com/questions/34008206/how-to-create-a-new-text-file-in-c
*/
void history() {
    FILE *file;
    int result;

    // Buka file untuk ditulis (file akan dibuat jika belum ada)
    file = fopen("history.txt", "w");

    if (file == NULL) {
        printf("Gagal membuka file.");
        return 1;
    }
    // Tulis riwayat operasi ke file
    fprintf(file, "Hasil: %d\n", result);

    printf("Hasil: %d\n", result);
    printf("Riwayat operasi telah disimpan dalam file 'history.txt'.\n");

    fclose(file);
}


