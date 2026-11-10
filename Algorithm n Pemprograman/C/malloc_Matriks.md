#include <stdio.h>
#include <stdlib.h>

int main() {
    int baris, kolom;
    printf("Masukkan baris: ");
    scanf("%d", &baris);
    printf("Masukkan kolom: ");
    scanf("%d", &kolom);

    int **matriks = (int **)malloc(baris * sizeof(int *));

    for (int i = 0; i < baris; i++) {
        matriks[i] = (int *)malloc(kolom * sizeof(int));
    }

    printf("\nMasukkan angka matriks ukuran %dx%d:\n", baris, kolom);
    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            printf("Data [%d][%d]: ", i, j);
            scanf("%d", &matriks[i][j]);
        }
    }

    printf("\nMatriks Berukuran %dx%d:\n", baris, kolom);
    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            printf("%d \t", matriks[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < baris; i++) {
        free(matriks[i]); 
    }
    free(matriks); 

    return 0;
}
