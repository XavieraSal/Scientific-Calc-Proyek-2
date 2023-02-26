#ifndef AuliaAziizah_h
#include <stdlib.h>
#define maks 10

/*Konversi Suhu*/
float konversiCelciusFahrenheit(float nilai){
	float fahrenheit;
	fahrenheit = (nilai*9/5)+32;
	return fahrenheit;
}
float konversiCelciusKelvin(float nilai){
	float kelvin;
	kelvin = nilai+273.15;
	return kelvin;
}
void hasilKonversiCelcius(float nilai){
	float hasilF, hasilK;
	
	hasilF = konversiCelciusFahrenheit(nilai);
	hasilK = konversiCelciusKelvin(nilai);
	printf("%.2f C = %.2f F = %.2f K\n", nilai, hasilF, hasilK);	
}

float konversiFahrenheitCelcius(float nilai){
	float celcius;
	celcius = (nilai-32)*5/9;
	return celcius;
}
float konversiFahrenheitKelvin(float nilai){
	float kelvin;
	kelvin = (nilai-32)*5/9+273,15;
	return kelvin;
}
void hasilKonversiFahrenheit(float nilai){
	float hasilC, hasilK, hasilR;
	
	hasilK = konversiFahrenheitKelvin(nilai);
	hasilC = konversiFahrenheitCelcius(nilai);
	printf("%.2f F = %.2f K = %.2f C\n", nilai, hasilK, hasilC);
}

float konversiKelvinCelcius(float nilai){
	float celcius;
	celcius = nilai-273,15;
	return celcius;
}
float konversiKelvinFahrenheit(float nilai){
	float fahrenheit;
	fahrenheit = (nilai*9/5)-459,67;
	return fahrenheit;
}
void hasilKonversiKelvin(float nilai){
	float hasilC, hasilF;

	hasilC = konversiKelvinCelcius(nilai);
	hasilF = konversiKelvinFahrenheit(nilai);
	printf("%.2f K = %.2f C = %.2f F\n", nilai, hasilC, hasilF);	
}

/*Konversi Panjang*/
float konversiKmKeHm(float nilai){
	float hm;
	hm = nilai * 10; 
	return hm;
}
float konversiKmKeDam(float nilai){
	float dam;
	dam = nilai * 100; 
	return dam;
}
float konversiKmKeM(float nilai){
	float m;
	m = nilai * 1000; 
	return m;
}
float konversiKmKeDm(float nilai){
	float dm;
	dm = nilai * 10000; 
	return dm;
}
float konversiKmKeCm(float nilai){
	float cm;
	cm = nilai * 100000; 
	return cm;
}
float konversiKmKeMm(float nilai){
	float mm;
	mm = nilai * 1000000; 
	return mm;
}
void hasilKonversiKm(float nilai){
	float hm, dam, m, dm, cm, mm;
	
	hm = konversiKmKeHm(nilai);
	printf("%.2f Km = %f Hm\n", nilai, hm);
	dam = konversiKmKeDam(nilai);
	printf("%.2f Km = %f Dam\n", nilai, dam);
	m = konversiKmKeM(nilai);
	printf("%.2f Km = %f M\n", nilai, m);
	dm = konversiKmKeDm(nilai);
	printf("%.2f Km = %f Dm\n", nilai, dm);
	cm = konversiKmKeCm(nilai);
	printf("%.2f Km = %f Cm\n", nilai, cm);
	mm = konversiKmKeMm(nilai);
	printf("%.2f Km = %f Mm\n", nilai, mm);
}

