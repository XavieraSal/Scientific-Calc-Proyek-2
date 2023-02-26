#include "paulina.h"

<<<<<<< HEAD
int main(){
	char operasi[10];
	float angka;
	
	scanf("%s %f", operasi, &angka);
	if(strstr(operasi, "log")){
		sscanf(operasi, "log %f", &angka);
		return logBiasa(angka);
	}
}
=======
int main (void){
	pangkat2();
	akardua();
	akartiga();
	logBiasa();
	mutlak();
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
	printf("   Perhitungan Pangkat \n");
	printf("Masukkan angka   : ");
    scanf("%i", &x);
    printf("Pangkat          : ");
    scanf("%i", &y);
 
 	hasil=pangkat ( x,  y);
    printf("Hasilnya adalah  : %d", hasil);
}

int akarkuadrad(int a)
{
	float x;
	x=sqrt(a); //akar pangkat 2 dari x
	printf("Akar kuadrat dari %d : %4.2f",a,x);
}

void akardua()
{
	float a;
	printf("\n\n\n   Perhitungan Akar Kuadrad \n");
	printf("Masukan angka    : ");
	scanf("%f",&a);
	akarkuadrad(a);
}

int akarkubik(int angka)
{
	double hasil;
    hasil = pow(angka, 1.0/3.0);
	printf("Akar tiga dari %d : %4.2f", angka, hasil);
}

void akartiga() 
{
	double angka;
	printf("\n\n\n   Perhitungan Akar Kubik \n");
	printf("Masukkan angka   : ");
   	scanf("%lf", &angka);
   	akarkubik(angka);
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
    printf("Hasilnya adalah  : %lf", result);
	}
}

int nilaimutlak(int x)
{
	int y;
	y = abs(x);    
    printf("Nilai mutlak dari %d adalah %d\n", x, y);
}
    
void mutlak()
{
	int x;
	printf("\n\n\n   Perhitungan Nilai Mutlak \n");
	printf("Masukkan angka   : ");
	scanf("%d", &x);
	nilaimutlak(x);
}





>>>>>>> 03985013bd0fda66f8b6888c42834a5357330d93
