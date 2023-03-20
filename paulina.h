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

double akar2 (double x) {
    double epsilon, hasil = x;

    while ((hasil - x / hasil) > epsilon) {
        hasil = (hasil + x / hasil) / 2;
    }

    return hasil;
}

int mutlak(int angka) {
   if (angka < 0) {
      return -angka;
   }
   else {
      return angka;
   }
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