float konversiHmKeKm(float nilai){
	float km;
	km = nilai/10; 
	return km;
}
float konversiHmKeDam(float nilai){
	float dam;
	dam = nilai * 10; 
	return dam;
}
float konversiHmKeM(float nilai){
	float m;
	m = nilai * 100; 
	return m;
}
float konversiHmKeDm(float nilai){
	float dm;
	dm = nilai * 1000; 
	return dm;
}
float konversiHmKeCm(float nilai){
	float cm;
	cm = nilai * 10000; 
	return cm;
}
float konversiHmKeMm(float nilai){
	float mm;
	mm = nilai * 100000; 
	return mm;
}
void hasilKonversiHm(float nilai){
	float km, dam, m, dm, cm, mm;
	
	km = konversiHmKeKm(nilai);
	printf("%.2f Hm = %f Km\n", nilai, km);
	dam = konversiHmKeDam(nilai);
	printf("%.2f Hm = %f Dam\n", nilai, dam);
	m = konversiHmKeM(nilai);
	printf("%.2f Hm = %f M\n", nilai, m);
	dm = konversiHmKeDm(nilai);
	printf("%.2f Hm = %f Dm\n", nilai, dm);
	cm = konversiHmKeCm(nilai);
	printf("%.2f Hm = %f Cm\n", nilai, cm);
	mm = konversiHmKeMm(nilai);
	printf("%.2f Km = %f Mm\n", nilai, mm);
}

float konversiDamKeKm(float nilai){
	float km;
	km = nilai/100; 
	return km;
}
float konversiDamKeHm(float nilai){
	float hm;
	hm = nilai/10; 
	return hm;
}
float konversiDamKeM(float nilai){
	float m;
	m = nilai * 10; 
	return m;
}
float konversiDamKeDm(float nilai){
	float dm;
	dm = nilai * 100; 
	return dm;
}
float konversiDamKeCm(float nilai){
	float cm;
	cm = nilai * 1000; 
	return cm;
}
float konversiDamKeMm(float nilai){
	float mm;
	mm = nilai * 10000; 
	return mm;
}
void hasilKonversiDam(float nilai){
	float km, hm, m, dm, cm, mm;
	
	km = konversiDamKeKm(nilai);
	printf("%.2f Dam = %f Km\n", nilai, km);
	hm = konversiDamKeHm(nilai);
	printf("%.2f Dam = %f Hm\n", nilai, hm);
	m = konversiDamKeM(nilai);
	printf("%.2f Dam = %f M\n", nilai, m);
	dm = konversiDamKeDm(nilai);
	printf("%.2f Dam = %f Dm\n", nilai, dm);
	cm = konversiDamKeCm(nilai);
	printf("%.2f Dam = %f Cm\n", nilai, cm);
	mm = konversiDamKeMm(nilai);
	printf("%.2f Dam = %f Mm\n", nilai, mm);
}

float konversiMKeKm(float nilai){
	float km;
	km = nilai/1000; 
	return km;
}
float konversiMKeHm(float nilai){
	float hm;
	hm = nilai/100; 
	return hm;
}
float konversiMKeDam(float nilai){
	float dam;
	dam = nilai/10; 
	return dam;
}
float konversiMKeDm(float nilai){
	float dm;
	dm = nilai * 10; 
	return dm;
}
float konversiMKeCm(float nilai){
	float cm;
	cm = nilai * 100; 
	return cm;
}
float konversiMKeMm(float nilai){
	float mm;
	mm = nilai * 1000; 
	return mm;
}
void hasilKonversiM(float nilai){
	float km, hm, dam, dm, cm, mm;
	
	km = konversiMKeKm(nilai);
	printf("%.2f M = %f Km\n", nilai, km);
	hm = konversiMKeHm(nilai);
	printf("%.2f M = %f Hm\n", nilai, hm);
	dam = konversiMKeDam(nilai);
	printf("%.2f M = %f Dam\n", nilai, dam);
	dm = konversiMKeDm(nilai);
	printf("%.2f M = %f Dm\n", nilai, dm);
	cm = konversiMKeCm(nilai);
	printf("%.2f M = %f Cm\n", nilai, cm);
	mm = konversiMKeMm(nilai);
	printf("%.2f M = %f Mm\n", nilai, mm);
}

