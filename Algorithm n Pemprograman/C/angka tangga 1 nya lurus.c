#include <stdio.h>

int main() {
    int n;
    printf("Masukkan angka: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        for (int s = 1; s <= (n - i); s++) {
            printf("  "); 
        }

        for (int j = i; j >= 1; j--) {
            printf("%d ", j);
        }
        
        printf("\n");
    }

    return 0;
}


//n: Batas maksimal / jumlah total baris.
//i: Penanda nomor baris yang sedang berjalan.
//s: Pencetak spasi kosong untuk meratakan posisi ke kanan.
//j: Pencetak angka mundur dari besar ke kecil (i turun ke 1).
