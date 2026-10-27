#include <stdio.h>

int main() {
    int n; // Ukuran tinggi setengah bintang pasir

    printf("Masukkan nilai = ");
    scanf("%d", &n);

    // Validasi input
    if (n < 1) {
        printf("Mohon maaf, nilai harus diatas 0!\n");
        return 0;
    }

    // Perulangan untuk setiap baris (dari baris ke-0 sampai baris maksimum)
    // Total baris adalah (2 * n - 1)
    for (int baris = 0; baris < 2 * n - 1; baris++) {
        
        int geser; // Variabel untuk menentukan jumlah spasi (menjorok ke kanan)

        // Mengganti operator ternary dengan if-else biasa agar mudah dijelaskan
        if (baris < n) {
            geser = baris; // Setengah bagian atas: makin ke bawah makin bergeser ke kanan
        } else {
            geser = (2 * n - 2) - baris; // Setengah bagian bawah: makin ke bawah makin kembali ke kiri
        }

        // 1. Mencetak spasi untuk efek menjorok ke kanan
        for (int kolom = 0; kolom < geser * 2; kolom++) {
            printf(" ");
        }

        // 2. Mencetak bintang dan spasi antar bintang
        for (int kolom = 0; kolom < n - geser; kolom++) {
            printf("* ");
        }

        // 3. Pindah ke baris baru
        printf("\n");
    }

    return 0;
}