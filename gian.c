#include <stdio.h>
#include <stdlib.h>
#define phi 3.14159265
#include <math.h>
#include "gian.h"
int k = 0, a, b;
char list;
float result = 0;	

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
int factorial() {
//    int angka, faktorial = 1, i;
//    
//    printf(" Faktorial \n Masukkan suatu bilangan bulat positif: ");
//    scanf("%d", &angka);
////    faktorial = hitung_faktorial();
//    if (angka < 0) {
//        printf(" Maaf, faktorial hanya dapat dihitung untuk bilangan bulat positif.\n");
//    }
//    else {
//        for (i = 1; i <= angka; i++) {
//            faktorial *= i;
//        }
//        printf(" Faktorial dari %d adalah %d.\n", angka, faktorial);
//		}
//		return 0;

int angka;
    printf(" Masukkan angka untuk dicari faktorialnya: ");
    scanf(" %d", &angka);

    printf(" Hasil dari %d! = %d", angka, faktorial(angka));
//	printf("%d",i);
//    if(i != angka) {
//      printf (" * ");
 //   }
    return 0;
}

int faktorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * faktorial(n-1);    
    }
}

int integral()
{
	float a,b,c,j,i;
	printf("Bentuk Umum (ax^2) + (bx) + (c)\n");
    printf("Masukkan nilai a : ");
    scanf("%f",&a);
    printf("Masukkan nilai b : ");
    scanf("%f",&b);
    printf("Masukkan nilai c : ");
    scanf("%f",&c);
    printf("\n""\n");
    i=a/3;
    j=b/2;
    printf("Integralnya ialah : (%.2fx^3)+(%.2fx^2) + (%.2fx)",i,j,c);
}

//	int faktorial = 1, angka, i;
//	if (angka < 0) {
//        printf(" Maaf, faktorial hanya dapat dihitung untuk bilangan bulat positif.\n");
//    }
//    else {
//        for (i = 1; i <= angka; i++) {
//            faktorial *= i;
//        }
//	return 0;
//}
//}

void turunan()
{
	float a,b,c,t;
	printf("Bentuk Umum (ax^2) + (bx) + (c)\n");
    printf("Masukkan nilai a : ");
    scanf("%f",&a);
    printf("Masukkan nilai b : ");
    scanf("%f",&b);
    printf("Masukkan nilai c : ");
    scanf("%f",&c);
//    printf("\n""\n");
    printf("Fungsinya Adalah :  %.2fx^2  +  %.2fx  +  %.2f ",a,b,c);
    printf("\n");
    t=a*2;
    printf("Turunannya adalah   :  %.2fx  +  %.2f  + 0\n",t,b);
}

void trigonometri()
{	

//	char ulang='y';
//	while (ulang=='y'){
	
	system("cls");
	switch(menu())
	{
		case 1: sinus();
		break;
		
		case 2: cosinus();
		break;
		
		case 3: tangent();
		break;
		
		case 4: Cotan();
		break;
		
		case 5: Secan();
		break;
		
		case 6: cosec();
		break;
	 
//	 	case 7: factorial();
//	 	break;
//	 	
//	 	case 8: turunan();
//	 	break;
//	 	
//	 	case 9: integral();
//	 	break;
	 } 
	
//	printf("\n\n\n Kembali ke menu? y (ya) / n (tidak) :  ");
//	ulang = getch();
//	system("cls");
//	printf("%d",ulang);
//	}

}

int menu()
{
    int list;
    printf("\n 1. Sinus"); 
    printf("\n 2. Cosin"); 
    printf("\n 3. Tangen"); 
    printf("\n 4. Cotan"); 
	printf("\n 5. Secan"); 
	printf("\n 6. Cosec"); 
//	printf("\n 7. Faktorial");
//	printf("\n 8. Turunan");
//	printf("\n 9. Integral");
	printf("\n\n menu : "); 
    scanf("%d", &list);
    return list;
}

