#include <stdio.h>
#include "paulina.h"
#include "AuliaAziizah.h"
#include "XavieraSS.h"
#include "gian.h"
//#include "yosua.h"
//#include "brahmantya.h"

char tampil_kel(){
	system("cls");
	puts("\t\t\t\t================================================================================================");
	puts("\t\t\t	 _____                      _      ___    _  __    _                             _      _  _   ");
	puts("\t\t\t	|  __ \\                    | |    |__ \\  | |/ /   | |                           | |    | || |  ");
	puts("\t\t\t 	| |__) | __ ___  _   _  ___| | __    ) | | ' / ___| | ___  _ __ ___  _ __   ___ | | __ | || |_ ");
	puts("\t\t\t	|  ___/ '__/ _ \\| | | |/ _ \\ |/ /   / /  |  < / _ \\ |/ _ \\| '_ ` _ \\| '_ \\ / _ \\| |/ / |__   _|");
	puts("\t\t\t	| |   | | | (_) | |_| |  __/   <   / /_  | . \\  __/ | (_) | | | | | | |_) | (_) |   <     | |  ");
	puts("\t\t\t 	|_|   |_|  \\___/ \\__, |\\___|_|\\_\\ |____| |_|\\_\\___|_|\\___/|_| |_| |_| .__/ \\___/|_|\\_\\    |_|  ");
	puts("\t\t\t            	          __/ |                                             | |                      ");  
	puts("\t\t\t     	                 |___/                                              |_|                        ");
	puts("\t\t\t\t================================================================================================");
	printf("\n\n");
	
	
	
	
}

char tampil_menu(){
	
	printf("\t\t\t\t\t\t   ================================================================       \n");
	printf("\t\t\t\t\t\t  |                      Scientific Calculator                     |      \n");
	printf("\t\t\t\t\t\t   ================================================================       \n");
	printf("\t\t\t\t\t\t   ================================================================       \n");
	printf("\t\t\t\t\t\t  |                      [1]. Modulus                              |      \n");	
	printf("\t\t\t\t\t\t   ================================================================       \n");	
	printf("\t\t\t\t\t\t  |                      [2]. Trigonometri                         |      \n");
	printf("\t\t\t\t\t\t   ================================================================       \n");
	printf("\t\t\t\t\t\t  |                      [3]. Logaritma                            |      \n");
	printf("\t\t\t\t\t\t   ================================================================       \n");
	printf("\t\t\t\t\t\t  |                      [4]. Perpangkatan                         |      \n");
	printf("\t\t\t\t\t\t   ================================================================       \n");
	printf("\t\t\t\t\t\t  |                      [5]. Konversi                             |      \n");	
	printf("\t\t\t\t\t\t   ================================================================       \n");	
	printf("\t\t\t\t\t\t  |                      [6]. Turunan                              |      \n");
	printf("\t\t\t\t\t\t   ================================================================       \n");
	printf("\t\t\t\t\t\t  |                      [7]. Faktorial                            |      \n");
	printf("\t\t\t\t\t\t   ================================================================       \n");
	printf("\t\t\t\t\t\t  |                      [8]. Matriks                              |      \n");
	printf("\t\t\t\t\t\t   ================================================================       \n");
	printf("\t\t\t\t\t\t  |                      [9]. Mutlak                               |      \n");
	printf("\t\t\t\t\t\t   ================================================================       \n");
}



char perpangkatan(){
	
	int pilihpangkat;
	tampil_kel();
	printf("\t\t\t\t\t ==================================================================================       \n");
	printf("\t\t\t\t\t                                    ----------------                                      \n");
	printf("\t\t\t\t\t                                   (1) Perpangkatan                                       \n");
	printf("\t\t\t\t\t                                    ----------------                                      \n");
	printf("\t\t\t\t\t                                    ----------------                                      \n");
	printf("\t\t\t\t\t                                   (2) Akar                                               \n");
	printf("\t\t\t\t\t                                    ----------------                                      \n");
	printf("\t\t\t\t\t ==================================================================================       \n");
	printf("\t\t\t\t\t                                       PILIHAN : ");
	scanf("%d", &pilihpangkat);
	printf("\t\t\t\t\t ==================================================================================       \n");
	system("cls");
	switch(pilihpangkat)
	{
		case 1:
			pangkat2();
			break;
		case 2:
			akarsemua();
			break;
		
		default:
			printf("\t\t\t\t\t Mohon maaf pilihan anda salah! ");
			getche();
	}
	
}

void trigonomenu(){
	
	int pilihT;
	tampil_kel();
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
		case 2:
			akarsemua();
			break;
		
		default:
			printf("\t\t\t\t\t Mohon maaf pilihan anda salah! ");
			getche();
	}
	
}

void inversT()
{	

	
	system("cls");
	switch(inT())
	{
		case 1: InversSin ();
		break;
		
		case 2: InversCos ();
		break;
		
		case 3: InversTan ();
		break;
	 

	}
}
int inT()
{
    int list;
    printf("\n 1. Invers Sinus"); 
    printf("\n 2. Invers Cosin"); 
    printf("\n 3. Invers Tangen"); 
 
	printf("\n\n menu : "); 
    scanf("%d", &list);
    return list;
}


char salah(){
	
	printf("Input yang anda masukan salah");
	
}
