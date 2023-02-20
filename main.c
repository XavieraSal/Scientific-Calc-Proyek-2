#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include "brahmantya.h"
#include "gian.h"
#include "paulina.h"
#include "XavieraSS.h"
#include "AuliaAziizah.h"


int main() {
	
	int pilih1, pilih2;
	int x,y,result;
	int pilihT;
	int inT;

	char re='y';
	
	
	
	while(re=='y'){ 
		
		tampil_kel();

		int tampilan_awal,pilih1,pilih2;
	printf("\t\t\t\t   _____________________________________________________________________________________   \n");
	printf("\t\t\t\t  |   _______________________________________________________________________________   |  \n");
	printf("\t\t\t\t  |  |                                                                               |  |  \n");
	printf("\t\t\t\t  |  |                                                                            0  |  |  \n");
	printf("\t\t\t\t  |  |_______________________________________________________________________________|  |  \n");
	printf("\t\t\t\t  |                                                                                     |  \n");
	printf("\t\t\t\t  |   _______________________________________________________________________________   |  \n");
	printf("\t\t\t\t  |  |        |        |         |         |         |         |                     |  |  \n");
	printf("\t\t\t\t  |  |  Sin   |  log   |    *    |   phi   |    .    |    =    |          AC         |  |  \n");
	printf("\t\t\t\t  |  |________|________|_________|_________|_________|_________|_____________________|  |  \n");
	printf("\t\t\t\t  |   _______________________________________________________________________________   |  \n");
	printf("\t\t\t\t  |  |        |        |         |         |         |         |          |          |  |  \n");
	printf("\t\t\t\t  |  |  Cos   |   +    |    /    |    9    |    8    |    7    |     6    |     5    |  |  \n");
	printf("\t\t\t\t  |  |________|________|_________|_________|_________|_________|__________|__________|  |  \n");
	printf("\t\t\t\t  |   _______________________________________________________________________________   |  \n");
	printf("\t\t\t\t  |  |        |        |         |         |         |         |          |          |  |  \n");
	printf("\t\t\t\t  |  |  Tan   |   -    |    ^    |    0    |    1    |    2    |     3    |     4    |  |  \n");
	printf("\t\t\t\t  |  |________|________|_________|_________|_________|_________|__________|__________|  |  \n");
	printf("\t\t\t\t  |   _____________________________________    ______________________________________   |  \n");
	printf("\t\t\t\t  |  |                                     |  |                                      |  |  \n");
	printf("\t\t\t\t  |  |           1.ARITMATIKA              |  |             2.SCIENTIFIC             |  |  \n");
	printf("\t\t\t\t  |  |_____________________________________|  |______________________________________|  |  \n");
	printf("\t\t\t\t  |_____________________________________________________________________________________|  \n");
	
	printf("\t\t\t\t                                         PILIHAN : ");
	scanf("%d", &tampilan_awal);
	switch(tampilan_awal)
	{
		case 1: aritmatik();
			break;
		case 2: tampil_menu();
				printf("\t\t\t\t\t\t\t\t Input Pilihan Nomor Menu :  ");scanf("%d", &pilih1); 

		
		switch(pilih1){
		
		case 1 : tampil_kel();
				 printf("============================\n");
				printf("Masukan nilai Pertama =");
				scanf("%d",&x);
				printf("Masukan nilai Kedua =");
				scanf("%d",&y);
				result = modulus(x,y);
				printf("Hasil Modulus :%d", result);
				 break;
				 
		case 2 : tampil_kel();
				 
				printf("\t\t\t\t\t ==================================================================================       \n");
				printf("\t\t\t\t\t                                    ----------------                                      \n");
				printf("\t\t\t\t\t                                   (1) Trigonometri                                       \n");
				printf("\t\t\t\t\t                                    ----------------                                      \n");
				printf("\t\t\t\t\t                                    ----------------                                      \n");
				printf("\t\t\t\t\t                                   (2) Invers                                             \n");
				printf("\t\t\t\t\t                                    ----------------                                      \n");
				printf("\t\t\t\t\t ==================================================================================       \n");
				printf("\t\t\t\t\t                                       PILIHAN : ");
				scanf("%d", &pilihT);
				printf("\t\t\t\t\t ==================================================================================       \n");
				system("cls");
				switch(pilihT)
				{
					case 1:
						trigonometri();
						break;
					case 2: tampil_kel();
						printf("\n 1. Invers Sinus"); 
					    printf("\n 2. Invers Cosin"); 
					    printf("\n 3. Invers Tangen"); 
					 
						printf("\n\n menu : "); 
					    scanf("%d", &inT);
					    
					    switch(inT)
						{
							case 1: InversSin ();
							break;
							
							case 2: InversCos ();
							break;
							
							case 3: InversTan ();
							break;
						 
					
						}
					    
						break;
					
					default:
						printf("\t\t\t\t\t Mohon maaf pilihan anda salah! ");
						getche();
				}
				 break;
				 
		case 3 : tampil_kel();
				 printf("1. Logaritma Biasa\n");
				 printf("2. Logaritma Natural\n");
				 scanf("%d",&pilih2);
				 switch(pilih2){
				 	
				 	case 1 : logBiasa();
				 			 break;
				 			 
				 	case 2 : logNatural();
				 			 break;
				 			 
				 	default : printf("\nsalah !");
				 	
				 }
				 
				 break;
				 
			case 4 : tampil_kel();
					 perpangkatan();
					 break;
					 
			case 5 : tampil_kel();
					 menuKonversi();;
					 break;
					 
			case 6 : tampil_kel();
					 Turunan();
					 break;
					 
			case 7 : tampil_kel();
					 factorial();;
					 break;
					 
			case 8 : tampil_kel();
					 menuMatriks();;
					 break;
			
			case 9 : tampil_kel();
					 mutlak();;
					 break;
					 		 
			default:
	                printf("\nsalah input");
	    	}
			//tampilan menu semuanya kecuali priority
			break;
		default: printf("\nsalah input");
			//pesan salah!
	}
		
//		tampil_menu();
			
		
		
		
		
		
		printf("\nApakah anda ingin kembali ke menu awal? (y/t)");
		re=getch();
		
		
	}
	
	
	return 0;
}