float konversiDmKeKm(float nilai){
	float km;
	km = nilai/10000; 
	return km;
}
float konversiDmKeHm(float nilai){
	float hm;
	hm = nilai/1000; 
	return hm;
}
float konversiDmKeDam(float nilai){
	float dam;
	dam = nilai/100; 
	return dam;
}
float konversiDmKeM(float nilai){
	float m;
	m = nilai/10; 
	return m;
}
float konversiDmKeCm(float nilai){
	float cm;
	cm = nilai * 10; 
	return cm;
}
float konversiDmKeMm(float nilai){
	float mm;
	mm = nilai * 100; 
	return mm;
}
void hasilKonversiDm(float nilai){
	float km, hm, dam, m, cm, mm;

	km = konversiDmKeKm(nilai);
	printf("%.2f Dm = %f Km\n", nilai, km);
	hm = konversiDmKeHm(nilai);
	printf("%.2f Dm = %f Hm\n", nilai, hm);
	dam = konversiDmKeDam(nilai);
	printf("%.2f Dm = %f Dam\n", nilai, dam);
	m = konversiDmKeM(nilai);
	printf("%.2f Dm = %f M\n", nilai, m);
	cm = konversiDmKeCm(nilai);
	printf("%.2f Dm = %f Cm\n", nilai, cm);
	mm = konversiDmKeMm(nilai);
	printf("%.2f Dm = %f Mm\n", nilai, mm);
}

float konversiCmKeKm(float nilai){
	float km;
	km = nilai/100000; 
	return km;
}
float konversiCmKeHm(float nilai){
	float hm;
	hm = nilai/10000; 
	return hm;
}
float konversiCmKeDam(float nilai){
	float dam;
	dam = nilai/1000; 
	return dam;
}
float konversiCmKeM(float nilai){
	float m;
	m = nilai/100; 
	return m;
}
float konversiCmKeDm(float nilai){
	float dm;
	dm = nilai/10; 
	return dm;
}
float konversiCmKeMm(float nilai){
	float mm;
	mm = nilai * 10; 
	return mm;
}
void hasilKonversiCm(float nilai){
	float km, hm, dam, m, dm, mm;
	
	km = konversiCmKeKm(nilai);
	printf("%.2f Cm = %f Km\n", nilai, km);
	hm = konversiCmKeHm(nilai);
	printf("%.2f Cm = %f Hm\n", nilai, hm);
	dam = konversiCmKeDam(nilai);
	printf("%.2f Cm = %f Dam\n", nilai, dam);
	m = konversiCmKeM(nilai);
	printf("%.2f Cm = %f M\n", nilai, m);
	dm = konversiCmKeDm(nilai);
	printf("%.2f Cm = %f Dm\n", nilai, dm);
	mm = konversiCmKeMm(nilai);
	printf("%.2f Cm = %f Mm\n", nilai, mm);
}

float konversiMmKeKm(float nilai){
	float km;
	km = nilai/1000000; 
	return km;
}
float konversiMmKeHm(float nilai){
	float hm;
	hm = nilai/100000; 
	return hm;
}
float konversiMmKeDam(float nilai){
	float dam;
	dam = nilai/10000; 
	return dam;
}
float konversiMmKeM(float nilai){
	float m;
	m = nilai/1000; 
	return m;
}
float konversiMmKeDm(float nilai){
	float dm;
	dm = nilai/100; 
	return dm;
}
float konversiMmKeCm(float nilai){
	float cm;
	cm = nilai/10; 
	return cm;
}
void hasilKonversiMm(float nilai){
	float km, hm, dam, m, dm, cm;
	
	km = konversiMmKeKm(nilai);
	printf("%.2f Mm = %f Km\n", nilai, km);
	hm = konversiMmKeHm(nilai);
	printf("%.2f Mm = %f Hm\n", nilai, hm);
	dam = konversiMmKeDam(nilai);
	printf("%.2f Mm = %f Dam\n", nilai, dam);
	m = konversiMmKeM(nilai);
	printf("%.2f Mm = %f M\n", nilai, m);
	dm = konversiMmKeDm(nilai);
	printf("%.2f Mm = %f Dm\n", nilai, dm);
	cm = konversiMmKeCm(nilai);
	printf("%.2f Mm = %f Cm\n", nilai, cm);
}

