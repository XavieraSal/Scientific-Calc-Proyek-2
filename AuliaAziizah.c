#include <stdio.h>
#include <stdlib.h>
#include "AuliaAziizah.h"

int main(){
	menuKonversiSuhu();
	return 0;
}

void menuKonversiSuhu(){
	int pilih;
	menu:
		system("cls");
		printf("\t\t\t\t\t\t   ================================================================       \n");
		printf("\t\t\t\t\t\t  |                          KONVERSI SUHU                         |      \n");
		printf("\t\t\t\t\t\t   ================================================================       \n");
		printf("\t\t\t\t\t\t   ================================================================       \n");
		printf("\t\t\t\t\t\t  |                          [1]. Celcius                          |      \n");	
		printf("\t\t\t\t\t\t   ================================================================       \n");	
		printf("\t\t\t\t\t\t  |                         [2]. Fahrenheit                        |      \n");
		printf("\t\t\t\t\t\t   ================================================================       \n");
		printf("\t\t\t\t\t\t  |                           [3]. Kelvin                          |      \n");
		printf("\t\t\t\t\t\t   ================================================================       \n");
		printf("\t\t\t\t\t\t  |                           [4]. Reamur                          |      \n");
		printf("\t\t\t\t\t\t   ================================================================       \n");
		printf("\t\t\t\t\t\t\t\t Input Pilihan Nomor Menu :  ");scanf("%d", &pilih); 
		switch(pilih){
			case 1:hasilKonversiCelcius();
				break;
			case 2:hasilKonversiFahrenheit();
				break;
			case 3:hasilKonversiKelvin();
				break;
			case 4:hasilKonversiReamur();
				break;				
			default:printf("\t\t\t\t\t\t\t\t Mohon Maaf Pilihan Anda Salah !");
				getche();
				goto menu;
		}	
}

float konversiCelciusFahrenheit(float celcius){
	float fahrenheit;
	fahrenheit = (celcius*1,8+32);
	return fahrenheit;
}
float konversiCelciusKelvin(float celcius){
	float kelvin;
	kelvin = celcius+273.15;
	return kelvin;
}
float konversiCelciusReamur(float celcius){
	float reamur;
	reamur = celcius*0,8;
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

float konversiFahrenheitCelcius(float fahrenheit){
	float celcius;
	celcius = (fahrenheit-32)*1,8;
	return celcius;
}
float konversiFahrenheitKelvin(float fahrenheit){
	float kelvin;
	kelvin = (fahrenheit+459,67)/1,8;
	return kelvin;
}
float konversiFahrenheitReamur(float fahrenheit){
	float reamur;
	reamur = (fahrenheit-32)*0,44;
	return reamur;
}
void hasilKonversiFahrenheit(){
	float fahrenheit, hasilC, hasilK, hasilR;
		
	printf("Masukkan nilai Fahrenheit: ");
	scanf("%f", &fahrenheit);
	
	hasilC = konversiFahrenheitCelcius(fahrenheit);
	printf("Fahrenheit dalam Celcius adalah %.2f\n", hasilC);
	
	hasilK = konversiFahrenheitKelvin(fahrenheit);
	printf("Fahrenheit dalam Kelvin adalah %.2f\n", hasilK);
	
	hasilR = konversiFahrenheitReamur(fahrenheit);
	printf("Fahrenheit dalam Reamur adalah %.2f\n", hasilR);	
}

float konversiKelvinCelcius(float kelvin){
	float celcius;
	celcius = kelvin-273,15;
	return celcius;
}
float konversiKelvinFahrenheit(float kelvin){
	float fahrenheit;
	fahrenheit = kelvin*1,8-459,67;
	return fahrenheit;
}
float konversiKelvinReamur(float kelvin){
	float reamur;
	reamur = (kelvin-273,15)*0.8;
	return reamur;
}
void hasilKonversiKelvin(){
	float kelvin, hasilC, hasilF, hasilR;
		
	printf("Masukkan nilai Kelvin: ");
	scanf("%f", &kelvin);
	
	hasilC = konversiKelvinCelcius(kelvin);
	printf("Kelvin dalam Celcius adalah %.2f\n", hasilC);
	
	hasilF = konversiKelvinFahrenheit(kelvin);
	printf("Kelvin dalam Fahrenheit adalah %.2f\n", hasilF);
	
	hasilR = konversiKelvinReamur(kelvin);
	printf("Kelvin dalam Reamur adalah %.2f\n", hasilR);	
}

float konversiReamurCelcius(float reamur){
	float celcius;
	celcius = reamur*0,8;
	return celcius;
}
float konversiReamurFahrenheit(float reamur){
	float fahrenheit;
	fahrenheit = (reamur*2,25)+32;
	return fahrenheit;
}
float konversiReamurKelvin(float reamur){
	float kelvin;
	kelvin = (reamur*0,8)+273,15;
	return kelvin;
}
void hasilKonversiReamur(){
	float reamur, hasilC, hasilF, hasilK;
		
	printf("Masukkan nilai Reamur: ");
	scanf("%f", &reamur);
	
	hasilC = konversiReamurCelcius(reamur);
	printf("Reamur dalam Celcius adalah %.2f\n", hasilC);
	
	hasilF = konversiReamurFahrenheit(reamur);
	printf("Reamur dalam Fahrenheit adalah %.2f\n", hasilF);
	
	hasilK = konversiReamurKelvin(reamur);
	printf("Reamur dalam Kelvin adalah %.2f\n", hasilK);	
}

