#include <stdio.h>

int main() {
    int nilaiInput, ukuranGrid;
    int baris, kolom;

    // 1. Meminta input dari pengguna
    printf("Masukkan angka = ");
    scanf("%d", &nilaiInput);

    // 2. Menghitung ukuran grid (harus ganjil agar titik tengahnya pas)
    ukuranGrid = 2 * nilaiInput - 1;

    // 3. Perulangan untuk menjelajahi setiap kotak pada grid
    for (baris = 0; baris < ukuranGrid; baris++) {
        for (kolom = 0; kolom < ukuranGrid; kolom++) {
            
            // 4. Syarat mencetak bintang (*) membentuk huruf 'X':
            //    - baris == kolom          : Garis diagonal dari kiri-atas ke kanan-bawah
            //    - baris + kolom == ukuranGrid - 1 : Garis diagonal dari kanan-atas ke kiri-bawah
            int diagonalUtama = (baris == kolom);
            int diagonalSekunder = (baris + kolom == ukuranGrid - 1);

            if (diagonalUtama || diagonalSekunder) {
                printf("*"); // Cetak bintang di jalur silang
            } else {
                printf(" "); // Cetak spasi di luar jalur silang
            }
        }
        // Pindah ke baris baru setelah satu baris penuh selesai diproses
        printf("\n");
    }

    return 0;
}