/*Konversi Waktu*/
float konversiHariJam(float nilai){
	float jam;
	jam = nilai * 24;
	return jam;
}
float konversiHariMenit(float nilai){
	float menit;
	menit = nilai * 1440;
	return menit;
}
float konversiHariDetik(float nilai){
	float detik;
	detik = nilai * 86400;
	return detik;
}
void hasilKonversiHari(float nilai){
	float jam, menit, detik;	
	
	jam = konversiHariJam(nilai);
	menit = konversiHariMenit(nilai);
	detik = konversiHariDetik(nilai);
	printf("%.0f Hari = %.0f Jam = %.0f Menit = %.0f Detik\n", nilai, jam, menit, detik);
}

float konversiJamHari(float nilai){
	float hari;
	hari = nilai / 24;
	return hari;
}
float konversiJamMenit(float nilai){
	float menit;
	menit = nilai * 60;
	return menit;
}
float konversiJamDetik(float nilai){
	float detik;
	detik = nilai * 3600;
	return detik;
}
void hasilKonversiJam(float nilai){
	float hari, menit, detik;
	
	menit = konversiJamMenit(nilai);
	detik = konversiJamDetik(nilai);
	hari = konversiJamHari(nilai);
	printf("%.0f Jam = %.0f Menit = %.0f Detik = %.0f Hari\n", nilai, menit, detik, hari);
}

float konversiMenitHari(float nilai){
	float hari;
	hari = nilai / 1440;
	return hari;
}
float konversiMenitJam(float nilai){
	float jam;
	jam = nilai / 60;
	return jam;
}
float konversiMenitDetik(float nilai){
	float detik;
	detik = nilai * 60;
	return detik;
}
void hasilKonversiMenit(float nilai){
	float hari, jam, detik;

	detik = konversiMenitDetik(nilai);
	hari = konversiMenitHari(nilai);
	jam = konversiMenitJam(nilai);
	printf("%.0f Menit = %.0f Detik = %.0f Hari = %.0f Jam\n", nilai, detik, hari, jam);
}

float konversiDetikHari(float nilai){
	float hari;
	hari = nilai / 86400;
	return hari;
}
float konversiDetikJam(float nilai){
	float jam;
	jam = nilai / 3600;
	return jam;
}
float konversiDetikMenit(float nilai){
	float menit;
	menit = nilai / 60;
	return menit;
}
void hasilKonversiDetik(float nilai){
	float hari, jam, menit;
	
	hari = konversiDetikHari(nilai);
	jam = konversiDetikJam(nilai);
	menit = konversiDetikMenit(nilai);
	printf("%.0f Detik = %.0f Hari = %.0f Jam = %.0f Menit\n", nilai, hari, jam, menit);
}

