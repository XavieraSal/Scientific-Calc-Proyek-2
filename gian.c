
#include "gian.h"


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
{	char ulang='y';
	while (ulang=='y'){
	
	system("cls");
	switch(menu())
	{
		case 1: maintrigono();
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

