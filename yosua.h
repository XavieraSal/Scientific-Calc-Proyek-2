/*header */
#ifndef yosua_h
#include <stdio.h>
#include <conio.h>

int modul (int * x,int * y );
double tambah_bagi(double * x,double * y );
double  penjumlahan(double   x, double  y);
double  pengurangan(double  x, double  y);
double perkalian(double  x, double  y);
double  pembagian(double  x, double y);
int modulus(int x, int y);


double penjumlahan(double x, double y){
	return x+y;
}

double pengurangan(double x, double y){
	return x-y;
}

double perkalian(double x, double y){
	return x*y;
}

double pembagian(double x, double y){
	return x/y;
}

int modulus(int x,int y){
	return x%y;
}

#endif