/*Konversi Luas*/
float konversiKm2KeHm2(float nilai){
	float hm2;
	hm2 = nilai * 100; 
	return hm2;
}
float konversiKm2KeDam2(float nilai){
	float dam2;
	dam2 = nilai * 10000; 
	return dam2;
}
float konversiKm2KeM2(float nilai){
	float m2;
	m2 = nilai * 1000000; 
	return m2;
}
float konversiKm2KeDm2(float nilai){
	float dm2;
	dm2 = nilai * 100000000; 
	return dm2;
}
float konversiKm2KeCm2(float nilai){
	float cm2;
	cm2 = nilai * 10000000000; 
	return cm2;
}
float konversiKm2KeMm2(float nilai){
	float mm2;
	mm2 = nilai * 10000000000000; 
	return mm2;
}
void hasilKonversiKm2(float nilai){
	float hm2, dam2, m2, dm2, cm2, mm2;

	hm2 = konversiKm2KeHm2(nilai);
	printf("%.2f Kilometer persegi = %f Hektometer persegi (Hektare)\n", nilai, hm2);
	dam2 = konversiKm2KeDam2(nilai);
	printf("%.2f Kilometer persegi = %f Dekameter persegi (Are)\n", nilai, dam2);
	m2 = konversiKm2KeM2(nilai);
	printf("%.2f Kilometer persegi = %f Meter persegi\n", nilai, m2);
	dm2 = konversiKm2KeDm2(nilai);
	printf("%.2f Kilometer persegi = %f Desimeter persegi\n", nilai, dm2);
	cm2 = konversiKm2KeCm2(nilai);
	printf("%.2f Kilometer persegi = %f Centimeter persegi\n", nilai, cm2);
	mm2 = konversiKm2KeMm2(nilai);
	printf("%.2f Kilometer persegi = %f Milimeter persegi\n", nilai, mm2);
}

float konversiHm2KeKm2(float nilai){
	float km2;
	km2 = nilai/100; 
	return km2;
}
float konversiHm2KeDam2(float nilai){
	float dam2;
	dam2 = nilai * 100; 
	return dam2;
}
float konversiHm2KeM2(float nilai){
	float m2;
	m2 = nilai * 10000; 
	return m2;
}
float konversiHm2KeDm2(float nilai){
	float dm2;
	dm2 = nilai * 1000000; 
	return dm2;
}
float konversiHm2KeCm2(float nilai){
	float cm2;
	cm2 = nilai * 100000000; 
	return cm2;
}
float konversiHm2KeMm2(float nilai){
	float mm2;
	mm2 = nilai * 10000000000; 
	return mm2;
}
void hasilKonversiHm2(float nilai){
	float km2, dam2, m2, dm2, cm2, mm2;
	
	km2 = konversiHm2KeKm2(nilai);
	printf("%.2f Hektare = %f Kilometer persegi\n", nilai, km2);
	dam2 = konversiHm2KeDam2(nilai);
	printf("%.2f Hektare = %f Dekameter persegi (Are)\n", nilai, dam2);
	m2 = konversiHm2KeM2(nilai);
	printf("%.2f Hektare = %f Meter persegi\n", nilai, m2);
	dm2 = konversiHm2KeDm2(nilai);
	printf("%.2f Hektare = %f Desimeter persegi\n", nilai, dm2);
	cm2 = konversiHm2KeCm2(nilai);
	printf("%.2f Hektare = %f Centimeter persegi\n", nilai, cm2);
	mm2 = konversiHm2KeMm2(nilai);
	printf("%.2f Hektare = %f Milimiter persegi\n", nilai, mm2);
}

float konversiDam2KeKm2(float nilai){
	float km2;
	km2 = nilai/10000; 
	return km2;
}
float konversiDam2KeHm2(float nilai){
	float hm2;
	hm2 = nilai/100; 
	return hm2;
}
float konversiDam2KeM2(float nilai){
	float m2;
	m2 = nilai * 100; 
	return m2;
}
float konversiDam2KeDm2(float nilai){
	float dm2;
	dm2 = nilai * 10000; 
	return dm2;
}
float konversiDam2KeCm2(float nilai){
	float cm2;
	cm2 = nilai * 1000000; 
	return cm2;
}
float konversiDam2KeMm2(float nilai){
	float mm2;
	mm2 = nilai * 100000000; 
	return mm2;
}
void hasilKonversiDam2(float nilai){
	float km2, hm2, m2, dm2, cm2, mm2;
	
	km2 = konversiDam2KeKm2(nilai);
	printf("%.2f Are = %f Kilometer persegi\n", nilai, km2);
	hm2 = konversiDam2KeHm2(nilai);
	printf("%.2f Are = %f Hektometer persegi (Hektare)\n", nilai, hm2);
	m2 = konversiDam2KeM2(nilai);
	printf("%.2f Are = %f Meter persegi\n", nilai, m2);
	dm2 = konversiDam2KeDm2(nilai);
	printf("%.2f Are = %f Desimeter persegi\n", nilai, dm2);
	cm2 = konversiDam2KeCm2(nilai);
	printf("%.2f Are = %f Centimeter persegi\n", nilai, cm2);
	mm2 = konversiDam2KeMm2(nilai);
	printf("%.2f Are = %f Milimeter persegi\n", nilai, mm2);
}

