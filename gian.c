#include "gian.h"

double pow(double base, double exponent) {
    double result = 1.0;
    while (exponent > 0) {
        result *= base;
        exponent--;
    }
    return result;
}

double factorial(int n) {
    double result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

//double to_radians(double sudut) {
//    return sudut *phi/180.00;
//}

double sin(double x) {
    const double PI = 3.14159265358979323846;
    x = x - (int)(x / (2 * PI)) * 2 * PI; // convert x to the range [-2*PI, 2*PI]
    double result = x;
    double term = x;
    int i;
    for (i = 1; i <= 15; i++) {
        term = -term * x * x / (2 * i) / (2 * i + 1);
        result += term;
    }
    return result;
}

double cos(double x) {
    const double PI = 3.14159265358979323846;
    x = x - (int)(x / (2 * PI)) * 2 * PI; // convert x to the range [-2*PI, 2*PI]
    double result = 1;
    double term = 1;
    int i;
    for (i = 1; i <= 15; i++) {
        term = -term * x * x / (2 * i - 1) / (2 * i);
        result += term;
    }
    return result;
}

double tan(double x) {
    return sin(x) / cos(x);
}

double cot(double x) { 
    return cos(x) / sin(x);
}

double csc(double x) {
    return 1 / sin(x);
}

double sec(double x) {
    return 1 / cos(x);
}

double faktorial(double n) {
    double result = 1;
    for (int i = 2; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main() {
    double x;
    char operasi[10], tanda_kurung[2], sampai_kurung[100];
    printf("Masukkan operasi trigonometri (sin(), cos(), tan(), cot(), csc(), secan(), !(): ");
    scanf("%[^(](%[^)])", operasi, sampai_kurung);
    if (strcmp(operasi,"sin") == 0) {
        sscanf(sampai_kurung, "%lf", &x);
        printf("sin(%.2lf) = %.2lf\n", x, sin(x));
    } else if (strcmp(operasi, "cos") == 0) {
        sscanf(sampai_kurung, "%lf", &x);
        printf("cos(%.2lf) =  %.2lf\n", x, cos(x));
    } else if (strcmp(operasi,"tan") == 0) {
        sscanf(sampai_kurung, "%lf", &x);
        printf("tan(%.2lf) = %.2lf\n", x, tan(x));
    } else if (strcmp(operasi, "cot") == 0) {
        sscanf(sampai_kurung, "%lf", &x);
        printf("cot(%.2lf) = %lf\n", x, cot(x));
    } else if (strcmp(operasi, "csc") == 0) {
        sscanf(sampai_kurung, "%lf", &x);
        printf("cosec(%.2lf) = %.2lf\n", x, csc(x));
	} else if (strcmp(operasi,"secan" ) == 0) {
        sscanf(sampai_kurung, "%lf", &x);
        printf("secan(%.2lf) = %.2lf\n", x, sec(x));
    } else if (strcmp(operasi, "!") == 0) {
        sscanf(sampai_kurung, "%lf", &x);
        double result = faktorial(x);
        printf("%.2lf! = %.2lf\n", x, result);
	} else {
        printf("Operasi yang dimasukkan tidak valid.\n");
    }
    return 0;
}