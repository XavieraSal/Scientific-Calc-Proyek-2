#include "XavieraSS.h"

float AkarKuadrat(float x) {
    float hasil = x;
    float epsilon = 0.000001;
    while ((hasil - x / hasil) > epsilon) {
        hasil = (hasil + x / hasil) / 2.0;
    }
    return hasil;
}

double arctan(double x) {
    double hasil = 0.0;
    double sign = 1.0;
    double pangkat = x;
    double penyebut = 1.0;
    double suku = pangkat / penyebut;
    if (x > 1.0) {
        return PI / 2.0 - arctan(1.0 / x);
    } else if (x >= 0 && x <= 1.0) {
        while (suku > 0.0000000001) {
            hasil += sign * suku;
            sign = -sign;
            pangkat = pangkat * x * x;
            penyebut += 2.0;
            suku = pangkat / penyebut;
        }
        return hasil;
    } else if (x < 0 && x >= -1.0) {
        return -arctan(-x);
    } else {
        return -PI / 2.0 + arctan(1.0 / (-x));
    }
    return hasil;
}

double arcsin(double x) {
    if (x < -1.0 || x > 1.0) {
        return ERROR; // Input diluar jangkauan
    }
    if (x == -1.0) {
        return -1.57079632679; 
    }
    if (x == 1.0) {
        return 1.57079632679; 
    }
    double hasil = arctan(x / AkarKuadrat(1.0 - x * x));
    return hasil;
}

double arccos(double x) {
   return PI/2 - arcsin(x);
}

double arccot(double x) {
	double hasil;
    if (x < 0) {
        return arctan(1.0 / x) + PI;
    } else if (x == 0) {
        return PI / 2;
    } else {
        hasil=arctan(1.0 / x);
	}
    return hasil;
}

double arccsc (double x){
	double hasil = arcsin(1.0 / x);
	if (x > 0) {
    	return hasil;
    } else if (x < 0) {
        return -arccsc(-x);
    } else if (x==0){
    	return ERROR;
    }
    return hasil;
}

double arcsec (double x){
    double hasil;
    if (x > 1) {
        hasil = arccos(1.0 / x);
    } else if (x < -1) {
        hasil = PI - arccos(-1.0 / x);
    } else if (x < 1 && x > -1) {
        hasil = ERROR;
    } else if (x == 1) {
        hasil = 0.0;
    } else if (x == -1) {
        hasil = PI;
    }
    return hasil;
}

int main() {
    char input[50], operator[10], nilai[10];
    double x;
    printf("Masukkan operasi invers trigonometri: ");
    fgets(input, 50, stdin); 
    sscanf(input, "%[^()] (%[^)])", operator, nilai); //pemisahan dari input
    x = atof(nilai); //mengubah x agar bertipe double
    double hasil;
    if (strcmp(operator, "arcsin") == 0) {
        hasil = arcsin(x);
        printf("arcsin(%2.lf) = %lf\n", x, hasil);
    } else if (strcmp(operator, "arctan") == 0) {
        hasil = arctan(x);
		printf("arctan(%2.lf) = %lf\n", x, hasil); 
    } else if (strcmp(operator, "arccos") == 0) {
        hasil = arccos(x);
        printf("arccos(%2.lf) = %lf\n", x, hasil);  
    } else if (strcmp(operator, "arccot") == 0) {
        hasil = arccot(x);
        printf("arccot(%2.lf) = %lf\n", x, hasil);
    } else if (strcmp(operator, "arccsc") == 0) {
        hasil = arccsc(x);
        printf("arccsc(%2.lf) = %lf\n", x, hasil); 
    } else if (strcmp(operator, "arcsec") == 0) {
        hasil = arcsec(x);
        printf("arcsec(%2.lf) = %lf\n", x, hasil); 
	} else {
		printf ("Operasi tidak valid\n");	
	}
	return 0;
}