float konversiM2KeKm2(float nilai){
	float km2;
	km2 = nilai/1000000; 
	return km2;
}
float konversiM2KeHm2(float nilai){
	float hm2;
	hm2 = nilai/10000; 
	return hm2;
}
float konversiM2KeDam2(float nilai){
	float dam2;
	dam2 = nilai/100; 
	return dam2;
}
float konversiM2KeDm2(float nilai){
	float dm2;
	dm2 = nilai * 100; 
	return dm2;
}
float konversiM2KeCm2(float nilai){
	float cm2;
	cm2 = nilai * 10000; 
	return cm2;
}
float konversiM2KeMm2(float nilai){
	float mm2;
	mm2 = nilai * 1000000; 
	return mm2;
}
void hasilKonversiM2(float nilai){
	float km2, hm2, dam2, dm2, cm2, mm2;

	km2 = konversiM2KeKm2(nilai);
	printf("%.2f Meter persegi = %f Kilometer persegi\n", nilai, km2);
	hm2 = konversiM2KeHm2(nilai);
	printf("%.2f Meter persegi = %f Hektometer persegi (Hektare)\n", nilai, hm2);
	dam2 = konversiM2KeDam2(nilai);
	printf("%.2f Meter persegi = %f Dekameter persegi (Are)\n", nilai, dam2);
	dm2 = konversiM2KeDm2(nilai);
	printf("%.2f Meter persegi = %f Desimeter persegi\n", nilai, dm2);
	cm2 = konversiM2KeCm2(nilai);
	printf("%.2f Meter persegi = %f Centimeter persegi\n", nilai, cm2);
	mm2 = konversiM2KeMm2(nilai);
	printf("%.2f Meter persegi = %f Milimeter persegi\n", nilai, mm2);
}

float konversiDm2KeKm2(float nilai){
	float km2;
	km2 = nilai/100000000; 
	return km2;
}
float konversiDm2KeHm2(float nilai){
	float hm2;
	hm2 = nilai/1000000; 
	return hm2;
}
float konversiDm2KeDam2(float nilai){
	float dam2;
	dam2 = nilai/10000; 
	return dam2;
}
float konversiDm2KeM2(float nilai){
	float m2;
	m2 = nilai/100; 
	return m2;
}
float konversiDm2KeCm2(float nilai){
	float cm2;
	cm2 = nilai * 100; 
	return cm2;
}
float konversiDm2KeMm2(float nilai){
	float mm2;
	mm2 = nilai * 10000; 
	return mm2;
}
void hasilKonversiDm2(float nilai){
	float km2, hm2, dam2, m2, cm2, mm2;

	km2 = konversiDm2KeKm2(nilai);
	printf("%.2f Desimeter persegi = %f Kilometer persegi\n", nilai, km2);
	hm2 = konversiDm2KeHm2(nilai);
	printf("%.2f Desimeter persegi = %f Hektometer persegi (Hektare)\n", nilai, hm2);
	dam2 = konversiDm2KeDam2(nilai);
	printf("%.2f Desimeter persegi = %f Dekameter persegi (Are)\n", nilai, dam2);
	m2 = konversiDm2KeM2(nilai);
	printf("%.2f Desimeter persegi = %f Meter persegi\n", nilai, m2);
	cm2 = konversiDm2KeCm2(nilai);
	printf("%.2f Desimeter persegi = %f Centimeter persegi\n", nilai, cm2);
	mm2 = konversiDm2KeMm2(nilai);
	printf("%.2f Desimeter persegi = %f Milimeter persegi\n", nilai, mm2);
}

