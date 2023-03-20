#ifndef gian_h
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>
//#define phi 3.14159265

<<<<<<< HEAD
double result, x;
int n, i;
double pow(double base, double exponent);
double factorial(int n);
double to_radians(double derajat);
double sin(double x);
double cos(double x);
double tan(double x);
double cot(double x);
double csc(double x);
double sec(double x);
double faktorial(double n);
int main();
=======
double hasil, radian;

double trigonometri(char operation[], char a[]) {
    radian = atof(a)*phi/ 180.0;
    if (strcmp(operation, "sin") == 0) {  //operasi sin
        hasil = sin(radian);
        
    } else if (strcmp(operation, "cos") == 0) { //operasi cos
        hasil = cos(radian);
        
	} else if (strcmp(operation, "tan") == 0) {  //operasi tan
		hasil = tan(radian);
		
	} else if (strcmp(operation, "cosec" ) == 0) {  //operasi cosec
		hasil = 1/sin(radian);
		
	} else if (strcmp(operation, "secan") == 0) {  //operasi secan
		hasil = 1/cos(radian);
		
	} else if (strcmp(operation, "cotan") == 0) {  //operasi cotan
		hasil = 1/tan(radian);
	}
     else {
        printf("Invalid operation\n");
    }
    return hasil;
}

double faktorial(double n) {
	int i, fact = 1;



    for (i = 1; i <= n; i++) {

       
        fact *= i;
    }



    return fact;
}

>>>>>>> 1d0e710592f9909c8e1077514988c0dc94eb1643

#endif
