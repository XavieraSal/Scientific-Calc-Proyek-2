#ifndef gian_h
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>
#define phi 3.14159265

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

int faktorial(int n) {
	int i, fact = 1;

    printf(" %d! = ", n);

    for (i = 1; i <= n; i++) {
        printf(" %d", i);
        if (i < n) {
            printf(" x ");
        }
        fact *= i;
    }

    printf(" = %d\n", fact);

    return fact;
}


#endif