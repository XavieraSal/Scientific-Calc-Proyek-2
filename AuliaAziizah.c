#include <stdio.h>
#include <stdlib.h>
#include "AuliaAziizah.h"
#define maks 10

int main(){
	int pilih;
	menu :
		printf("Operasi Matriks \n");
		printf("1. Konversi\n");
		printf("2. Matriks\n");
		printf("Input Pilihan Nomor Menu :  ");scanf("%d", &pilih); 
		switch(pilih){
			case 1:menuKonversi();
				break;
			case 2:menuMatriks();
				break;
			default:printf("Mohon Maaf Pilihan Anda Salah !");
				getche();
	}

	return 0;
}

void menuKonversi(){
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
			case 3:menuKonversiLuas();
				break;
			case 4:menuKonversiWaktu();
				break;				
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

void menuKonversiWaktu(){
	int pilih;
	menu:
		system("cls");
		printf("\t\t\t\t\t\t   ================================================================       \n");
		printf("\t\t\t\t\t\t  |                          KONVERSI WAKTU                        |      \n");
		printf("\t\t\t\t\t\t   ================================================================       \n");
		printf("\t\t\t\t\t\t   ================================================================       \n");
		printf("\t\t\t\t\t\t  |                            [1]. Hari                           |      \n");	
		printf("\t\t\t\t\t\t   ================================================================       \n");	
		printf("\t\t\t\t\t\t  |                             [2]. Jam                           |      \n");
		printf("\t\t\t\t\t\t   ================================================================       \n");
		printf("\t\t\t\t\t\t  |                            [3]. Menit                          |      \n");
		printf("\t\t\t\t\t\t   ================================================================       \n");
		printf("\t\t\t\t\t\t  |                            [4]. Detik                          |      \n");
		printf("\t\t\t\t\t\t   ================================================================       \n");
		printf("\t\t\t\t\t\t\t\t Input Pilihan Nomor Menu :  ");scanf("%d", &pilih); 
		switch(pilih){
			case 1:hasilKonversiHari();
				break;
			case 2:hasilKonversiJam();
				break;
			case 3:hasilKonversiMenit();
				break;
			case 4:hasilKonversiDetik();
				break;					
			default:printf("\t\t\t\t\t\t\t\t Mohon Maaf Pilihan Anda Salah !");
				getche();
				
		}	
}

void menuKonversiLuas(){
	int pilih;
	menu:
		system("cls");
		printf("\t\t\t\t\t\t   ================================================================       \n");
		printf("\t\t\t\t\t\t  |                           KONVERSI LUAS                        |      \n");
		printf("\t\t\t\t\t\t   ================================================================       \n");
		printf("\t\t\t\t\t\t   ================================================================       \n");
		printf("\t\t\t\t\t\t  |                      [1]. Kilometer persegi                    |      \n");	
		printf("\t\t\t\t\t\t   ================================================================       \n");	
		printf("\t\t\t\t\t\t  |                           [2]. Hektare                         |      \n");
		printf("\t\t\t\t\t\t   ================================================================       \n");
		printf("\t\t\t\t\t\t  |                             [3]. Are                           |      \n");
		printf("\t\t\t\t\t\t   ================================================================       \n");
		printf("\t\t\t\t\t\t  |                        [4]. Meter persegi                      |      \n");
		printf("\t\t\t\t\t\t   ================================================================       \n");
		printf("\t\t\t\t\t\t  |                      [5]. Desimeter persegi                    |      \n");
		printf("\t\t\t\t\t\t   ================================================================       \n");
		printf("\t\t\t\t\t\t  |                      [6]. Centimeter persegi                   |      \n");
		printf("\t\t\t\t\t\t   ================================================================       \n");
		printf("\t\t\t\t\t\t  |                      [7]. Milimeter persegi                    |      \n");
		printf("\t\t\t\t\t\t   ================================================================       \n");
		printf("\t\t\t\t\t\t\t\t Input Pilihan Nomor Menu :  ");scanf("%d", &pilih); 
		switch(pilih){
			case 1:hasilKonversiKm2();
				break;
			case 2:hasilKonversiHm2();
				break;
			case 3:hasilKonversiDam2();
				break;
			case 4:hasilKonversiM2();
				break;	
			case 5:hasilKonversiDm2();
				break;
			case 6:hasilKonversiCm2();
				break;
			case 7:hasilKonversiMm2();
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
	printf("%.2f Km sama dengan %.2f Mm\n", hm, mm);
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
	mm = dam * 10000; 
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
	mm = m * 1000; 
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
	printf("%.2f Dm sama dengan %.2f M\n", dm, m);
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
	printf("%.2f Cm sama dengan %.2f M\n", cm, m);
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
	printf("%.2f Mm sama dengan %.2f M\n", mm, m);
	dm = konversiMmKeDm(mm);
	printf("%.2f Mm sama dengan %.2f Dm\n", mm, dm);
	cm = konversiMmKeCm(mm);
	printf("%.2f Mm sama dengan %.2f Cm\n", mm, cm);
}

/*Konversi Waktu*/
int konversiHariJam(int hari){
	int jam;
	jam = hari * 24;
	return jam;
}
int konversiHariMenit(int hari){
	int menit;
	menit = hari * 1440;
	return menit;
}
int konversiHariDetik(int hari){
	int detik;
	detik = hari * 86400;
	return detik;
}
void hasilKonversiHari(){
	int hari, jam, menit, detik;
	
	printf("Masukkan nilai satuan waktu (dalam hari): ");
	scanf("%d", &hari);
	
	jam = konversiHariJam(hari);
	printf("%d Hari sama dengan %d Jam\n", hari, jam);
	menit = konversiHariMenit(hari);
	printf("%d Hari sama dengan %d Menit\n", hari, menit);
	detik = konversiHariDetik(hari);
	printf("%d Hari sama dengan %d Detik\n", hari, detik);
}

int konversiJamHari(int jam){
	int hari;
	hari = jam / 24;
	return hari;
}
int konversiJamMenit(int jam){
	int menit;
	menit = jam * 60;
	return menit;
}
int konversiJamDetik(int jam){
	int detik;
	detik = jam * 3600;
	return detik;
}
void hasilKonversiJam(){
	int hari, jam, menit, detik;
	
	printf("Masukkan nilai satuan waktu (dalam jam): ");
	scanf("%d", &jam);
	
	hari = konversiJamHari(jam);
	printf("%d Jam sama dengan %d Hari\n", jam, hari);
	menit = konversiJamMenit(jam);
	printf("%d Jam sama dengan %d Menit\n", jam, menit);
	detik = konversiJamDetik(jam);
	printf("%d Jam sama dengan %d Detik\n", jam, detik);
}

int konversiMenitHari(int menit){
	int hari;
	hari = menit / 1440;
	return hari;
}
int konversiMenitJam(int menit){
	int jam;
	jam = menit / 60;
	return jam;
}
int konversiMenitDetik(int menit){
	int detik;
	detik = menit * 60;
	return detik;
}
void hasilKonversiMenit(){
	int hari, jam, menit, detik;
	
	printf("Masukkan nilai satuan waktu (dalam menit): ");
	scanf("%d", &menit);
	
	hari = konversiMenitHari(menit);
	printf("%d Menit sama dengan %d Hari\n", menit, hari);
	menit = konversiMenitJam(menit);
	printf("%d Menit sama dengan %d Jam\n", menit, jam);
	detik = konversiMenitDetik(jam);
	printf("%d Menit sama dengan %d Detik\n", menit, detik);
}

int konversiDetikHari(int detik){
	int hari;
	hari = detik / 86400;
	return hari;
}
int konversiDetikJam(int detik){
	int jam;
	jam = detik / 3600;
	return jam;
}
int konversiDetikMenit(int detik){
	int menit;
	menit = detik / 60;
	return menit;
}
void hasilKonversiDetik(){
	int hari, jam, menit, detik;
	
	printf("Masukkan nilai satuan waktu (dalam detik): ");
	scanf("%d", &detik);
	
	hari = konversiDetikHari(detik);
	printf("%d Detik sama dengan %d Hari\n", detik, hari);
	jam = konversiDetikJam(detik);
	printf("%d Detik sama dengan %d Jam\n", detik, jam);
	menit = konversiDetikMenit(jam);
	printf("%d Detik sama dengan %d Menit\n", detik, menit);
}

/*Konversi Luas*/
float konversiKm2KeHm2(float km2){
	float hm2;
	hm2 = km2 * 100; 
	return hm2;
}
float konversiKm2KeDam2(float km2){
	float dam2;
	dam2 = km2 * 10000; 
	return dam2;
}
float konversiKm2KeM2(float km2){
	float m2;
	m2 = km2 * 1000000; 
	return m2;
}
float konversiKm2KeDm2(float km2){
	float dm2;
	dm2 = km2 * 100000000; 
	return dm2;
}
float konversiKm2KeCm2(float km2){
	float cm2;
	cm2 = km2 * 10000000000; 
	return cm2;
}
float konversiKm2KeMm2(float km2){
	float mm2;
	mm2 = km2 * 10000000000000; 
	return mm2;
}
void hasilKonversiKm2(){
	float km2, hm2, dam2, m2, dm2, cm2, mm2;
	
	printf("Masukkan nilai satuan panjang (dalam Kilometer persegi): ");
	scanf("%f", &km2);
	hm2 = konversiKm2KeHm2(km2);
	printf("%.2f Kilometer persegi sama dengan %f Hektometer persegi (Hektare)\n", km2, hm2);
	dam2 = konversiKm2KeDam2(km2);
	printf("%.2f Kilometer persegi sama dengan %f Dekameter persegi (Are)\n", km2, dam2);
	m2 = konversiKm2KeM2(km2);
	printf("%.2f Kilometer persegi sama dengan %f Meter persegi\n", km2, m2);
	dm2 = konversiKm2KeDm2(km2);
	printf("%.2f Kilometer persegi sama dengan %f Desimeter persegi\n", km2, dm2);
	cm2 = konversiKm2KeCm2(km2);
	printf("%.2f Kilometer persegi sama dengan %f Centimeter persegi\n", km2, cm2);
	mm2 = konversiKm2KeMm2(km2);
	printf("%.2f Kilometer persegi sama dengan %f Milimeter persegi\n", km2, mm2);
}

float konversiHm2KeKm2(float hm2){
	float km2;
	km2 = hm2/100; 
	return km2;
}
float konversiHm2KeDam2(float hm2){
	float dam2;
	dam2 = hm2 * 100; 
	return dam2;
}
float konversiHm2KeM2(float hm2){
	float m2;
	m2 = hm2 * 10000; 
	return m2;
}
float konversiHm2KeDm2(float hm2){
	float dm2;
	dm2 = hm2 * 1000000; 
	return dm2;
}
float konversiHm2KeCm2(float hm2){
	float cm2;
	cm2 = hm2 * 100000000; 
	return cm2;
}
float konversiHm2KeMm2(float hm2){
	float mm2;
	mm2 = hm2 * 10000000000; 
	return mm2;
}
void hasilKonversiHm2(){
	float km2, hm2, dam2, m2, dm2, cm2, mm2;
	
	printf("Masukkan nilai satuan panjang (dalam Hektometer persegi (Hektare)): ");
	scanf("%f", &hm2);
	km2 = konversiHm2KeKm2(hm2);
	printf("%.2f Hektare sama dengan %f Kilometer persegi\n", hm2, km2);
	dam2 = konversiHm2KeDam2(hm2);
	printf("%.2f Hektare sama dengan %f Dekameter persegi (Are)\n", hm2, dam2);
	m2 = konversiHm2KeM2(hm2);
	printf("%.2f Hektare sama dengan %f Meter persegi\n", hm2, m2);
	dm2 = konversiHm2KeDm2(hm2);
	printf("%.2f Hektare sama dengan %f Desimeter persegi\n", hm2, dm2);
	cm2 = konversiHm2KeCm2(hm2);
	printf("%.2f Hektare sama dengan %f Centimeter persegi\n", hm2, cm2);
	mm2 = konversiHm2KeMm2(hm2);
	printf("%.2f Hektare sama dengan %f Milimiter persegi\n", hm2, mm2);
}

float konversiDam2KeKm2(float dam2){
	float km2;
	km2 = dam2/10000; 
	return km2;
}
float konversiDam2KeHm2(float dam2){
	float hm2;
	hm2 = dam2/100; 
	return hm2;
}
float konversiDam2KeM2(float dam2){
	float m2;
	m2 = dam2 * 100; 
	return m2;
}
float konversiDam2KeDm2(float dam2){
	float dm2;
	dm2 = dam2 * 10000; 
	return dm2;
}
float konversiDam2KeCm2(float dam2){
	float cm2;
	cm2 = dam2 * 1000000; 
	return cm2;
}
float konversiDam2KeMm2(float dam2){
	float mm2;
	mm2 = dam2 * 100000000; 
	return mm2;
}
void hasilKonversiDam2(){
	float km2, hm2, dam2, m2, dm2, cm2, mm2;
	
	printf("Masukkan nilai satuan panjang (dalam Dekameter persegi (Are)): ");
	scanf("%f", &dam2);
	km2 = konversiDam2KeKm2(dam2);
	printf("%.2f Are sama dengan %f Kilometer persegi\n", dam2, km2);
	hm2 = konversiDam2KeHm2(dam2);
	printf("%.2f Are sama dengan %f Hektometer persegi (Hektare)\n", dam2, hm2);
	m2 = konversiDam2KeM2(dam2);
	printf("%.2f Are sama dengan %f Meter persegi\n", dam2, m2);
	dm2 = konversiDam2KeDm2(dam2);
	printf("%.2f Are sama dengan %f Desimeter persegi\n", dam2, dm2);
	cm2 = konversiDam2KeCm2(dam2);
	printf("%.2f Are sama dengan %f Centimeter persegi\n", dam2, cm2);
	mm2 = konversiDam2KeMm2(dam2);
	printf("%.2f Are sama dengan %f Milimeter persegi\n", dam2, mm2);
}

float konversiM2KeKm2(float m2){
	float km2;
	km2 = m2/1000000; 
	return km2;
}
float konversiM2KeHm2(float m2){
	float hm2;
	hm2 = m2/10000; 
	return hm2;
}
float konversiM2KeDam2(float m2){
	float dam2;
	dam2 = m2/100; 
	return dam2;
}
float konversiM2KeDm2(float m2){
	float dm2;
	dm2 = m2 * 100; 
	return dm2;
}
float konversiM2KeCm2(float m2){
	float cm2;
	cm2 = m2 * 10000; 
	return cm2;
}
float konversiM2KeMm2(float m2){
	float mm2;
	mm2 = m2 * 1000000; 
	return mm2;
}
void hasilKonversiM2(){
	float km2, hm2, dam2, m2, dm2, cm2, mm2;
	
	printf("Masukkan nilai satuan panjang (dalam Meter persegi): ");
	scanf("%f", &m2);
	km2 = konversiM2KeKm2(m2);
	printf("%.2f Meter persegi sama dengan %f Kilometer persegi\n", m2, km2);
	hm2 = konversiM2KeHm2(m2);
	printf("%.2f Meter persegi sama dengan %f Hektometer persegi (Hektare)\n", m2, hm2);
	dam2 = konversiM2KeDam2(m2);
	printf("%.2f Meter persegi sama dengan %f Dekameter persegi (Are)\n", m2, dam2);
	dm2 = konversiM2KeDm2(m2);
	printf("%.2f Meter persegi sama dengan %f Desimeter persegi\n", m2, dm2);
	cm2 = konversiM2KeCm2(m2);
	printf("%.2f Meter persegi sama dengan %f Centimeter persegi\n", m2, cm2);
	mm2 = konversiM2KeMm2(m2);
	printf("%.2f Meter persegi sama dengan %f Milimeter persegi\n", m2, mm2);
}

float konversiDm2KeKm2(float dm2){
	float km2;
	km2 = dm2/100000000; 
	return km2;
}
float konversiDm2KeHm2(float dm2){
	float hm2;
	hm2 = dm2/1000000; 
	return hm2;
}
float konversiDm2KeDam2(float dm2){
	float dam2;
	dam2 = dm2/10000; 
	return dam2;
}
float konversiDm2KeM2(float dm2){
	float m2;
	m2 = dm2/100; 
	return m2;
}
float konversiDm2KeCm2(float dm2){
	float cm2;
	cm2 = dm2 * 100; 
	return cm2;
}
float konversiDm2KeMm2(float dm2){
	float mm2;
	mm2 = dm2 * 10000; 
	return mm2;
}
void hasilKonversiDm2(){
	float km2, hm2, dam2, m2, dm2, cm2, mm2;
	
	printf("Masukkan nilai satuan panjang (dalam Desimeter persegi): ");
	scanf("%f", &dm2);
	km2 = konversiDm2KeKm2(dm2);
	printf("%.2f Desimeter persegi sama dengan %f Kilometer persegi\n", dm2, km2);
	hm2 = konversiDm2KeHm2(dm2);
	printf("%.2f Desimeter persegi sama dengan %f Hektometer persegi (Hektare)\n", dm2, hm2);
	dam2 = konversiDm2KeDam2(dm2);
	printf("%.2f Desimeter persegi sama dengan %f Dekameter persegi (Are)\n", dm2, dam2);
	m2 = konversiDm2KeM2(dm2);
	printf("%.2f Desimeter persegi sama dengan %f Meter persegi\n", dm2, m2);
	cm2 = konversiDm2KeCm2(dm2);
	printf("%.2f Desimeter persegi sama dengan %f Centimeter persegi\n", dm2, cm2);
	mm2 = konversiDm2KeMm2(dm2);
	printf("%.2f Desimeter persegi sama dengan %f Milimeter persegi\n", dm2, mm2);
}

float konversiCm2KeKm2(float cm2){
	float km2;
	km2 = cm2/10000000000; 
	return km2;
}
float konversiCm2KeHm2(float cm2){
	float hm2;
	hm2 = cm2/100000000; 
	return hm2;
}
float konversiCm2KeDam2(float cm2){
	float dam2;
	dam2 = cm2/1000000; 
	return dam2;
}
float konversiCm2KeM2(float cm2){
	float m2;
	m2 = cm2/10000; 
	return m2;
}
float konversiCm2KeDm2(float cm2){
	float dm2;
	dm2 = cm2/100; 
	return dm2;
}
float konversiCm2KeMm2(float cm2){
	float mm2;
	mm2 = cm2 * 100; 
	return mm2;
}
void hasilKonversiCm2(){
	float km2, hm2, dam2, m2, dm2, cm2, mm2;
	
	printf("Masukkan nilai satuan panjang (dalam Centimeter persegi): ");
	scanf("%f", &cm2);
	km2 = konversiCm2KeKm2(cm2);
	printf("%.2f Centimeter persegi sama dengan %f Kilometer persegi\n", cm2, km2);
	hm2 = konversiCm2KeHm2(cm2);
	printf("%.2f Centimeter persegi sama dengan %f Hektometer persegi (Hektare)\n", cm2, hm2);
	dam2 = konversiCm2KeDam2(cm2);
	printf("%.2f Centimeter persegi sama dengan %f Dekameter persegi (Are)\n", cm2, dam2);
	m2 = konversiCm2KeM2(cm2);
	printf("%.2f Centimeter persegi sama dengan %f Meter persegi\n", cm2, m2);
	dm2 = konversiCm2KeDm2(cm2);
	printf("%.2f Centimeter persegi sama dengan %f Desimeter persegi\n", cm2, dm2);
	mm2 = konversiCm2KeMm2(cm2);
	printf("%.2f Centimeter persegi sama dengan %f Milimeter persegi\n", cm2, mm2);
}

float konversiMm2KeKm2(float mm2){
	float km2;
	km2 = mm2/10000000000000; 
	return km2;
}
float konversiMm2KeHm2(float mm2){
	float hm2;
	hm2 = mm2/10000000000; 
	return hm2;
}
float konversiMm2KeDam2(float mm2){
	float dam2;
	dam2 = mm2/100000000; 
	return dam2;
}
float konversiMm2KeM2(float mm2){
	float m2;
	m2 = mm2/1000000; 
	return m2;
}
float konversiMm2KeDm2(float mm2){
	float dm2;
	dm2 = mm2/10000; 
	return dm2;
}
float konversiMm2KeCm2(float mm2){
	float cm2;
	cm2 = mm2/100; 
	return cm2;
}
void hasilKonversiMm2(){
	float km2, hm2, dam2, m2, dm2, cm2, mm2;
	
	printf("Masukkan nilai satuan panjang (dalam Milimeter persegi): ");
	scanf("%f", &mm2);
	km2 = konversiMm2KeKm2(mm2);
	printf("%.2f Milimeter persegi sama dengan %f Kilometer persegi\n", mm2, km2);
	hm2 = konversiMm2KeHm2(mm2);
	printf("%.2f Milimeter persegisama dengan %f Hektometer persegi (Hektare)\n", mm2, hm2);
	dam2 = konversiMm2KeDam2(mm2);
	printf("%.2f Milimeter persegisama dengan %f Dekameter persegi (Are)\n", mm2, dam2);
	m2 = konversiMm2KeM2(mm2);
	printf("%.2f Milimeter persegisama dengan %f Meter persegi\n", mm2, m2);
	dm2 = konversiMm2KeDm2(mm2);
	printf("%.2f Milimeter persegisama dengan %f Desimeter persegi\n", mm2, dm2);
	cm2 = konversiMm2KeCm2(mm2);
	printf("%.2f Milimeter persegisama dengan %f Milimeter persegi\n", mm2, cm2);
}

/*Matriks*/
void menuMatriks(){
	int pilih;
	system("cls");
	printf("Operasi Matriks \n");
	printf("1. Penjumlahan\n");
	printf("2. Pengurangan\n");	
	printf("3. Perkalian\n");
	printf("4. Perkalian Skalar\n");
	printf("5. Transpose\n");
	printf("Pilih : ");
	scanf("%d", &pilih);
	switch(pilih){
		case 1:matriksPenjumlahan();
			break;
		case 2:matriksPengurangan();
			break;
		case 3:matriksPerkalian();
			break;
		case 4:matriksPerkalianSkalar();
			break;
		case 5:transposeMatriks();
			break;
    getch();
	}
}

void matriksPenjumlahan(){
	int i, j, x, y, matriks1[maks][maks], matriks2[maks][maks], hasilPenjumlahan[maks][maks];
	
	printf("Masukkan jumlah baris matriks: ");
	scanf("%d", &x);
	printf("Masukkan jumlah kolom matriks: ");
	scanf("%d", &y);
	
	printf("Masukkan elemen matriks pertama: \n");
	for (i = 0; i < x; i++){
		for (j = 0; j < y; j++){
			printf("Matriks baris %d kolom %d : ",i+1,j+1);
			scanf("%d", &matriks1[i][j]);
		}
	}
	printf("Masukkan elemen matriks kedua: \n");
	for (i = 0; i < x; i++){
		for (j = 0; j < y; j++){
			printf("Matriks baris %d kolom %d : ",i+1,j+1);
			scanf("%d", &matriks2[i][j]);
		}
	}
	printf("Hasil prnjumlahan matriks: \n");
	for (i = 0; i < x; i++){
		for (j = 0; j < y; j++){
			hasilPenjumlahan[i][j] = matriks1[i][j] + matriks2[i][j];
			printf("%d \t", hasilPenjumlahan[i][j]);
		}
		printf("\n");
	}
}

void matriksPengurangan(){
	int i, j, x, y, matriks1[maks][maks], matriks2[maks][maks], hasilPengurangan[maks][maks];
	
	printf("Masukkan jumlah baris matriks: ");
	scanf("%d", &x);
	printf("Masukkan jumlah kolom matriks: ");
	scanf("%d", &y);
	
	printf("Masukkan elemen matriks pertama: \n");
	for (i = 0; i < x; i++){
		for (j = 0; j < y; j++){
			printf("Matriks baris %d kolom %d : ",i+1,j+1);
			scanf("%d", &matriks1[i][j]);
		}
	}
	printf("Masukkan elemen matriks kedua: \n");
	for (i = 0; i < x; i++){
		for (j = 0; j < y; j++){
			printf("Matriks baris %d kolom %d : ",i+1,j+1);
			scanf("%d", &matriks2[i][j]);
		}
	}
	printf("Hasil pengurangan matriks: \n");
	for (i = 0; i < x; i++){
		for (j = 0; j < y; j++){
			hasilPengurangan[i][j] = matriks1[i][j] - matriks2[i][j];
			printf("%d \t", hasilPengurangan[i][j]);
    	}
    	printf("\n");
	}
}

void matriksPerkalian(){
	int matriks1[maks][maks], matriks2[maks][maks], hasilPerkalian[maks][maks];
    int i, j, k, x, y, z, a, b, hasil;      
	printf("Masukkan ukuran matriks 1\n");
    printf("Baris : ");
    scanf("%d",&x);
	printf("Kolom : ");
	scanf("%d",&y);      
	printf("\n\nMatriks Pertama : \n");
	for (i=0;i<x;i++){
        for (j=0;j<y;j++){
            printf("Matriks baris %d kolom %d : ",i+1,j+1);
            scanf("%d",&matriks1[i][j]);    
        }
    } 
	printf("\n\nMasukkan ukuran matriks 2\n");
    printf("Baris : ");
    scanf("%d",&a);
	printf("Kolom : ");
	scanf("%d",&b);
	printf("\n\nMatriks Kedua : \n");
    for (i=0;i<a;i++){
		for (j=0;j<b;j++){
			printf("Matriks baris %d kolom %d : ",i+1,j+1);
            scanf("%d",&matriks2[i][j]) ;               
        }
    }
    printf("\n\nHasil Perkalian Matriks : \n");
    if(x==b){
	    for (i=0;i<x;i++){
			for (j=0;j<b;j++){
				hasilPerkalian[i][j] = 0;
				for (k=0;k<a;k++){
					hasilPerkalian[i][j] = hasilPerkalian[i][j]+(matriks1[i][k] * matriks2[k][j]);
				}
				printf("%d \t", hasilPerkalian[i][j]);
	        }
	        printf("\n");
	    }
	}
	else {
		printf("tak terdefinisi!!! \n");
	}
}
void transposeMatriks(){
	int i, j, x, y, matriks[maks][maks], hasilTranspose[maks][maks];
	printf("Masukkan jumlah baris matriks: ");
	scanf("%d", &x);
	printf("Masukkan jumlah kolom matriks: ");
	scanf("%d", &y);
	printf("Masukkan elemen matriks: \n");
	for (i = 0; i < x; i++){
		for (j = 0; j < y; j++){
			printf("Matriks baris %d kolom %d : ",i+1,j+1);
			scanf("%d", &matriks[i][j]);
		}
	}
	printf("Matriks sebelum diranspose : \n");
	for (i = 0; i < x; i++){
		for (j = 0; j < y; j++){
			printf("%d \t", matriks[i][j]);
		}
		printf("\n");
	}
	printf("Matriks setelah ditranspose : \n");
	for(i=0;i<y;i++)
	{
		for(j=0;j<x;j++)
		{
			hasilTranspose[i][j]=matriks[j][i];
			printf("%d \t", hasilTranspose[i][j]);	
		}
		printf("\n");
	}
}
void matriksPerkalianSkalar(){
	int i, j, x, y, bil, matriks[maks][maks], hasilSkalar[maks][maks];
	printf("Masukkan jumlah baris matriks: ");
	scanf("%d", &x);
	printf("Masukkan jumlah kolom matriks: ");
	scanf("%d", &y);
	printf("Masukkan elemen matriks: \n");
	for (i = 0; i < x; i++){
		for (j = 0; j < y; j++){
			printf("Matriks baris %d kolom %d : ",i+1,j+1);
			scanf("%d", &matriks[i][j]);
		}
	}
	printf("Matriks sebelum diranspose : \n");
	for (i = 0; i < x; i++){
		for (j = 0; j < y; j++){
			printf("%d \t", matriks[i][j]);
		}
		printf("\n");
	}
	printf("Masukkan bilangan pengali: ");
	scanf("%d", &bil);
	printf("Hasil perkalian skalar: \n");
	for(i=0;i<x;i++){
        for(j=0;j<y;j++){
            hasilSkalar[i][j]=matriks[i][j] * bil;
            printf("%d \t", hasilSkalar[i][j]);
        }
        printf("\n");
    }
}
