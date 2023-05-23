#include "XavieraSS.h"


/*----------------------------------------------------------------*/
//I.S: definisikan fungsi AkarKuadrat dengan parameter x
float AkarKuadrat(float x) {
    float hasil = x; 
    float epsilon = 0.000001; //menetapkan toleransi kesalahan epsilon
    while ((hasil - x / hasil) > epsilon) { //loop
//        hasil = (hasil + x / hasil) / 2.0; // Pendekatan digunakan untuk mendekati akar kuadrat nilai x
    }
    return hasil; //mengembalikan nilai hasil
}
//F.S: Mengembalikan value hasil sebagai hasil perhitungan akar kuadrat
//Referensi modul double akarsemua dari Paulina 
//https://stackoverflow.com/search?q=square+root+without+math.c
//https://byjus.com/maths/newton-raphson-method/#:~:text=The%20Newton%20Raphson%20Method%20is,the%20method%20is%20quadratically%20convergent.

/*----------------------------------------------------------------*/
//I.S: definisikan fungsi arctan dengan parameter x.
double arctan(double x) {
    double hasil = 0.0; //var. untuk menyimpan hasil akhir
    double sign = 1.0; //var. untuk menentukan tanda suku
    double pangkat = x; //var. untuk menghitug pangkat suku saat ini
    double penyebut = 1.0; //var. untuk menghitung penyebut suku saat ini
    double suku = pangkat / penyebut; //var. untuk menyimpan suku
    if (x > 1.0) { //Jika kondisi terpenuhi, gunakan identitas trigonometri arctan(1/x) = PI/2 - arctan(x)
        return PI / 2.0 - arctan(1.0 / x);
    } else if (x >= 0 && x <= 1.0) { //jika kondisi terpenuhi, gunakan deret Taylor
        while (suku > 0.0000000001) { //Ulangi selama suku lebih besar dari batas toleransi yang ditetapkan
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
        return -PI / 2.0 + arctan(1.0 / (-x)); //jika x < -1
    }
    return hasil; 
}

//F.S: hasil perhitungan arctan

/*----------------------------------------------------------------*/
//I.S: definisikan fungsi arcsin dengan parameter x
double arcsin(double x) {
	double hasil;
    if (x < -1.0 || x > 1.0) {
        return ERROR; // Input di luar jangkauan
    }
    if (x == -1.0) {
        return -1.57079632679; 
    }
    if (x == 1.0) {
        return 1.57079632679; 
    }
    hasil = arctan(x / AkarKuadrat(1.0 - x * x)); //hubungan trigonometri antara fungsi arcsin dan fungsi arctan.
    return hasil;
}
//F.S: hasil perhitungan arcsin


/*----------------------------------------------------------------*/
//I.S: definisikan fungsi arcsin dengan parameter x
double arccos(double x) {
   return PI/2 - arcsin(x); //hubungan antara fungsi arccos dan fungsi arcsin
}
//F.S: mengembalikan nilai arccos dari x 

/*----------------------------------------------------------------*/
//I.S: definisikan fungsi arccot dengan parameter x
double arccot(double x) {
	double hasil;
    if (x < 0) {
        return arctan(1.0 / x) + PI; //hubungan trigonometri antara arccot dan arctan
    } else if (x == 0) {
        return PI / 2;
    } else {
        hasil=arctan(1.0 / x);
	}
    return hasil;
}

/*arccot(x) = arctan(1/x)
Rumus ini menyatakan bahwa untuk menghitung nilai arccot dari suatu nilai x, kita dapat menggunakan fungsi arctan dengan argumen 1/x.
berdasarkan hubungan trigonometri antara fungsi cotangen dan tangen. Jika kita memiliki sudut θ, dimana cot(θ) = x, maka nilai arccot(x) adalah sudut θ itu sendiri.
*/
//F.S: mengembalikan nilai arccot

/*----------------------------------------------------------------*/
//I.S: definisikan fungsi arccsc dengan parameter x
double arccsc (double x){
	double hasil = arcsin(1.0 / x); 
	if (x > 0) {
    	return hasil;
    } else if (x < 0) {
        return -arccsc(-x); //
    } else if (x==0){
    	return ERROR; //di luar jangkauan
    }
    return hasil;
}

/* arccsc(x) = arcsin(1/x)
hubungan trigonometri antara fungsi cosecans dan sinus. Jika kita memiliki sudut θ, dimana csc(θ) = x, maka nilai arccsc(x) adalah sudut θ itu sendiri.*/
//F.S: mengembalikan nilai arccsc

/*----------------------------------------------------------------*/
//I.S: definisikan fungsi arcsec
double arcsec (double x){
    double hasil;
    if (x > 1) {
        hasil = arccos(1.0 / x);
    } else if (x < -1) {
        hasil = PI - arccos(-1.0 / x);
    } else if (x < 1 && x > -1) {
        hasil = ERROR; // di luar jangkauan
    } else if (x == 1) {
        hasil = 0.0;
    } else if (x == -1) { 
        hasil = PI; //hasil arcsin menjadi Pi
    }
    return hasil;
}

//F.S: mengembalikan nilai arcsec

/*REFERENSI UNTUK INVERSE TRIGONOMETRI

1. https://byjus.com/maths/inverse-trigonometric-functions/
2. https://www.geeksforgeeks.org/inverse-trigonometric-identities/
3. Photomath

*/



//int main() {
//    char input[50], operator[10], nilai[10];
//    double x;
//    printf("Masukkan operasi invers trigonometri: ");
//    fgets(input, 50, stdin); 
//    sscanf(input, "%[^()] (%[^)])", operator, nilai); //pemisahan dari input
//    x = atof(nilai); //mengubah x agar bertipe double
//    double hasil;
//    if (strcmp(operator, "arcsin") == 0) {
//        hasil = arcsin(x);
//        printf("arcsin(%2.lf) = %lf\n", x, hasil);
//    } else if (strcmp(operator, "arctan") == 0) {
//        hasil = arctan(x);
//		printf("arctan(%2.lf) = %lf\n", x, hasil); 
//    } else if (strcmp(operator, "arccos") == 0) {
//        hasil = arccos(x);
//        printf("arccos(%2.lf) = %lf\n", x, hasil);  
//    } else if (strcmp(operator, "arccot") == 0) {
//        hasil = arccot(x);
//        printf("arccot(%2.lf) = %lf\n", x, hasil);
//    } else if (strcmp(operator, "arccsc") == 0) {
//        hasil = arccsc(x);
//        printf("arccsc(%2.lf) = %lf\n", x, hasil); 
//    } else if (strcmp(operator, "arcsec") == 0) {
//        hasil = arcsec(x);
//        printf("arcsec(%2.lf) = %lf\n", x, hasil); 
//	} else {
//		printf ("Operasi tidak valid\n");	
//	}
//	return 0;
//}

