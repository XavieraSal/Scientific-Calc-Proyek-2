#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "paulina.h"
#include "AuliaAziizah.h"
#include "XavieraSS.h"
#include "gian.h"
#include "yosua.h"
#include "brahmantya.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int pilih1, pilih2;
	matematika arr[100];
	char *p;
	char input[300];
	int cek_o,cek_a, op=0;
	int i,j,c,d,a,b,pilih,l,panjang;
	double hasil;
	int arrlen = sizeof arr / sizeof arr[0];
	memset(arr, 0, sizeof(arr));
	double n, result; 
	
	double koef, ekspo, result1, result2;
	char var = 't';
	char re='y';
	char satuan[10];
    float nilai;
	
	int pilihm;
	
	while(re=='y'){ 
		
//		tampil_kel();

		int tampilan_awal,pilih1,pilih2;
		system("cls");
		printf("\t\t\t\t\t              ______________________________________________________________________________________________________________   \n");
		printf("\t\t\t\t\t             /  ________________________________________________________________________________________________________   /   \n");
		printf("\t\t\t\t\t            /  /                                                                                                       /  /    \n");
		printf("\t\t\t\t\t           /  /                                                                                                       /  /     \n");
		printf("\t\t\t\t\t          /  /                                                                                                   0   /  /      \n");
		printf("\t\t\t\t\t         /  /                                                                                                       /  /       \n");
		printf("\t\t\t\t\t        /  /_______________________________________________________________________________________________________/  /        \n");
		printf("\t\t\t\t\t       /  ________________________________________________________________________________________________________   /         \n");
		printf("\t\t\t\t\t      |  |                                                                                                        |  |         \n");
		printf("\t\t\t\t\t      |  |  _________    _________    _________    _________    _________    _________    ______________________  |  |         \n");
		printf("\t\t\t\t\t      |  | |         |  |         |  |         |  |         |  |         |  |         |  |                      | |  |         \n");
		printf("\t\t\t\t\t      |  | |   Sin   |  |   log   |  |    *    |  |   phi   |  |    .    |  |    =    |  |          AC          | |  |         \n");
		printf("\t\t\t\t\t    	|  | |_________|  |_________|  |_________|  |_________|  |_________|  |_________|  |______________________| |  |         \n");
	    printf("\t\t\t\t\t      |  |  _________    _________    _________    _________    _________    _________    _________    _________  |  |         \n");
		printf("\t\t\t\t\t    	|  | |         |  |         |  |         |  |         |  |         |  |         |  |         |  |         | |  |         \n");
		printf("\t\t\t\t\t    	|  | |   Cos   |  |    +    |  |    /    |  |    9    |  |    8    |  |    7    |  |    6    |  |    5    | |  |         \n");
		printf("\t\t\t\t\t    	|  | |_________|  |_________|  |_________|  |_________|  |_________|  |_________|  |_________|  |_________| |  |         \n");
	    printf("\t\t\t\t\t      |  |  _________    _________    _________    _________    _________    _________    _________    _________  |  |         \n");
		printf("\t\t\t\t\t    	|  | |         |  |         |  |         |  |         |  |         |  |         |  |         |  |         | |  |         \n");
		printf("\t\t\t\t\t    	|  | |   Tan   |  |    -    |  |    ^    |  |    0    |  |    1    |  |    2    |  |    3    |  |    4    | |  |         \n");
		printf("\t\t\t\t\t    	|  | |_________|  |_________|  |_________|  |_________|  |_________|  |_________|  |_________|  |_________| |  |         \n");
		printf("\t\t\t\t\t      |  |  ________________________________________________    ________________________________________________  |  |         \n");
		printf("\t\t\t\t\t      |  | |                                                |  |                                                | |  |         \n");
		printf("\t\t\t\t\t      |  | |               1. SCIENTIFIC                    |  |                  2. LAINNYA                    | |  |         \n");
		printf("\t\t\t\t\t      |  | |________________________________________________|  |________________________________________________| |  |         \n");
		printf("\t\t\t\t\t      |  |________________________________________________________________________________________________________|  |         \n");
		printf("\t\t\t\t\t      |______________________________________________________________________________________________________________|         \n");
		
		printf("\t\t\t\t\t                                                 PILIHAN : ");
		scanf("%d", &tampilan_awal);
		switch(tampilan_awal)
		{
			case 1: printf("\n\nMasukan operasi matematika (+, - , *, /, ^, v, %, ! log, ln,sin, cos, tan, sec, cosec, cot ||, (),) dipisahkan dengan spasi");
					printf("\nInsert : ");
					getchar();
					fgets(input, sizeof(input), stdin);
						
						
					p = strtok(input, " ");
					
					i=0;
					cek_o=0;
					cek_a=0;
					while (p != NULL) {
				        if (isdigit(p[0]) || isdigit(p[1]) && p[0] == '-' || p[0] == '.'){
				        	
				            arr[i].angka = atof(p);
				            cek_a++;
				            
				        }
						
						else if (strcmp(p, "pi") == 0) {
							    arr[i].angka = 3.14;
							    cek_a++;
							    
							}  
				        
						else if(!isdigit(p[0])){
						
							if (p[0]=='+') {
					            arr[i].operasi = p[0];
					            cek_o++;
					            op++;
				            
					        } 
					        
					        else if (!isdigit(p[1]) && p[0]=='-' ) {
					            arr[i].operasi = p[0];
					            cek_o++;
					            op++;
					            
					        } 
					        
					        else if (p[0]=='*') {
					            arr[i].operasi = p[0];
					            cek_o++;
					            op++;
					            
					        } 
					        
					        else if (p[0]=='/') {
					            arr[i].operasi = p[0];
					            cek_o++;
					            op++;
					            
					        } 
					        else if (p[0] == '^') {
							    arr[i].operasi = p[0];
							    cek_o++;
							    op++;
							    
							} 
							else if (p[0] == 'v') {
							    arr[i].operasi = p[0];
							    cek_o++;
							    op++;
							    
							} 
							else if (strcmp(p, "sin") == 0 || strcmp(p, "Sin") == 0 || strcmp(p, "SIN") == 0) {
							    arr[i].operasi = 'S';
							    cek_o++;
							    op++;
							    
							} 
							else if (strcmp(p, "cos") == 0 || strcmp(p, "Cos") == 0 || strcmp(p, "COS") == 0) {
							    arr[i].operasi = 'C';
							    cek_o++;
							    op++;
							    
							} 
							else if (strcmp(p, "tan") == 0 || strcmp(p, "Tan") == 0 || strcmp(p, "TAN") == 0) {
							    arr[i].operasi = 'T';
							    cek_o++;
							    op++;
							    
							}
							else if (strcmp(p, "cosec") == 0 || strcmp(p, "Cosec") == 0 || strcmp(p, "COSEC") == 0) {
							    arr[i].operasi = 's';
							    cek_o++;
							    op++;
							    
							} 
							else if (strcmp(p, "sec") == 0 || strcmp(p, "Sec") == 0 || strcmp(p, "SEC") == 0) {
							    arr[i].operasi = 'c';
							    cek_o++;
							    op++;
							    
							} 
							else if (strcmp(p, "cot") == 0 || strcmp(p, "Cot") == 0 || strcmp(p, "COT") == 0) {
							    arr[i].operasi = 't';
							    cek_o++;
							    op++;
							    
							}
							
							else if (strcmp(p, "log") == 0) {
							    arr[i].operasi = 'L';
							    cek_o++;
							    op++;
							    
							} 
							
							else if (strcmp(p, "ln") == 0) {
							    arr[i].operasi = 'l';
							    cek_o++;
							    op++;
							    
							} 
							 
							else if (p[0]== '%') {
							    arr[i].operasi = p[0];
							    cek_o++;
							    op++;
							    
							} 
				
							else if (p[0] == '!') {
							    arr[i].operasi = p[0];
							    cek_o++;
							    op++;
							    
							} 
							
							else if (p[0] == '(' || p[0] == ')') {
							    arr[i].operasi = p[0];
							    cek_o++;
							    op++;
							    
							} 
							
							else if (p[0] == '|') {
							    arr[i].operasi = p[0];
							    cek_o++;
							    op++;
							    
							} 
							
							
							
						}
						
						else {
					            printf("Salah input: %s\n", p);
					            return 1;
					        }
						
						
				        p = strtok(NULL, " ");
				        i++;
				    }
				    
				    
				    panjang=cek_a+cek_o;
				    i=0;
					
				    
				    
					hasil=hitung(arr,panjang, op);
					printf("hasil %.2lf", hasil);
				break;
				
			case 2: printf("\t\t\t\t\t\t   ================================================================       \n");
					printf("\t\t\t\t\t\t  |                          Fitur Lainnya                         |      \n");
					printf("\t\t\t\t\t\t   ================================================================       \n");
					printf("\t\t\t\t\t\t   ================================================================       \n");
					printf("\t\t\t\t\t\t  |                      [1]. Matriks                              |      \n");	
					printf("\t\t\t\t\t\t   ================================================================       \n");	
					printf("\t\t\t\t\t\t  |                      [2]. Konversi                             |      \n");
					printf("\t\t\t\t\t\t   ================================================================       \n");
					printf("\t\t\t\t\t\t  |                      [3]. Invers                               |      \n");
					printf("\t\t\t\t\t\t   ================================================================       \n");
					printf("\t\t\t\t\t\t  |                      [4]. Turunan                              |      \n");
					printf("\t\t\t\t\t\t   ================================================================       \n");
					printf("\t\t\t\t\t                                                 PILIHAN : ");
					scanf("%d", &pilih1);
					
					switch(pilih1){
						
						case 1: 
								
								system("cls");
								printf("Operasi Matriks \n");
								printf("1. Penjumlahan\n");
								printf("2. Pengurangan\n");	
								printf("3. Perkalian\n");
								printf("4. Perkalian Skalar\n");
								printf("5. Transpose\n");
								printf("Pilih : ");
								scanf("%d", &pilihm);
								switch(pilihm){
									case 1:matriksPenjumlahan();
										break;
									case 2:matriksPengurangan();
										break;
									case 3:matriksPerkalian();
										break;
									case 4:matriksPerkalianSkalar();
										break;
									case 5:transposeMatriks();
										break;
							    getch();
								}
								break;
						
						case 2: printf("\nMasukan nilai dan satuannya : ");
								scanf("%f %s", &nilai, satuan);
	
								if (strcmp(satuan, "C") == 0){
									sscanf(satuan,"%f C",&nilai);
							        hasilKonversiCelcius(nilai);
							    } else if (strcmp(satuan, "F") == 0){
									sscanf(satuan,"%f F",&nilai);
							        hasilKonversiFahrenheit(nilai);
							    } else if (strcmp(satuan, "K") == 0){
							    	sscanf(satuan,"%f K",&nilai);
							        hasilKonversiKelvin(nilai);
								} 
								else if (strcmp(satuan, "km") == 0){
									sscanf(satuan,"%f km",&nilai);
							        hasilKonversiKm(nilai);
							    } else if(strcmp(satuan, "hm") == 0){
									sscanf(satuan,"%f hm",&nilai);
							        hasilKonversiHm(nilai);
							    } else if(strcmp(satuan, "dam") == 0){
							    	sscanf(satuan,"%f dam",&nilai);
							        hasilKonversiDam(nilai);
								} else if(strcmp(satuan, "m") == 0){
							    	sscanf(satuan,"%f m",&nilai);
							        hasilKonversiM(nilai);
								} else if(strcmp(satuan, "dm") == 0){
							    	sscanf(satuan,"%f dm",&nilai);
							        hasilKonversiDm(nilai);
								} else if(strcmp(satuan, "cm") == 0){
							    	sscanf(satuan,"%f cm",&nilai);
							        hasilKonversiCm(nilai);
							    } else if(strcmp(satuan, "mm") == 0){
							    	sscanf(satuan,"%f mm",&nilai);
							        hasilKonversiMm(nilai);
								}
								else if(strcmp(satuan, "hari") == 0){
									sscanf(satuan,"%f hari",&nilai);
							        hasilKonversiHari(nilai);
							    } else if(strcmp(satuan, "jam") == 0){
							    	sscanf(satuan,"%f jam",&nilai);
							        hasilKonversiJam(nilai);
								} else if(strcmp(satuan, "menit") == 0){
									sscanf(satuan,"%f menit",&nilai);
							        hasilKonversiMenit(nilai);
							    } else if(strcmp(satuan, "detik") == 0){
									sscanf(satuan,"%f detik",&nilai);
							        hasilKonversiDetik(nilai);
								}
								if (strcmp(satuan, "km2") == 0){
									sscanf(satuan,"%f km2",&nilai);
							        hasilKonversiKm2(nilai);
							    } else if(strcmp(satuan, "hm2") == 0){
									sscanf(satuan,"%f hm2",&nilai);
							        hasilKonversiHm2(nilai);
							    } else if(strcmp(satuan, "dam2") == 0){
							    	sscanf(satuan,"%f dam2",&nilai);
							        hasilKonversiDam2(nilai);
								} else if(strcmp(satuan, "m2") == 0){
							    	sscanf(satuan,"%f m2",&nilai);
							        hasilKonversiM2(nilai);
								} else if(strcmp(satuan, "dm2") == 0){
							    	sscanf(satuan,"%f dm2",&nilai);
							        hasilKonversiDm2(nilai);
								} else if(strcmp(satuan, "cm2") == 0){
							    	sscanf(satuan,"%f cm2",&nilai);
							        hasilKonversiCm2(nilai);
							    } else if(strcmp(satuan, "mm2") == 0){
							    	sscanf(satuan,"%f mm2",&nilai);
							        hasilKonversiMm(nilai);
								} 
								else
									printf("Input salah...");
								break;
						
						case 3: printf("\t\t\t\t\t\t   ================================================================       \n");
								printf("\t\t\t\t\t\t  |                            INVERS                              |      \n");
								printf("\t\t\t\t\t\t   ================================================================       \n");
								printf("\t\t\t\t\t\t   ================================================================       \n");
								printf("\t\t\t\t\t\t  |                      [1]. Sin                                  |      \n");	
								printf("\t\t\t\t\t\t   ================================================================       \n");	
								printf("\t\t\t\t\t\t  |                      [2]. Cos                                  |      \n");
								printf("\t\t\t\t\t\t   ================================================================       \n");
								printf("\t\t\t\t\t\t  |                      [3]. Tan                                  |      \n");
								printf("\t\t\t\t\t\t   ================================================================       \n");
								printf("\t\t\t\t\t                                                 PILIHAN : ");
								scanf("%d", &pilih2);
								
								switch(pilih2){
									
									case 1: printf("\nInvers Sin: ");   
										    printf("\nMasukkan sebuah angka: ");                
										    scanf("%lf",&n);
										    if(n>1 || n<-1)  //tidak di dalam range
										    {
										        printf("Tidak di dalam range");
										    }
										    else
										    {
										        result = InversSinRad (n);
										        printf("Inverse dari sin(%.2f) = %.2lf dalam radian\n", n, result);
										
										
										        result = InversSinDrjt (n);    
										        printf("Inverse dari sin(%.2f) = %.2lf dalam derajat\n", n, result);
										    }
											break;
									
									case 2: printf("\nInvers Cos: "); 
										    printf("\nMasukkan sebuah angka: ");                
										    scanf("%lf",&n);
										    if(n>1 || n<-1)  //tidak di dalam range
										    {
										        printf("Tidak di dalam range");
										    }
										    else
										    {
										        result = InversCosRad(n);
										        printf("Invers dari cos(%.2f) = %.2lf dalam radian\n", n, result);
										
										
										        result = InversCosDrjt(n);    
										        printf("Inverse dari sin(%.2f) = %.2lf dalam derajat\n", n, result);
										    }
											break;
											
									case 3: printf("\nInvers Tan: "); 
										    printf("\nMasukkan sebuah angka: ");                
										    scanf("%lf",&n);
										    
										    result = InversTanRad(n);
										    printf("\nInverse of tan(%.2f) = %.2f in radians", n, result);
										
										    result = InversTanDrjt (n);
										    printf("\nInverse of tan(%.2f) = %.2f in degrees", n, result);
											break;
											
									default:
											printf("\nInput Salah ! ");
											getche();
									
								}
					
								
								
								break;
						
						case 4: printf("\nTurunan");
								printf("\nMasukkan koefisien atau konstanta: ");
							    scanf("%lf", &koef);
							    fflush(stdin);
							    printf("\nMasukkan variabel (jika tidak ada, input 't'): ");
							    scanf("%s", &var);
							    if (var=='t' || koef==0){
							    	printf("\nturunan dari %.1lf adalah 0", koef);
								}
								else{
								    printf("\nMasukkan pangkat dari variabel: ");
								    scanf(" %lf", &ekspo);
									result1 = koefTurunan (ekspo, koef);
								    result2 = ekspoTurunan(ekspo);
								    printf("\nturunan dari %.1lf%c^%.1lf adalah %.1lf%c^%.1lf", koef, var, ekspo, result1, var, result2);
								}
								break;
						
						default:
							printf("\nInput Salah ! ");
							getche();
						
						
					}
					
					
				break;
			default:
				printf("\nInput Salah ! ");
				getche();
		}
		
		printf("\nApakah ingin mengulang? (y/n) ");
		re=getch();
	
	}
	
	return 0;
}
