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
    const int n = 10;
    double result = 0.0;
//    x = to_radians(x);
    for (int i = 0; i <= n; i++) {
        double sign = i % 2 == 0 ? 1.0 : -1.0;
        double numerator = pow(x, 2 * i + 1);
        double denominator = factorial(2 * i + 1);
        result += sign * numerator / denominator;
        
    }
    return result;
}

double cos(double x) {
    const int n = 10;
    double result = 0.0;
//    x = to_radians(x);
    for (int i = 0; i <= n; i++) {
        double sign = i % 2 == 0 ? 1.0 : -1.0;
        double numerator = pow(x, 2 * i);
        double denominator = factorial(2 * i);
        result += sign * numerator / denominator;
    }
    return result;
}

double tan(double x) {
    double sin_x = sin(x);
    double cos_x = cos(x);
    return sin_x / cos_x;
}

double cot(double x) {
    double tan_x = tan(x);
    return 1.0 / tan_x;
}

double csc(double x) {
    double sin_x = sin(x);
    return 1.0 / sin_x;
}

double sec(double x) {
    double cos_x = cos(x);
    return 1.0 / cos_x;
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