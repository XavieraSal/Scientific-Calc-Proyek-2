#ifndef paulina_h
#include <stdio.h>
#include <stdlib.h>

int pangkat(int x, int y)
{
	int p;
	int hasil=1;
	for(p=1;p<=y;p++){  //y pangkat
		hasil=hasil*x;				
    }
    return hasil;
}

//int pangkat2(int x, int y){
//	int hasil;
//	
//	hasil = pangkat(x, y);
//    return hasil;
//}

//float akar(int angka, int p)
//{	
//	float hasil;
//	hasil = pow (angka, 1.0/p);
//	return hasil;
//}

//float akar(int x, int y)
//{ 
//	int angka, p;
//	float hasil;
//    hasil = akar(angka, p);
//    return hasil;
//}

//double akar(int x, int y)
//{
//	float hasil;
//	int angka, p;
//	hasil = akar(angka, p);
//	return hasil;
//}

double akar2 (double x) {
    double epsilon, hasil = x;

    while ((hasil - x / hasil) > epsilon) {
        hasil = (hasil + x / hasil) / 2;
    }

    return hasil;
}

//int nilaimutlak(int x)
//{
//	int hasil;
//	hasil = abs(x);
//	return hasil;    
//}

double mutlak (double k) {
	int x, hasil;
  	hasil = x < 0 * -x; 
	return hasil;
}


//float logBasis10(float n)
//{
//	return log10(n);
//}

//float logBiasa(float n)
//{
//	float hasil;
//	
//    hasil = logBasis10 (n);
//    return hasil;
//}

#endif


