#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "yosua.h"


/*
IS: Menginputkan nilai yang dijumlahkan
FS: Keluar hasi penjumlahan
Refrensi: Saya buat sendiri
*/
//Saya buat modul fungsi penjumlahan dan didefinisikan dengan dua parameter "x dan y, dengan tipe data  fungsi double
//Inputkan angka yang diinginkan untuk penjumlahan maka akan keluar/outpunya adalah hasil penjumlahan
double penjumlahan(double x, double y){
	return x+y;
}

/*
IS: Menginputkan nilai yang dikurangkan
FS: Keluar hasi pengurangan
Refrensi: saya buat sendiri
*/
//Saya buat modul fungsi pengurangan dan didefinisikan dengan dua parameter "x dan y, dengan tipe data  fungsi double
//Inputkan angka yang diinginkan untuk pengurangan maka akan keluar/outpunya adalah hasil pengurangan
double pengurangan(double x, double y){
	return x-y;
}

/*
IS: Menginputkan nilai yang dikalikan
FS: Keluar hasi perkalian
Refrensi: saya buat sendiri
*/
//Saya buat modul fungsi perkalian dan didefinisikan dengan dua parameter "x dan y, dengan tipe data  fungsi double
//Inputkan angka yang diinginkan untuk perkalian maka akan keluar/outpunya adalah hasil perkalian
double perkalian(double x, double y){
	return x*y;
}

/*
IS: Menginputkan nilai yang dibagikan
FS: Keluar hasi pembagian
Refrensi: Saya sendiri
*/
//Saya buat modul fungsi pembagian dan didefinisikan dengan dua parameter "x dan y, dengan tipe data  fungsi double
//Inputkan angka yang diinginkan untuk pembagian maka akan keluar/outpunya adalah hasil pembagian
double pembagian(double x, double y){
	return x/y;
}

/*
IS: Menginputkan nilai yang dimoduluskan
FS: Keluar hasi modulus
Refrensi: 
*/
//Saya buat modul fungsi modulus dan didefinisikan dengan dua parameter "x dan y, dengan tipe data  fungsi int
//Inputkan angka yang diinginkan untuk modulus maka akan keluar/outpunya adalah hasil modulus
int modulus(int x,int y){
	return  x%y;
}

/*
IS: Menginputkan nilai yang dipersentasekan
FS: Keluar hasi presentase
Refrensi: Teman (Fatah)
*/
//Saya buat modul fungsi persentase dan didefinisikan dengan dua parameter "x dan y, dengan tipe data  fungsi double
//Inputkan angka yang diinginkan untuk persentase maka akan keluar/outpunya adalah hasil persentase
double persent (double desimal)
{
	return desimal/100;
}





//int main() {	
//	double x, y, hasil;
//	float desimal, hasil2;
//	double a,  result;
//	char c[100],d;
//	char *p;
//	int i;
//	fgets(c,sizeof(c),stdin); 
//	i =0;
//	
//	p=strtok(c," "); 
//	
//	while(p!=NULL){ 
//		
//		if(isdigit(p[0])){ 
//			
//			if(i%2==0){ 
//				printf("%s",p);
//				x=atof(p); 
//				i++; 
//			}
//			
//			else{
//				printf("%s",p);
//				y=atof(p);
//				i++;
//			}
//			
//		}
//		
//		else {
//			
//			d=p[0];
//			
//		}
//		
//		p=strtok(NULL, " ");
//		
//		
//		
//	}
//	printf("%lf",x);
//	printf("%c",d);
//	printf("%lf",y);
//	switch(d){
//		
//		case '+':
//			(&x,&y);
//		hasil = penjumlahan (x,y);
//		printf("\nHasil penjumlahan: %lf",hasil);
//		break;
//		case '-':
//			(&x,&y);
//			hasil = pengurangan (x,y);
//			printf("\nHasil pengurangan: %lf",hasil);
//			break;
//		case '*':
//			(&x,&y);
//			hasil=perkalian (x,y);
//			printf("\nHasil perkalian: %lf",hasil);
//			break;
//		case '/':
//			(&x,&y);
//			hasil = pembagian (x,y);
//			printf("\nHasil bagi: %lf",hasil);
//			break;
//		case 'm':
//			(&x,&y);
//			hasil2=modulus(x,y);
//			printf("\nHasil modulus:%f",hasil2);
//			break;
//		case '%':
//		
//			result = persent(x);
//			printf("\nHasill presentas: %lf",result);
//			break;
//		
//	}
//	
//	return 0;
//}






