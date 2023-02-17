#include <stdio.h>
#include <stdlib.h>
#include "AuliaAziizah.h"

int main(){
	menu();
	return 0;
}

void menu(){
	int pilih;
	menu:
		system("cls");
		printf("\t\t\t\t\t\t   ================================================================       \n");
		printf("\t\t\t\t\t\t  |                            KONVERSI                            |      \n");
		printf("\t\t\t\t\t\t   ================================================================       \n");
		printf("\t\t\t\t\t\t   ================================================================       \n");
		printf("\t\t\t\t\t\t  |                      [1]. Konversi Suhu                        |      \n");	
		printf("\t\t\t\t\t\t   ================================================================       \n");	
		printf("\t\t\t\t\t\t  |                     [2]. Konversi Panjang                      |      \n");
		printf("\t\t\t\t\t\t   ================================================================       \n");
		printf("\t\t\t\t\t\t  |                      [3]. Konversi Luas                        |      \n");
		printf("\t\t\t\t\t\t   ================================================================       \n");
		printf("\t\t\t\t\t\t  |                      [4]. Konversi Waktu                       |      \n");
		printf("\t\t\t\t\t\t   ================================================================       \n");
		printf("\t\t\t\t\t\t\t\t Input Pilihan Nomor Menu :  ");scanf("%d", &pilih); 
		switch(pilih){
			case 1:menuKonversiSuhu();
				break;
			case 2:menuKonversiPanjang();
				break;
//			case 3:hasilKonversiLuas();
//				break;
//			case 4:hasilKonversiWaktu();
//				break;				
			default:printf("\t\t\t\t\t\t\t\t Mohon Maaf Pilihan Anda Salah !");
				getche();
				goto menu;
		}	
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
		printf("\t\t\t\t\t\t\t\t Input Pilihan Nomor Menu :  ");scanf("%d", &pilih); 
		switch(pilih){
			case 1:hasilKonversiCelcius();
				break;
			case 2:hasilKonversiFahrenheit();
				break;
			case 3:hasilKonversiKelvin();
				break;				
			default:printf("\t\t\t\t\t\t\t\t Mohon Maaf Pilihan Anda Salah !");
				getche();
		}	
}
void menuKonversiPanjang(){
	int pilih;
	menu:
		system("cls");
		printf("\t\t\t\t\t\t   ================================================================       \n");
		printf("\t\t\t\t\t\t  |                         KONVERSI PANJANG                       |      \n");
		printf("\t\t\t\t\t\t   ================================================================       \n");
		printf("\t\t\t\t\t\t   ================================================================       \n");
		printf("\t\t\t\t\t\t  |                             [1]. Km                            |      \n");	
		printf("\t\t\t\t\t\t   ================================================================       \n");	
		printf("\t\t\t\t\t\t  |                             [2]. Hm                            |      \n");
		printf("\t\t\t\t\t\t   ================================================================       \n");
		printf("\t\t\t\t\t\t  |                             [3]. Dam                           |      \n");
		printf("\t\t\t\t\t\t   ================================================================       \n");
		printf("\t\t\t\t\t\t  |                              [4]. M                            |      \n");
		printf("\t\t\t\t\t\t   ================================================================       \n");
		printf("\t\t\t\t\t\t  |                             [5]. Dm                            |      \n");
		printf("\t\t\t\t\t\t   ================================================================       \n");
		printf("\t\t\t\t\t\t  |                             [6]. Cm                            |      \n");
		printf("\t\t\t\t\t\t   ================================================================       \n");
		printf("\t\t\t\t\t\t  |                             [7]. Mm                            |      \n");
		printf("\t\t\t\t\t\t   ================================================================       \n");
		printf("\t\t\t\t\t\t\t\t Input Pilihan Nomor Menu :  ");scanf("%d", &pilih); 
		switch(pilih){
			case 1:hasilKonversiKm();
				break;
			case 2:hasilKonversiHm();
				break;
			case 3:hasilKonversiDam();
				break;
			case 4:hasilKonversiM();
				break;	
			case 5:hasilKonversiDm();
				break;
			case 6:hasilKonversiCm();
				break;
			case 7:hasilKonversiMm();
				break;				
			default:printf("\t\t\t\t\t\t\t\t Mohon Maaf Pilihan Anda Salah !");
				getche();
		}	
}

