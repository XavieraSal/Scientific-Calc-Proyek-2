#include "brahmantya.h"
#include "yosua.h"
int aritmatik(){
	
	
	char input[300];
	matematika arr[100];
	char *p;
	int cek_o=1,cek_a=0, op=0;
	int i,j,c,d,a,b;
	system("cls");
	tampil_kel();
	printf("Masukan operasi matematika dipisah dengan spasi (+, - , *, /) : ");
	getchar();
	fgets(input, sizeof(input), stdin);
				 

				 p = strtok(input, " ");
	
				i=0;
				
				while (p != NULL) {
			        if (isdigit(p[0]) || isdigit(p[1]) && p[0] == '-' || p[0] == '.'){
			        	
			            arr[cek_a].angka = atof(p);
			            cek_a=cek_a+2;
			        } 
			        
					else if(!isdigit(p[0])){
					
						if (p[0]=='+') {
			            arr[cek_o].operasi = p[0];
			            cek_o=cek_o+2;
			            op++;
				        } 
				        
				        else if (!isdigit(p[1]) && p[0]=='-' ) {
				            arr[cek_o].operasi = p[0];
				            cek_o=cek_o+2;
				            op++;
				        } 
				        
				        else if (p[0]=='*') {
				            arr[cek_o].operasi = p[0];
				            cek_o=cek_o+2;
				            op++;
				        } 
				        
				        else if (p[0]=='/') {
				            arr[cek_o].operasi = p[0];
				            cek_o=cek_o+2;
				            op++;
				        } 
						
						
						
					}
					
					else {
				            printf("Salah input: %s\n", p);
				            return 1;
				        }
					
					
			        p = strtok(NULL, " ");
			        
			    }
			    

			    if (cek_o != cek_a-1) {
			        printf("Salah operator\n");
			        return 1;
			    }
			    

			
			
				
				a=1;
				while(a<=op){
					
					
					
					i=1;
					j=0;
				
					
					b=1;
					while(b<=op){  
					
						
						if(arr[i].operasi=='*'||arr[i].operasi=='/'){
							
							if(arr[i].operasi=='*'){
								
//								arr[i-1].angka=arr[i-1].angka * arr[i+1].angka;
								arr[i-1].angka=perkalian(arr[i-1].angka,arr[i+1].angka);
								arr[i+j].operasi=' ';
								arr[i+j+1].angka=0;
								while(arr[i+j+2].operasi != NULL){
									
									
									
									arr[i+j+1].angka=arr[i+j+2+1].angka;
									arr[i+j].operasi=arr[i+j+2].operasi;
									arr[i+j+2].operasi=' ';
									arr[i+j+2+1].angka=0;
									j+=2;
									
									
								}
								
								
								
								break;
								
							}
							
							if(arr[i].operasi=='/'){
								
//								arr[i-1].angka=arr[i-1].angka / arr[i+1].angka;
								arr[i-1].angka=pembagian(arr[i-1].angka,arr[i+1].angka);
								arr[i+j].operasi=' ';
								arr[i+j+1].angka=0;
								while(arr[i+j+2].operasi != NULL){
									
									
									arr[i+j+1].angka=arr[i+j+2+1].angka;
									arr[i+j].operasi=arr[i+j+2].operasi;
									arr[i+j+2].operasi=' ';
									arr[i+j+2+1].angka=0;
									j+=2;
									
								}
								
								
								
								break;
								
							}
							
						}
						
						
						i=i+2;
						
						
						b++;
					}
					
					
					a++;
					
				}
				
				a=1;
				while(a<=op){
					
					i=1;
					j=0;
					b=1;
					while(b<=op){
						
						if(arr[i].operasi=='+'||arr[i].operasi=='-'){
							
							if(arr[i].operasi=='+'){
								
//								arr[i-1].angka=arr[i-1].angka + arr[i+1].angka;
								arr[i-1].angka=penjumlahan(arr[i-1].angka,arr[i+1].angka);
								while(arr[i+j+2].operasi != NULL){
									
									arr[i+j+1].angka=arr[i+j+2+1].angka;
									arr[i+j].operasi=arr[i+j+2].operasi;
									arr[i+j+2].operasi=' ';
									arr[i+j+2+1].angka=0;
									j+=2;
									
									
								}
								

								
								
								
								break;
								
							}
							
							if(arr[i].operasi=='-'){
								
//								arr[i-1].angka=arr[i-1].angka - arr[i+1].angka;
								arr[i-1].angka=pengurangan(arr[i-1].angka,arr[i+1].angka);
								while(arr[i+j+2].operasi != NULL){
									
									arr[i+j+1].angka=arr[i+j+2+1].angka;
									arr[i+j].operasi=arr[i+j+2].operasi;
									arr[i+j+2].operasi=' ';
									arr[i+j+2+1].angka=0;
									j+=2;
									
								}
								

								
								
								break;
								
							}
							
						}
						
						
						i=i+2;
						
						
						b++;
					}
					
					a++;
					
				}
				
				 printf("hasil %.2lf", arr[0].angka);
	
	
	
	
	


}



