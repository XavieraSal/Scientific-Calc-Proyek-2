#ifndef XavieraSS_h
#include <stdio.h>
#include <math.h>
#define phi 3.141592654

float InversSinRad(double n){
	return asin(n);
}

float InversSinDrjt (double n){
	return asin(n)*180/phi;
}

float InversCosRad(double n){
	return acos(n);
}

float InversCosDrjt (double n){
	return acos(n)*180/phi;
}

float InversTanRad(double n){
	return atan(n);
}

float InversTanDrjt (double n){
	return (atan(n) * 180) / phi;
}

float logaritmaNatural (double n){
	return log(n);
}

double koefTurunan (double ekspo, double koef);
double ekspoTurunan (double ekspo);
#endif