/*Konversi Suhu*/
float konversiCelciusFahrenheit(float celcius){
	float fahrenheit;
	fahrenheit = (celcius*9/5)+32;
	return fahrenheit;
}
float konversiCelciusKelvin(float celcius){
	float kelvin;
	kelvin = celcius+273.15;
	return kelvin;
}
void hasilKonversiCelcius(){
	float celcius, hasilF, hasilK, hasilR;
		
	printf("Masukkan nilai Celcius: ");
	scanf("%f", &celcius);
	
	hasilF = konversiCelciusFahrenheit(celcius);
	printf("%.2f Celcius sama dengan %.2f Fahrenheit\n", celcius, hasilF);
	
	hasilK = konversiCelciusKelvin(celcius);
	printf("%.2f Celcius sama dengan %.2f Kelvin \n", celcius, hasilK);	
}

float konversiFahrenheitCelcius(float fahrenheit){
	float celcius;
	celcius = (fahrenheit-32)*5/9;
	return celcius;
}
float konversiFahrenheitKelvin(float fahrenheit){
	float kelvin;
	kelvin = (fahrenheit-32)*5/9+273,15;
	return kelvin;
}
void hasilKonversiFahrenheit(){
	float fahrenheit, hasilC, hasilK, hasilR;
		
	printf("Masukkan nilai Fahrenheit: ");
	scanf("%f", &fahrenheit);
	
	hasilC = konversiFahrenheitCelcius(fahrenheit);
	printf("%.2f Fahrenheit sama dengan %.2f Celcius\n", fahrenheit, hasilC);
	
	hasilK = konversiFahrenheitKelvin(fahrenheit);
	printf("%.2f Fahrenheit sama dengan %.2f Kelvin\n", fahrenheit, hasilK);
}

float konversiKelvinCelcius(float kelvin){
	float celcius;
	celcius = kelvin-273,15;
	return celcius;
}
float konversiKelvinFahrenheit(float kelvin){
	float fahrenheit;
	fahrenheit = (kelvin*9/5)-459,67;
	return fahrenheit;
}
void hasilKonversiKelvin(){
	float kelvin, hasilC, hasilF, hasilR;
		
	printf("Masukkan nilai Kelvin: ");
	scanf("%f", &kelvin);
	
	hasilC = konversiKelvinCelcius(kelvin);
	printf("%.2f Kelvin sama dengan %.2f Celcius\n", kelvin, hasilC);
	
	hasilF = konversiKelvinFahrenheit(kelvin);
	printf("%.2f Kelvin sama dengan %.2f Fahrenheit\n", kelvin, hasilF);	
}

/*Konversi Panjang*/
float konversiKmKeHm(float km){
	float hm;
	hm = km * 10; 
	return hm;
}
float konversiKmKeDam(float km){
	float dam;
	dam = km * 100; 
	return dam;
}
float konversiKmKeM(float km){
	float m;
	m = km * 1000; 
	return m;
}
float konversiKmKeDm(float km){
	float dm;
	dm = km * 10000; 
	return dm;
}
float konversiKmKeCm(float km){
	float cm;
	cm = km * 100000; 
	return cm;
}
float konversiKmKeMm(float km){
	float mm;
	mm = km * 1000000; 
	return mm;
}
void hasilKonversiKm(){
	float km, hm, dam, m, dm, cm, mm;
	
	printf("Masukkan nilai satuan panjang (dalam Km): ");
	scanf("%f", &km);
	hm = konversiKmKeHm(km);
	printf("%.2f Km sama dengan %.2f Hm\n", km, hm);
	dam = konversiKmKeDam(km);
	printf("%.2f Km sama dengan %.2f Dam\n", km, dam);
	m = konversiKmKeM(km);
	printf("%.2f Km sama dengan %.2f M\n", km, m);
	dm = konversiKmKeDm(km);
	printf("%.2f Km sama dengan %.2f Dm\n", km, dm);
	cm = konversiKmKeCm(km);
	printf("%.2f Km sama dengan %.2f Cm\n", km, cm);
	mm = konversiKmKeMm(km);
	printf("%.2f Km sama dengan %.2f Mm\n", km, mm);
}

