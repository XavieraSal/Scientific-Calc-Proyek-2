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



//Saya buat modul fungsi penjumlahan dan didefinisikan dengan dua parameter "x dan y, dengan tipe data  fungsi double
double penjumlahan(double x, double y){
	return x+y;
}
//Saya buat modul fungsi pengurangan dan didefinisikan dengan dua parameter "x dan y, dengan tipe data  fungsi double
double pengurangan(double x, double y){
	return x-y;
}
//Saya buat modul fungsi perkalian dan didefinisikan dengan dua parameter "x dan y, dengan tipe data  fungsi double
double perkalian(double x, double y){
	return x*y;
}
//Saya buat modul fungsi pembagian dan didefinisikan dengan dua parameter "x dan y, dengan tipe data  fungsi double
double pembagian(double x, double y){
	return x/y;
}

//Saya buat modul fungsi modulus dan didefinisikan dengan dua parameter "x dan y, dengan tipe data  fungsi int
int modulus(int x,int y){
	return  x%y;
}
//Saya buat modul fungsi persentase dan didefinisikan dengan dua parameter "x dan y, dengan tipe data  fungsi double
double persent (double desimal)
{
	return desimal/100;
}
#endif



