#include <stdio.h>
#define konstanta 10 

int main() {
    int matriks[10][10];
    int baris, kolom, i, j;
    
    printf("Masukkan jumlah baris (max %d): ");
    scanf("%d", &baris);
    printf("Masukkan jumlah kolom (max %d): ");
    scanf("%d", &kolom);
    
    if (baris > 10 || kolom > 10 || baris <= 0 || kolom <= 0) {
        printf("tidak valid(%d)!\n", 10);
        return 1;
    }

    printf("\nMasukkan elemen matriks:\n");
    for(i = 0; i < baris; i++) {
        for(j = 0; j < kolom; j++) {
            printf("Elemen [%d][%d]: ", i, j);
            scanf("%d", &matriks[i][j]);
        }
    }
    
    printf("\nMatriks yang Anda masukkan:\n");
    for(i = 0; i < baris; i++) {
        for(j = 0; j < kolom; j++) {
            printf("%d \t", matriks[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
