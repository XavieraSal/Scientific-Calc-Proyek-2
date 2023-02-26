#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "AuliaAziizah.h"

int main(){
	char satuan[10];
    float nilai;
	
	scanf("%f %s", &nilai, satuan);
	
	if (strcmp(satuan, "C") == 0){
		sscanf(satuan,"%f C",&nilai);
        hasilKonversiCelcius(nilai);
    } else if (strcmp(satuan, "F") == 0){
		sscanf(satuan,"%f F",&nilai);
        hasilKonversiFahrenheit(nilai);
    } else if (strcmp(satuan, "K") == 0){
    	sscanf(satuan,"%f K",&nilai);
        hasilKonversiKelvin(nilai);
	} 
	else if (strcmp(satuan, "km") == 0){
		sscanf(satuan,"%f km",&nilai);
        hasilKonversiKm(nilai);
    } else if(strcmp(satuan, "hm") == 0){
		sscanf(satuan,"%f hm",&nilai);
        hasilKonversiHm(nilai);
    } else if(strcmp(satuan, "dam") == 0){
    	sscanf(satuan,"%f dam",&nilai);
        hasilKonversiDam(nilai);
	} else if(strcmp(satuan, "m") == 0){
    	sscanf(satuan,"%f m",&nilai);
        hasilKonversiM(nilai);
	} else if(strcmp(satuan, "dm") == 0){
    	sscanf(satuan,"%f dm",&nilai);
        hasilKonversiDm(nilai);
	} else if(strcmp(satuan, "cm") == 0){
    	sscanf(satuan,"%f cm",&nilai);
        hasilKonversiCm(nilai);
    } else if(strcmp(satuan, "mm") == 0){
    	sscanf(satuan,"%f mm",&nilai);
        hasilKonversiMm(nilai);
	}
	else if(strcmp(satuan, "hari") == 0){
		sscanf(satuan,"%f hari",&nilai);
        hasilKonversiHari(nilai);
    } else if(strcmp(satuan, "jam") == 0){
    	sscanf(satuan,"%f jam",&nilai);
        hasilKonversiJam(nilai);
	} else if(strcmp(satuan, "menit") == 0){
		sscanf(satuan,"%f menit",&nilai);
        hasilKonversiMenit(nilai);
    } else if(strcmp(satuan, "detik") == 0){
		sscanf(satuan,"%f detik",&nilai);
        hasilKonversiDetik(nilai);
	}
	if (strcmp(satuan, "km2") == 0){
		sscanf(satuan,"%f km2",&nilai);
        hasilKonversiKm2(nilai);
    } else if(strcmp(satuan, "hm2") == 0){
		sscanf(satuan,"%f hm2",&nilai);
        hasilKonversiHm2(nilai);
    } else if(strcmp(satuan, "dam2") == 0){
    	sscanf(satuan,"%f dam2",&nilai);
        hasilKonversiDam2(nilai);
	} else if(strcmp(satuan, "m2") == 0){
    	sscanf(satuan,"%f m2",&nilai);
        hasilKonversiM2(nilai);
	} else if(strcmp(satuan, "dm2") == 0){
    	sscanf(satuan,"%f dm2",&nilai);
        hasilKonversiDm2(nilai);
	} else if(strcmp(satuan, "cm2") == 0){
    	sscanf(satuan,"%f cm2",&nilai);
        hasilKonversiCm2(nilai);
    } else if(strcmp(satuan, "mm2") == 0){
    	sscanf(satuan,"%f mm2",&nilai);
        hasilKonversiMm(nilai);
	} 
	else
		printf("Input salah...");
	return 0;
}
