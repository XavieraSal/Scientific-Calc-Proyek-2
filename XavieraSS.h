#ifndef XavieraSS_h
#include <stdio.h>
#include <math.h>
#define phi 3.141592654


float InversSinRad(double n);
float InversSinDrjt (double n);
float InversSinRad(double n)
{
	return asin(n);
    
}

float InversSinDrjt (double n)
{
	return asin(n)*180/phi;
} 


float InversCosRad(double n);
float InversCosDrjt (double n);
float InversCosRad(double n)
{
	return acos(n);
    
}

float InversCosDrjt (double n)
{
	return acos(n)*180/phi;
}


float InversTanRad(double n);
float InversTanDrjt (double n);
float InversTanRad(double n)
{
	return atan(n);
}

float InversTanDrjt (double n)
{
	return (atan(n) * 180) / phi;
} 


float logaritmaNatural (double n);
double koefTurunan (double,double);
double ekspoTurunan (double);

float logaritmaNatural (double n)
{
	return log(n);
}

double koefTurunan (double ekspo, double koef)
{
	if (koef==0){
		koef+=1;
	}
	return ekspo*koef;
}

double ekspoTurunan (double ekspo)
{
	return ekspo-=1;
}
#endif
