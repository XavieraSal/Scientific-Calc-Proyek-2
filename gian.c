#include "gian.h"

double pow(double base, double exponent) {   //mengimplementasikan perpangkatan
	double result = 1.0;
	while (exponent > 0) {  //Loop ini akan menghitung perpangkatan dengan mengalikan base dengan dirinya sendiri sebanyak exponent kali
		result *= base;     //Mengalikan nilai result dengan base dan mengupdate nilai result
		exponent--;         //Mengurangi nilai exponent sebesar 1 setiap kali loop dieksekusi
	}
	return result;
}

double factorial(int n) {  //Menghitung faktorial
	double result = 1;	//Membuat variabel result dengan tipe data double dan menginisialisasinya dengan nilai 1
	for (int i = 1; i <= n; i++) {  //Memulai loop for yang akan berjalan dari 1 hingga n
		result *= i;  //Mengalikan nilai result dengan nilai i saat ini dan mengupdate nilai result dengan hasilnya
	}
	return result; //Mengembalikan nilai result setelah loop selesai dieksekusi. Nilai result akan berisi faktorial dari n.
}

//double to_radians(double sudut) {
//    return sudut *phi/180.00;			/*jika ingin mencari hasil trigonometri dalam derajat*/
//}

double sin(double x) {   //Fungsi ini akan menghitung sinus dari x 
	const double PI = 3.14159265358979323846;   //Mendeklarasikan nilai PI
	x = x - (int)(x / (2 * PI)) * 2 * PI;  //Mengatur nilai x ke dalam rentang antara 0 hingga 2π (dua kali nilai PI)
	double result = x;  //result akan menyimpan hasil perhitungan sinus.
	double term = x;   //Membuat variabel term dan menginisialisasinya dengan nilai x.
	int i;  //mendeklarasikan variabel i bertipe integer
	for (i = 1; i <= 15; i++) {  //Memulai loop for yang akan berjalan dari 1 hingga 15
		term = -term * x * x / (2 * i) / (2 * i + 1);  //Mengupdate nilai term dengan perhitungan suku deret Taylor berdasarkan formula aproksimasi sinus.
		result += term; //Menambahkan nilai term ke dalam result.
	}
	return result;
}

double cos(double x) {  //Fungsi ini akan menghitung kosinus dari x
	const double PI = 3.14159265358979323846;
	x = x - (int)(x / (2 * PI)) * 2 * PI; //Mengatur nilai x ke dalam rentang antara 0 hingga 2π (dua kali nilai PI)
	double result = 1;
	double term = 1;
	int i;
	for (i = 1; i <= 15; i++) { 
		term = -term * x * x / (2 * i - 1) / (2 * i);  //Mengupdate nilai term dengan perhitungan suku deret Taylor berdasarkan formula aproksimasi cosinus.
		result += term;
	}
	return result;
}

double tan(double x) {  //Fungsi ini akan menghitung tangen dari x
	return sin(x) / cos(x); //Fungsi ini mengembalikan hasil dari pembagian sin(x) dengan cos(x)
}							//Ini menghitung nilai tangen dari x dengan menggunakan fungsi sin dan cos

double cot(double x) {  //Fungsi ini akan menghitung cotan dari x
	return cos(x) / sin(x); //Fungsi ini mengembalikan hasil dari pembagian cos(x) dengan sin(x)
}							//Ini menghitung nilai cotan dari x dengan menggunakan fungsi cos dan sin

								
double csc(double x) {  //Fungsi ini akan menghitung cosecan dari x
	return 1 / sin(x);  //Fungsi ini mengembalikan hasil dari pembagian 1 dengan sin(x)
}						//ini menghitung nilai cosec dari x dengan menggunakan fungsi sin

double sec(double x) {  //Fungsi ini akan menghitung secan dari x
	return 1 / cos(x);  //Fungsi ini mengembalikan hasil dari pembagian 1 dengan cos(x)
}						//Ini menghitung nilai sekans dari x dengan menggunakan fungsi cos

double faktorial(double n) {  //Fungsi ini untuk menghitung faktorial
	double result = 1;    //Membuat variabel result dengan tipe data double dan menginisialisasinya dengan nilai 1
	for (int i = 2; i <= n; i++) {  //loop for yang akan berjalan dari 2 hingga n
		result *= i;  //Mengalikan nilai result dengan nilai i
	}
	return result;  //Mengembalikan nilai result
}

int main() {
	double x;  //Mendeklarasikan variabel x dengan tipe data double
	char operasi[10], tanda_kurung[2], sampai_kurung[100];  //Mendeklarasikan tiga array karakter:
	printf("Masukkan operasi trigonometri (sin(), cos(), tan(), cot(), csc(), secan(), !(): ");  //Menampilkan pesan kepada pengguna bagaimana cara menginput
	scanf("%[^(](%[^)])", operasi, sampai_kurung);  //Membaca input dari pengguna 
	if (strcmp(operasi,"sin") == 0) {  		//Memeriksa apakah string operasi sama dengan "sin"
		sscanf(sampai_kurung, "%lf", &x);   //Membaca nilai angka dari string sampai_kurung 
		printf("sin(%.2lf) = %.6lf\n", x, sin(x));  //Menampilkan hasil perhitungan sinus dari x 
	} 
	else if (strcmp(operasi, "cos") == 0) { //Memeriksa apakah string operasi sama dengan "cos"
		sscanf(sampai_kurung, "%lf", &x);
		printf("cos(%.2lf) =  %.6lf\n", x, cos(x));  //Menampilkan hasil perhitungan cos dari x
	}
	else if (strcmp(operasi,"tan") == 0) { //Memeriksa apakah string operasi sama dengan "tan"
		sscanf(sampai_kurung, "%lf", &x);
		printf("tan(%.2lf) = %.6lf\n", x, tan(x)); //Menampilkan hasil perhitungan tan dari x
	} 
	else if (strcmp(operasi, "cot") == 0) { //Memeriksa apakah string operasi sama dengan "cot"
		sscanf(sampai_kurung, "%lf", &x);
		printf("cot(%.2lf) = %.6lf\n", x, cot(x));  //Menampilkan hasil perhitungan cotan dari x
	} 
	else if (strcmp(operasi, "csc") == 0) { //Memeriksa apakah string operasi sama dengan "cosec"
		sscanf(sampai_kurung, "%lf", &x);
		printf("cosec(%.2lf) = %.6lf\n", x, csc(x)); //Menampilkan hasil perhitungan cosec dari x
	} 
	else if (strcmp(operasi,"secan" ) == 0) { //Memeriksa apakah string operasi sama dengan "secan"
		sscanf(sampai_kurung, "%lf", &x);
		printf("secan(%.2lf) = %.6lf\n", x, sec(x)); //Menampilkan hasil perhitungan secan dari x
	} 
	else if (strcmp(operasi, "!") == 0) { //Memeriksa apakah string operasi sama dengan faktorial "!"
		sscanf(sampai_kurung, "%lf", &x);
		double result = faktorial(x);
		printf("%.2lf! = %.4lf\n", x, result); //Menampilkan hasil perhitungan dari faktorial x
	} 
	else {
		printf("Operasi yang dimasukkan tidak valid.\n");
	}
	return 0;
}