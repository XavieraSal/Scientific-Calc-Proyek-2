/*header */
#ifndef yosua_h
#include <stdio.h>
#include <conio.h>

//YosuaBalingga_D3 1A

int modul (int * x,int * y );
double tambah_bagi(double * x,double * y );
double  penjumlahan(double   x, double  y);
double  pengurangan(double  x, double  y);
double perkalian(double  x, double  y);
double  pembagian(double  x, double y);
int modulus(int x, int y);



//Saya buat modul fungsi penjumlahan dan didefinisikan dengan dua parameter "x dan y, dengan tipe data  fungsi double
//Inputkan angka yang diinginkan untuk penjumlahan maka akan keluar/outpunya adalah hasil penjumlahan
double penjumlahan(double x, double y){ 
	return x+y;
}
//Saya buat modul fungsi pengurangan dan didefinisikan dengan dua parameter "x dan y, dengan tipe data  fungsi double
//Inputkan angka yang diinginkan untuk pengurangan maka akan keluar/outpunya adalah hasil pengurangan
double pengurangan(double x, double y){
	return x-y;
}
//Saya buat modul fungsi perkalian dan didefinisikan dengan dua parameter "x dan y, dengan tipe data  fungsi double
//Inputkan angka yang diinginkan untuk perkalian maka akan keluar/outpunya adalah hasil perkalian
double perkalian(double x, double y){
	return x*y;
}
//Saya buat modul fungsi pembagian dan didefinisikan dengan dua parameter "x dan y, dengan tipe data  fungsi double
//Inputkan angka yang diinginkan untuk pembagian maka akan keluar/outpunya adalah hasil pembagian
double pembagian(double x, double y){
	return x/y;
}

//Saya buat modul fungsi modulus dan didefinisikan dengan dua parameter "x dan y, dengan tipe data  fungsi int
//Inputkan angka yang diinginkan untuk modulus maka akan keluar/outpunya adalah hasil modulus
int modulus(int x,int y){
	return  x%y;
}
//Saya buat modul fungsi persentase dan didefinisikan dengan dua parameter "x dan y, dengan tipe data  fungsi double
//Inputkan angka yang diinginkan untuk persentase maka akan keluar/outpunya adalah hasil persentase
double persent (double desimal)
{
	return desimal/100;
}
#endif