float konversiCm2KeKm2(float nilai){
	float km2;
	km2 = nilai/10000000000; 
	return km2;
}
float konversiCm2KeHm2(float nilai){
	float hm2;
	hm2 = nilai/100000000; 
	return hm2;
}
float konversiCm2KeDam2(float nilai){
	float dam2;
	dam2 = nilai/1000000; 
	return dam2;
}
float konversiCm2KeM2(float nilai){
	float m2;
	m2 = nilai/10000; 
	return m2;
}
float konversiCm2KeDm2(float nilai){
	float dm2;
	dm2 = nilai/100; 
	return dm2;
}
float konversiCm2KeMm2(float nilai){
	float mm2;
	mm2 = nilai * 100; 
	return mm2;
}
void hasilKonversiCm2(float nilai){
	float km2, hm2, dam2, m2, dm2, mm2;
	
	km2 = konversiCm2KeKm2(nilai);
	printf("%.2f Centimeter persegi = %f Kilometer persegi\n", nilai, km2);
	hm2 = konversiCm2KeHm2(nilai);
	printf("%.2f Centimeter persegi = %f Hektometer persegi (Hektare)\n", nilai, hm2);
	dam2 = konversiCm2KeDam2(nilai);
	printf("%.2f Centimeter persegi = %f Dekameter persegi (Are)\n", nilai, dam2);
	m2 = konversiCm2KeM2(nilai);
	printf("%.2f Centimeter persegi = %f Meter persegi\n", nilai, m2);
	dm2 = konversiCm2KeDm2(nilai);
	printf("%.2f Centimeter persegi = %f Desimeter persegi\n", nilai, dm2);
	mm2 = konversiCm2KeMm2(nilai);
	printf("%.2f Centimeter persegi = %f Milimeter persegi\n", nilai, mm2);
}

float konversiMm2KeKm2(float nilai){
	float km2;
	km2 = nilai/10000000000000; 
	return km2;
}
float konversiMm2KeHm2(float nilai){
	float hm2;
	hm2 = nilai/10000000000; 
	return hm2;
}
float konversiMm2KeDam2(float nilai){
	float dam2;
	dam2 = nilai/100000000; 
	return dam2;
}
float konversiMm2KeM2(float nilai){
	float m2;
	m2 = nilai/1000000; 
	return m2;
}
float konversiMm2KeDm2(float nilai){
	float dm2;
	dm2 = nilai/10000; 
	return dm2;
}
float konversiMm2KeCm2(float nilai){
	float cm2;
	cm2 = nilai/100; 
	return cm2;
}
void hasilKonversiMm2(float nilai){
	float km2, hm2, dam2, m2, dm2, cm2;
	
	km2 = konversiMm2KeKm2(nilai);
	printf("%.2f Milimeter persegi = %f Kilometer persegi\n", nilai, km2);
	hm2 = konversiMm2KeHm2(nilai);
	printf("%.2f Milimeter persegi = %f Hektometer persegi (Hektare)\n", nilai, hm2);
	dam2 = konversiMm2KeDam2(nilai);
	printf("%.2f Milimeter persegi = %f Dekameter persegi (Are)\n", nilai, dam2);
	m2 = konversiMm2KeM2(nilai);
	printf("%.2f Milimeter persegi = %f Meter persegi\n", nilai, m2);
	dm2 = konversiMm2KeDm2(nilai);
	printf("%.2f Milimeter persegi = %f Desimeter persegi\n", nilai, dm2);
	cm2 = konversiMm2KeCm2(nilai);
	printf("%.2f Milimeter persegi = %f Milimeter persegi\n", nilai, cm2);
}

///*Matriks*/
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
#endif
