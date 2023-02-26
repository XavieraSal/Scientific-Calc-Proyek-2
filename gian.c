
#include "gian.h"

<<<<<<< HEAD

int maintrigono() {
    char operation[4], a[10];
    double hasil;
    printf(" Masukkan operasi trigonomentri (sin, cos, tan, cosec, secan, cotan): \n (contoh : sin 30) \n  : ");
    scanf("%s", operation);
    printf("");
    scanf("%s", a);
    hasil = trigonometri(operation, a);
    printf(" %s %s = %.2lf",operation,a, hasil);
    return 0;
}

int factorial(){
	int n;
	printf(" Masukkan bilangan untuk dihitung faktorialnya: ");
    scanf(" %d", &n);

    printf("%d! = %d\n", n, faktorial(n));
	
	return 0;
}


int menu()
{
    int list;
    printf("\n 1. Trigonometri"); 
    printf("\n 2. Factorial");  
	printf("\n\n menu : "); 
    scanf("%d", &list);
    return list;
}

int main()
=======
<<<<<<< HEAD
//float tampil_result()
//{
//	printf("\nsin dari %.0f adalah = %g" ,a , result);
//}

float hitung_sin(float sn)
{
	float temp;
	temp = sin(sn*phi/180);
	return temp;
}

float hitung_cos(float cs)
{
	float temp;
	temp = cos(cs*phi/180);
	return temp;
}

float hitung_tangen(float tn)
{
	float temp;
	temp = tan(tn*phi/180);
	return temp;
}

float hitung_cotan(float cn)
{
	float temp;
	temp = 1/tan(cn*phi/180);
	return temp;
}

float hitung_secan(float sc)
{
	float temp;
	temp = 1/cos(sc*phi/180);
	return temp;
}

float hitung_cosec(float csc)
{
	float temp;
	temp = 1/sin(csc*phi/180);
	return temp;
}

void sinus()
{
	double a;
 	printf(" SIN : \n Masukkan nilai: ");
    scanf("%lf", &a);
	result = hitung_sin(a);
    printf("\n sin dari %g derajat adalah = %.2f",a , result);
=======
void sinus()
{
	float a;
    printf("SIN : \nEnter angle in radians: ");
    scanf("%f", &a);
<<<<<<< HEAD
//    result = sin(a*phi/180);
    printf("\nsin dari derajat adalah = %g", result);
=======
    result = sin(a*phi/180);
    printf("\nsin dari %d derajat adalah = %g",a , result);
>>>>>>> 5ff53f59353d898c4ff505302887c9b7afb4b8a2
}

int hitung_sin(){
	result = sin(a*phi/180);
	return result;
>>>>>>> 915978c4568a4778c198143c1fd24064b0a2468e
}
void cosinus()
{
    double a;
    printf(" COS \n Masukkan nilai: ");
    scanf("%lf", &a);
    result = hitung_cos(a);
    printf("\n cos dari %g derajat adalah = %.2f",a , result);
}
void tangent()
{
    double a;
    printf(" Tangen \n Masukkan nilai: ");
    scanf("%lf", &a);
    result = hitung_tangen(a);
    printf("\n tan dari %g derajat adalah = %.2f",a , result);
}

void Cotan()
{
	double a;
	printf(" COTAN \n Masukkan nilai: " );
	scanf("%lf", &a);
	result =hitung_cotan(a);
	printf("\n Cot dari %g derajat adalah = %.2f",a , result);
}

void Secan()
{
	double a;
	printf(" SECAN \n Masukkan nilai: ");
	scanf("%lf", &a);
	result  = hitung_secan(a);
	printf("\n sec dari %g derajat adalah = %.2f",a , result );
}

void cosec()
{
	double a;
	printf(" COSEC \n Masukkan nilai: ");
	scanf("%lf", &a);
	result = hitung_cosec(a);
	printf("\n cosec dari %g derajat adalah = %.2f", a, result);
}
void factorial() {
    int angka, faktorial = 1, i;
    
    printf(" Faktorial \n Masukkan suatu bilangan bulat positif: ");
    scanf("%d", &angka);
//   faktorial = hitung_faktorial();
    if (angka < 0) {
        printf(" Maaf, faktorial hanya dapat dihitung untuk bilangan bulat positif.\n");
    }
    else {
        for (i = 1; i <= angka; i++) {
            faktorial *= i;
        }
        printf(" Faktorial dari %d adalah %d.\n", angka, faktorial);
		}
		return 0;
}


//int hitung_faktorial(i)
//{
//	int temp,faktorial = 1, angka;
//	 if (angka < 0) {
//        printf(" Maaf, faktorial hanya dapat dihitung untuk bilangan bulat positif.\n");
//    }
//    else {
//        for (i = 1; i <= angka; i++) {
//            faktorial *= i;
//            faktorial = temp;
//        }
//	return temp;
//}
//}
void main()
>>>>>>> cd70c7116ba59e082f19c56479c560f53b847e3c
{	char ulang='y';
	while (ulang=='y'){
	
	system("cls");
	switch(menu())
	{
<<<<<<< HEAD
		case 1: maintrigono();
=======
		case 1: sinus();
				hitung_sin();
>>>>>>> cd70c7116ba59e082f19c56479c560f53b847e3c
		break;
		
		case 2: factorial();
		break;
	 } 
	
	printf("\n\n\n Kembali ke menu? y (ya) / n (tidak) :  ");
	ulang = getch();
	system("cls");
	printf("%d",ulang);
	}
}

