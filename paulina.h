#ifndef paulina_h
#include <stdio.h>
#include <stdlib.h>

int pangkat(int x, int y);
double akarsemua(double x, double n);
int nilaimutlak(int angka);

void pilihan();
void perpangkatan();
void akar();
void mutlak();

#endif

void history() {
    FILE *file;
    char operator;
    int result;

    // Buka file untuk ditulis (file akan dibuat jika belum ada)
    file = fopen("history.txt", "w");

    if (file == NULL) {
        printf("Gagal membuka file.");
        return 1;
    }
    // Tulis riwayat operasi ke file
    fprintf(file, "Operator: %c\n", operator);
    fprintf(file, "Hasil: %d\n", result);

    printf("Hasil: %d\n", result);
    printf("Riwayat operasi telah disimpan dalam file 'history.txt'.\n");

    // Tutup file
    fclose(file);
}


