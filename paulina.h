#ifndef paulina_h
#define paulina_h
#include <stdio.h>
#include <stdlib.h>

int pangkat(int x, int y);
double akarsemua(double x, double n);
int nilaimutlak(int angka);

void pilihan();
void perpangkatan();
void akar();
void mutlak();
void history(char* input[],double result, int panjang);
#endif

//void history() {
//    FILE *file;
//    int result;
//
//    // Buka file untuk ditulis (file akan dibuat jika belum ada)
//    file = fopen("history.txt", "w");
//
//    if (file == NULL) {
//        printf("Gagal membuka file.");
//        return 1;
//    }
//    // Tulis riwayat operasi ke file
//    fprintf(file, "Hasil: %d\n", result);
//
//    printf("Hasil: %d\n", result);
//    printf("Riwayat operasi telah disimpan dalam file 'history.txt'.\n");
//
//    fclose(file);
//}


