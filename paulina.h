#ifndef paulina_h
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int pangkat (int x, int y)
{
	int p;
	int hasil=1;
	for(p=1;p<=y;p++){
		hasil=hasil*x;
    }
    return hasil;
}

int pangkat2(int x, int y){
	int hasil;

	hasil = pangkat(x, y);
    return hasil;
}

float akar(int angka, int p)
{	
	float hasil;
	hasil = pow (angka, 1.0/p);
	return hasil;
}

int akarsemua(int x, int y)
{ 
	int angka, p;
	float hasil;
    hasil = akar(angka, p);
    return hasil;
}

int nilaimutlak(int x)
{
	int hasil;
	hasil = abs(x);
	return hasil;    
}

float logBasis10(float n)
{
	return log10(n);
}

float logBiasa(float n)
{
	float hasil;
	
    hasil = logBasis10 (n);
    return hasil;
}

#endif


