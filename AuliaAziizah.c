#include <stdio.h>
#include<stdlib.h>
#include "AuliaAziizah.h"
 
int main(void)
{
	hasilKonversiCelcius();
}

float konversiCelciusFahrenheit (float celcius){
	float fahrenheit;
	fahrenheit = (celcius*9/5)+32;
	return fahrenheit;
}

float konversiCelciusKelvin (float celcius){
	float kelvin;
	kelvin = celcius + 273.15;
	return kelvin;
}

float konversiCelciusReamur (float celcius){
	float reamur;
	reamur = celcius * (4.0/5.0);
	return reamur;
}

void hasilKonversiCelcius(){
	float celcius, hasilF, hasilK, hasilR;
		
	printf("Masukkan nilai Celcius: ");
	scanf("%f", &celcius);
	
	hasilF = konversiCelciusFahrenheit(celcius);
	printf("Celcius dalam Fahrenheit adalah %.2f\n", hasilF);
	
	hasilK = konversiCelciusKelvin(celcius);
	printf("Celcius dalam Kelvin adalah %.2f\n", hasilK);
	
	hasilR = konversiCelciusReamur(celcius);
	printf("Celcius dalam Reamur adalah %.2f\n", hasilR);	
}
