#ifndef XavieraSS_h
#include <stdio.h>
#include <math.h>
#define phi 3.141592654

void InversSin ();
float InversSinRad(double n);
float InversSinDrjt (double n);

void InversCos();
float InversCosRad(double n);
float InversCosDrjt (double n);

void InversTan();
float InversTanRad(double n);
float InversTanDrjt (double n);

void logNatural ();
float logaritmaNatural (double n);

void Turunan ();
double koefTurunan (double ekspo, double koef);
double ekspoTurunan (double ekspo);

#endif