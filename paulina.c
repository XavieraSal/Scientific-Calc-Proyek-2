#include "paulina.h"

int main(){
//	char operasi[10];
//	float angka, n;
	int nilai, angka;
	double x;
	int p, y, hasil;
	
	printf("Masukkan angka: ");
    scanf("%d", &p);
    printf("Masukkan pangkat: ");
    scanf("%d", &y);
    hasil = pangkat(p, y);
	printf("%d pangkat %d adalah %d\n", p, y, hasil);
    return 0;
    
//	printf("Masukkan angka: ");
//    scanf("%lf", &x);
//	printf("Akar dari %.2f adalah %.6f\n", x, akar2(x));
//     return 0;
   
   printf("Masukkan angka: ");
   scanf("%d", &angka);
   nilai = mutlak(angka);
   printf("Nilai mutlak dari %d adalah %d", angka, mutlak(angka));

   return 0;
}


