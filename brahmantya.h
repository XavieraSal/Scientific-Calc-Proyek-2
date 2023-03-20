#ifndef brahmantya_h
#include <stdio.h>
#include <stdlib.h>
#include<stdio.h> 
#include<stdlib.h> 
#include<string.h> 
#include<math.h> 
#include<ctype.h> 
typedef struct {
	double angka;
	char operasi;	
}matematika;
	
	
double hitung(matematika arr[], int n, int op){
	
	int i,j,c,d,a,b,l,k,ck_bk=0,ck_ttp=1;
	matematika arr2[100];
	memset(arr2, 0, sizeof(arr2));
	
	
	i = 0;
    j = 0;
    k = 0;
    a = 0;
    
    while (a<op){
    	
    	
    	while (i < n) {
	        if (arr[i].operasi == '|') {
	            j = i + 1;
	            
	            while (arr[j].operasi != '|') {
	            	
	                arr2[k] = arr[j];
	                k++;
	                j++;
	                
	            }
	            
	            arr[i].angka = abs(hitung(arr2, k, op));
	            arr[i].operasi = '\0';
	            for (l = i + 1; l <= j; l++) {
	                arr[l].operasi = '\0';
	                arr[l].angka = 0;
	            }
	            l=1;
	            while(l<=n){
								
					arr[i+l].angka = arr[j+l].angka;
					arr[i+l].operasi = arr[j+l].operasi;
					arr[j+l].operasi ='\0';
					arr[j+l].angka = 0;
					
					l++;
		
				}
	           
			   break; 
	
	        } 
	        
			i++;
	    }
	    	
    	a++;
	}
	
		i = 0;
    j = 0;
    k = 0;
    a = 0;
    
    while (a<op){
    	
    	
    	while (i < n) {
	        if (arr[i].operasi == '(') {
	            j = i + 1;
	            
	            while (arr[j].operasi != ')') {
	            	
	                arr2[k] = arr[j];
	                k++;
	                j++;
	                
	            }
	            
	            arr[i].angka = hitung(arr2, k, op);
	            arr[i].operasi = '\0';
	            for (l = i + 1; l <= j; l++) {
	                arr[l].operasi = '\0';
	                arr[l].angka = 0;
	            }
	            l=1;
	            while(l<=n){
								
					arr[i+l].angka = arr[j+l].angka;
					arr[i+l].operasi = arr[j+l].operasi;
					arr[j+l].operasi ='\0';
					arr[j+l].angka = 0;
					
					l++;
		
				}
	           
			   break; 
	
	        } 
	        
			i++;
	    }
	    	
    	a++;
	}
    

	a=1;
	while(a<=op){
		
		
		
		i=0;
		j=0;

		
		b=1;
		while(b<=n){  

			
			if(arr[i].operasi=='C'||arr[i].operasi=='S'||arr[i].operasi=='T'||arr[i].operasi=='L'||arr[i].operasi=='l'||arr[i].operasi=='c'||arr[i].operasi=='s'||arr[i].operasi=='t'){
				
				
				if(arr[i].operasi=='L'){
					
					arr[i].angka=logBasis10(arr[i+1].angka);
					arr[i+j].operasi=' ';
					arr[i+j+1].angka=0;
					l=1;
					while(l<=n){
						
						
						arr[i+j+1].angka = arr[i+j+2].angka;
						arr[i+j+1].operasi = arr[i+j+2].operasi;
						arr[i+j+2].operasi =' ';
						arr[i+j+2].angka = 0;
						j++;
						l++;

						
					}
		
					break;
				
				}
				
				if(arr[i].operasi=='l'){
					
					arr[i].angka=logaritmaNatural(arr[i+1].angka);
					arr[i+j].operasi=' ';
					arr[i+j+1].angka=0;
					l=1;
					while(l<=n){
						
						
						arr[i+j+1].angka = arr[i+j+2].angka;
						arr[i+j+1].operasi = arr[i+j+2].operasi;
						arr[i+j+2].operasi =' ';
						arr[i+j+2].angka = 0;
						j++;
						l++;

						
					}
					
					break;
				
				}
				
				if(arr[i].operasi=='C'){
					
					arr[i].angka=cos(arr[i+1].angka*phi/180);
					arr[i+j].operasi=' ';
					arr[i+j+1].angka=0;
					l=1;
					while(l<=n){
						
						
						arr[i+j+1].angka = arr[i+j+2].angka;
						arr[i+j+1].operasi = arr[i+j+2].operasi;
						arr[i+j+2].operasi =' ';
						arr[i+j+2].angka = 0;
						j++;
						l++;

						
					}
					
					
					break;
				
				}	
				
				if(arr[i].operasi=='S'){
					
					arr[i].angka=sin(arr[i+1].angka*phi/180);
					arr[i+j].operasi=' ';
					arr[i+j+1].angka=0;
					l=1;
					while(l<=n){
						
						
						arr[i+j+1].angka = arr[i+j+2].angka;
						arr[i+j+1].operasi = arr[i+j+2].operasi;
						arr[i+j+2].operasi =' ';
						arr[i+j+2].angka = 0;
						j++;
						l++;

						
					}

					
					break;
				
				}	
				
				if(arr[i].operasi=='T'){
					
					arr[i].angka=tan(arr[i+1].angka*phi/180);
					arr[i+j].operasi=' ';
					arr[i+j+1].angka=0;
					l=1;
					while(l<=n){
						
						
						arr[i+j+1].angka = arr[i+j+2].angka;
						arr[i+j+1].operasi = arr[i+j+2].operasi;
						arr[i+j+2].operasi =' ';
						arr[i+j+2].angka = 0;
						j++;
						l++;

						
					}
					
					
					break;
				
				}	
				
				
				if(arr[i].operasi=='c'){
					
					arr[i].angka=1/cos(arr[i+1].angka*phi/180);
					arr[i+j].operasi=' ';
					arr[i+j+1].angka=0;
					l=1;
					while(l<=n){
						
						
						arr[i+j+1].angka = arr[i+j+2].angka;
						arr[i+j+1].operasi = arr[i+j+2].operasi;
						arr[i+j+2].operasi =' ';
						arr[i+j+2].angka = 0;
						j++;
						l++;

						
					}
					
					
					break;
				
				}	
				
				if(arr[i].operasi=='s'){
					
					arr[i].angka=1/sin(arr[i+1].angka*phi/180);
					arr[i+j].operasi=' ';
					arr[i+j+1].angka=0;
					l=1;
					while(l<=n){
						
						
						arr[i+j+1].angka = arr[i+j+2].angka;
						arr[i+j+1].operasi = arr[i+j+2].operasi;
						arr[i+j+2].operasi =' ';
						arr[i+j+2].angka = 0;
						j++;
						l++;

						
					}

					
					break;
				
				}	
				
				if(arr[i].operasi=='t'){
					
					arr[i].angka=1/tan(arr[i+1].angka*phi/180);
					arr[i+j].operasi=' ';
					arr[i+j+1].angka=0;
					l=1;
					while(l<=n){
						
						
						arr[i+j+1].angka = arr[i+j+2].angka;
						arr[i+j+1].operasi = arr[i+j+2].operasi;
						arr[i+j+2].operasi =' ';
						arr[i+j+2].angka = 0;
						j++;
						l++;

						
					}
					
					
					break;
				
				}
				

				
			}
			
			
			i++;
			
			
			b++;
		}
		
		
		a++;
		
	}
	
	
	a=1;
	while(a<=op){
		
		
		
		i=0;
		j=0;

		
		b=1;
		while(b<=n){  
	
			
			if(arr[i].operasi=='!' ){
				
				if(arr[i].operasi == '!'){ 
					arr[i-1].angka = faktorial(arr[i-1].angka);
					arr[i].operasi =' ';
//					arr[i+j+1].angka = 0;
					l=1;
					while(l<=n){
						arr[i+j].angka = arr[i+j+1].angka;
						arr[i+j].operasi = arr[i+j+1].operasi;
						arr[i+j+1].operasi =' ';
						arr[i+j+1].angka = 0;
						j++;
						l++;
	
					}

						break;
					
				}

			}
	
			i++;
			
			
			b++;
		}
		
		
		a++;
		
	}
	
	

// pangkat akar
	a=1;
	while(a<=op){
		
		
		
		i=0;
		j=0;

		
		b=1;
		while(b<=n){  

			
			if(arr[i].operasi=='^'||arr[i].operasi=='v'){
				
				
					if(arr[i].operasi=='v'){
					
					arr[i].angka=sqrt(arr[i+1].angka);
					arr[i+j].operasi=' ';
					arr[i+j+1].angka=0;
					l=1;
					while(l<=n){
						
						
						arr[i+j+1].angka = arr[i+j+2].angka;
						arr[i+j+1].operasi = arr[i+j+2].operasi;
						arr[i+j+2].operasi =' ';
						arr[i+j+2].angka = 0;
						j++;
						l++;

						
					}

					break;
					
				}
				
				if(arr[i].operasi == '^'){ 
				arr[i-1].angka = pow(arr[i-1].angka, arr[i+1].angka);
				arr[i+j].operasi =' ';
				arr[i+j+1].angka = 0;
				l=1;
				while(l<=n){
					arr[i+j].angka = arr[i+j+2].angka;
					arr[i+j].operasi = arr[i+j+2].operasi;
					arr[i+j+2].operasi =' ';
					arr[i+j+2].angka = 0;
					j++;
					l++;

				}
					
					break;
					
				}
				

				
			}
			
			
			i++;
			
			
			b++;
		}
		
		
		a++;
		
	}
	
// kali bagi
	a=1;
	while(a<=op){
		
		
		
		i=0;
		j=0;
		
		b=1;
		while(b<=n){  
			
			if(arr[i].operasi=='*'||arr[i].operasi=='/'|| arr[i].operasi=='%'){
				
				if(arr[i].operasi=='*'){
					
					arr[i-1].angka=perkalian(arr[i-1].angka, arr[i+1].angka);
					arr[i+j].operasi='\0';
					arr[i+j+1].angka=0;
					l=1;
					while(l<=n){
						
						arr[i+j].angka = arr[i+j+2].angka;
						arr[i+j].operasi = arr[i+j+2].operasi;
						arr[i+j+2].operasi =' ';
						arr[i+j+2].angka = 0;
						j++;
						l++;

					}
	
					break;
					
				}
				
				if(arr[i].operasi=='/'){
					
					arr[i-1].angka=pembagian(arr[i-1].angka, arr[i+1].angka);
					arr[i+j].operasi='\0';
					arr[i+j+1].angka=0;
					l=1;
					while(l<=n){
						
						arr[i+j].angka = arr[i+j+2].angka;
						arr[i+j].operasi = arr[i+j+2].operasi;
						arr[i+j+2].operasi =' ';
						arr[i+j+2].angka = 0;
						j++;
						l++;

					}

					break;
					
				}
				
				
				if(arr[i].operasi=='%'){
					
					arr[i-1].angka = modulus((int)arr[i-1].angka,(int)arr[i+1].angka);
					arr[i+j].operasi='\0';
					arr[i+j+1].angka=0;
					l=1;
					while(l<=n){
						
						arr[i+j].angka = arr[i+j+2].angka;
						arr[i+j].operasi = arr[i+j+2].operasi;
						arr[i+j+2].operasi =' ';
						arr[i+j+2].angka = 0;
						j++;
						l++;

					}
					
					break;
					
				}
				
			}
			
			
			i++;
			
			
			b++;
		}
		
		
		a++;
		
	}
	
	
// tambah kurang	
	a=1;
	while(a<=op){
		
		i=0;
		j=0;
		b=1;
		while(b<=n){
			
			if(arr[i].operasi=='+'||arr[i].operasi=='-'){
				
				if(arr[i].operasi=='+'){
					
					arr[i-1].angka=penjumlahan(arr[i-1].angka, arr[i+1].angka);
					arr[i+j].operasi='\0';
					arr[i+j+1].angka=0;
					l=1;
					while(l<=n){
						
						arr[i+j].angka = arr[i+j+2].angka;
						arr[i+j].operasi = arr[i+j+2].operasi;
						arr[i+j+2].operasi =' ';
						arr[i+j+2].angka = 0;
						j++;
						l++;

					}
					
					break;
					
				}
				
				if(arr[i].operasi=='-'){
					
					arr[i-1].angka=pengurangan(arr[i-1].angka, arr[i+1].angka);
					arr[i+j].operasi='\0';
					arr[i+j+1].angka=0;
					l=1;
					while(l<=n){
						
						arr[i+j].angka = arr[i+j+2].angka;
						arr[i+j].operasi = arr[i+j+2].operasi;
						arr[i+j+2].operasi =' ';
						arr[i+j+2].angka = 0;
						j++;
						l++;

					}

					break;
					
				}
				
			}
			
			
			i++;
			
			
			b++;
		}
		
		a++;
		
	}
	
	return arr[0].angka;
	
}

int aritmatik();
char tampil_kel();
char tampil_menu();
char perpangkatan();
char salah();




#endif