float konversiHmKeKm(float hm){
	float km;
	km = hm/10; 
	return km;
}
float konversiHmKeDam(float hm){
	float dam;
	dam = hm * 10; 
	return dam;
}
float konversiHmKeM(float hm){
	float m;
	m = hm * 100; 
	return m;
}
float konversiHmKeDm(float hm){
	float dm;
	dm = hm * 1000; 
	return dm;
}
float konversiHmKeCm(float hm){
	float cm;
	cm = hm * 10000; 
	return cm;
}
float konversiHmKeMm(float hm){
	float mm;
	mm = hm * 100000; 
	return mm;
}
void hasilKonversiHm(){
	float km, hm, dam, m, dm, cm, mm;
	
	printf("Masukkan nilai satuan panjang (dalam Hm): ");
	scanf("%f", &hm);
	km = konversiHmKeKm(hm);
	printf("%.2f Hm sama dengan %.2f Km\n", hm, km);
	dam = konversiHmKeDam(hm);
	printf("%.2f Hm sama dengan %.2f Dam\n", hm, dam);
	m = konversiHmKeM(hm);
	printf("%.2f Hm sama dengan %.2f M\n", hm, m);
	dm = konversiHmKeDm(hm);
	printf("%.2f Hm sama dengan %.2f Dm\n", hm, dm);
	cm = konversiHmKeCm(hm);
	printf("%.2f Hm sama dengan %.2f Cm\n", hm, cm);
	mm = konversiHmKeMm(hm);
	printf("%.2f Km sama dengan %.2f Mm\n", km, mm);
}

float konversiDamKeKm(float dam){
	float km;
	km = dam/100; 
	return km;
}
float konversiDamKeHm(float dam){
	float hm;
	hm = dam/10; 
	return hm;
}
float konversiDamKeM(float dam){
	float m;
	m = dam * 10; 
	return m;
}
float konversiDamKeDm(float dam){
	float dm;
	dm = dam * 100; 
	return dm;
}
float konversiDamKeCm(float dam){
	float cm;
	cm = dam * 1000; 
	return cm;
}
float konversiDamKeMm(float dam){
	float mm;
	mm = dam * 100000; 
	return mm;
}
void hasilKonversiDam(){
	float km, hm, dam, m, dm, cm, mm;
	
	printf("Masukkan nilai satuan panjang (dalam Dam): ");
	scanf("%f", &dam);
	km = konversiDamKeKm(dam);
	printf("%.2f Dam sama dengan %.2f Km\n", dam, km);
	hm = konversiDamKeHm(dam);
	printf("%.2f Dam sama dengan %.2f Hm\n", dam, hm);
	m = konversiDamKeM(dam);
	printf("%.2f Dam sama dengan %.2f M\n", dam, m);
	dm = konversiDamKeDm(dam);
	printf("%.2f Dam sama dengan %.2f Dm\n", dam, dm);
	cm = konversiDamKeCm(dam);
	printf("%.2f Dam sama dengan %.2f Cm\n", dam, cm);
	mm = konversiDamKeMm(dam);
	printf("%.2f Dam sama dengan %.2f Mm\n", dam, mm);
}

float konversiMKeKm(float m){
	float km;
	km = m/1000; 
	return km;
}
float konversiMKeHm(float m){
	float hm;
	hm = m/100; 
	return hm;
}
float konversiMKeDam(float m){
	float dam;
	dam = m/10; 
	return dam;
}
float konversiMKeDm(float m){
	float dm;
	dm = m * 10; 
	return dm;
}
float konversiMKeCm(float m){
	float cm;
	cm = m * 100; 
	return cm;
}
float konversiMKeMm(float m){
	float mm;
	mm = m * 100000; 
	return mm;
}
void hasilKonversiM(){
	float km, hm, dam, m, dm, cm, mm;
	
	printf("Masukkan nilai satuan panjang (dalam M): ");
	scanf("%f", &m);
	km = konversiMKeKm(m);
	printf("%.2f M sama dengan %.2f Km\n", m, km);
	hm = konversiMKeHm(m);
	printf("%.2f M sama dengan %.2f Hm\n", m, hm);
	dam = konversiMKeDam(m);
	printf("%.2f M sama dengan %.2f Dam\n", m, dam);
	dm = konversiMKeDm(m);
	printf("%.2f M sama dengan %.2f Dm\n", m, dm);
	cm = konversiMKeCm(m);
	printf("%.2f M sama dengan %.2f Cm\n", m, cm);
	mm = konversiMKeMm(m);
	printf("%.2f M sama dengan %.2f Mm\n", m, mm);
}

