#include <stdio.h>
#include <math.h>
#include "paulina.h"
#include "AuliaAziizah.h"
#include "XavieraSS.h"
#include "gian.h"
#include "yosua.h"

int main(){
	int ch;
	
	printf("1. Pangkat\n");
	printf("2. Konversi suhu\n");
	printf("3. Invers Sin\n");
	printf("4. Trigonometri\n");
	printf("5. Penjumlahan\n");
	
	
	
	scanf("%d", &ch);
	
	
	switch(ch){
		
		case 1 : pangkat2();
				 break;
				 
		case 2 : hasilKonversiCelcius();
				 break;
				 
		case 3 : InversSin();
				 break;
				 
		case 4 : next();
				 break;
				 
		case 5 : penjumlahan();
				 break;
				 
		default:
                printf("\nsalah !");
		
		
	}
	
	printf("\nPress any button to continue......");
    getch();
	
	return 0;
}