float konversiDmKeKm(float dm){
	float km;
	km = dm/10000; 
	return km;
}
float konversiDmKeHm(float dm){
	float hm;
	hm = dm/1000; 
	return hm;
}
float konversiDmKeDam(float dm){
	float dam;
	dam = dm/100; 
	return dam;
}
float konversiDmKeM(float dm){
	float m;
	m = dm/10; 
	return m;
}
float konversiDmKeCm(float dm){
	float cm;
	cm = dm * 10; 
	return cm;
}
float konversiDmKeMm(float dm){
	float mm;
	mm = dm * 100; 
	return mm;
}
void hasilKonversiDm(){
	float km, hm, dam, m, dm, cm, mm;
	
	printf("Masukkan nilai satuan panjang (dalam Dm): ");
	scanf("%f", &dm);
	km = konversiDmKeKm(dm);
	printf("%.2f Dm sama dengan %.2f Km\n", dm, km);
	hm = konversiDmKeHm(dm);
	printf("%.2f Dm sama dengan %.2f Hm\n", dm, hm);
	dam = konversiDmKeDam(dm);
	printf("%.2f Dm sama dengan %.2f Dam\n", dm, dam);
	m = konversiDmKeM(dm);
	printf("%.2f Dm sama dengan %.2f Dm\n", dm, m);
	cm = konversiDmKeCm(dm);
	printf("%.2f Dm sama dengan %.2f Cm\n", dm, cm);
	mm = konversiDmKeMm(dm);
	printf("%.2f Dm sama dengan %.2f Mm\n", dm, mm);
}

float konversiCmKeKm(float cm){
	float km;
	km = cm/100000; 
	return km;
}
float konversiCmKeHm(float cm){
	float hm;
	hm = cm/10000; 
	return hm;
}
float konversiCmKeDam(float cm){
	float dam;
	dam = cm/1000; 
	return dam;
}
float konversiCmKeM(float cm){
	float m;
	m = cm/100; 
	return m;
}
float konversiCmKeDm(float cm){
	float dm;
	dm = cm/10; 
	return dm;
}
float konversiCmKeMm(float cm){
	float mm;
	mm = cm * 10; 
	return mm;
}
void hasilKonversiCm(){
	float km, hm, dam, m, dm, cm, mm;
	
	printf("Masukkan nilai satuan panjang (dalam Cm): ");
	scanf("%f", &cm);
	km = konversiCmKeKm(cm);
	printf("%.2f Cm sama dengan %.2f Km\n", cm, km);
	hm = konversiCmKeHm(cm);
	printf("%.2f Cm sama dengan %.2f Hm\n", cm, hm);
	dam = konversiCmKeDam(cm);
	printf("%.2f Cm sama dengan %.2f Dam\n", cm, dam);
	m = konversiCmKeM(cm);
	printf("%.2f Cm sama dengan %.2f Dm\n", cm, m);
	dm = konversiCmKeDm(cm);
	printf("%.2f Cm sama dengan %.2f Dm\n", cm, dm);
	mm = konversiCmKeMm(cm);
	printf("%.2f Cm sama dengan %.2f Mm\n", cm, mm);
}

float konversiMmKeKm(float mm){
	float km;
	km = mm/1000000; 
	return km;
}
float konversiMmKeHm(float mm){
	float hm;
	hm = mm/100000; 
	return hm;
}
float konversiMmKeDam(float mm){
	float dam;
	dam = mm/10000; 
	return dam;
}
float konversiMmKeM(float mm){
	float m;
	m = mm/1000; 
	return m;
}
float konversiMmKeDm(float mm){
	float dm;
	dm = mm/100; 
	return dm;
}
float konversiMmKeCm(float mm){
	float cm;
	cm = mm/10; 
	return cm;
}
void hasilKonversiMm(){
	float km, hm, dam, m, dm, cm, mm;
	
	printf("Masukkan nilai satuan panjang (dalam Mm): ");
	scanf("%f", &mm);
	km = konversiMmKeKm(mm);
	printf("%.2f Mm sama dengan %.2f Km\n", mm, km);
	hm = konversiMmKeHm(mm);
	printf("%.2f Mm sama dengan %.2f Hm\n", mm, hm);
	dam = konversiMmKeDam(mm);
	printf("%.2f Mm sama dengan %.2f Dam\n", mm, dam);
	m = konversiMmKeM(mm);
	printf("%.2f Mm sama dengan %.2f Dm\n", mm, m);
	dm = konversiMmKeDm(mm);
	printf("%.2f Mm sama dengan %.2f Dm\n", mm, dm);
	cm = konversiMmKeCm(mm);
	printf("%.2f Mm sama dengan %.2f Mm\n", mm, cm);
}
