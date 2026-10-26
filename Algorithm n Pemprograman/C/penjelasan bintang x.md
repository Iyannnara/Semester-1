1. Header dan Fungsi Utama (main)
C
#include <stdio.h>

int main() {
    int nilaiInput, ukuranGrid;
    int baris, kolom;
#include <stdio.h>: Merupakan pustaka standar (standard input-output library) di C yang wajib disertakan agar kita bisa menggunakan fungsi printf (untuk menampilkan teks/output) dan scanf (untuk menerima input dari pengguna).
int main(): Titik awal eksekusi program C. Semua program C akan mulai berjalan dari dalam fungsi main.
Deklarasi Variabel:
nilaiInput: Menyimpan angka yang dimasukkan oleh pengguna.
ukuranGrid: Menyimpan ukuran total dimensi grid (panjang dan lebar kotak).
baris & kolom: Digunakan sebagai variabel penghitung (iterator) untuk perulangan bersarang (nested loop).
2. Meminta Input dari Pengguna
C
    // 1. Meminta input dari pengguna
    printf("Masukkan angka = ");
    scanf("%d", &nilaiInput);
printf: Menampilkan teks "Masukkan angka = " ke layar agar pengguna tahu apa yang harus diketik.
scanf("%d", &nilaiInput): Membaca angka berjenis integer (%d) yang diketik oleh pengguna melalui keyboard, lalu menyimpannya ke dalam variabel nilaiInput.
3. Menghitung Ukuran Grid
C
    // 2. Menghitung ukuran grid (harus ganjil agar titik tengahnya pas)
    ukuranGrid = 2 * nilaiInput - 1;
Rumus 2 * nilaiInput - 1 digunakan untuk memastikan ukuran grid selalu berupa bilangan ganjil (misal: jika input 3, grid menjadi 2(3)−1=5).
Angka ganjil diperlukan agar pola huruf 'X' memiliki satu titik pusat yang presisi dan simetris di tengah-tengah grid.
4. Perulangan Bersarang (Nested Loop) untuk Grid
C
    // 3. Perulangan untuk menjelajahi setiap kotak pada grid
    for (baris = 0; baris < ukuranGrid; baris++) {
        for (kolom = 0; kolom < ukuranGrid; kolom++) {
Perulangan Luar (baris): Mengatur pergerakan dari baris paling atas ke baris paling bawah.
Perulangan Dalam (kolom): Mengatur pergerakan dari kolom paling kiri ke kolom paling kanan untuk setiap baris yang sedang aktif.
Konsep ini membentuk koordinat matriks 2 dimensi (baris, kolom) layaknya tabel koordinat matematika.
5. Logika Pembentukan Huruf 'X' (Bagian Inti)
C
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
Program memeriksa setiap koordinat (baris, kolom) apakah berada di jalur silang 'X' dengan dua kondisi utama:
diagonalUtama = (baris == kolom):
Ini adalah kondisi untuk membentuk garis diagonal dari kiri-atas ke kanan-bawah.
Contoh pada koordinat: (0,0), (1,1), (2,2), dst., di mana nomor baris selalu sama persis dengan nomor kolom.
diagonalSekunder = (baris + kolom == ukuranGrid - 1):
Ini adalah kondisi untuk membentuk garis diagonal dari kanan-atas ke kiri-bawah.
Contoh pada grid ukuran 5 (indeks 0 sampai 4): titik seperti (0,4), (1,3), (2,2), (3,1), (4,0) jika dijumlahkan nilainya selalu sama dengan 4 (yaitu ukuranGrid - 1).
Pernyataan if (diagonalUtama || diagonalSekunder):
Jika posisi (baris, kolom) memenuhi salah satu dari kedua diagonal tersebut (operator OR ||), maka program mencetak bintang (*).
Jika tidak memenuhi keduanya, program mencetak spasi ( ) untuk mengisi area kosong di sekitar huruf 'X'.
6. Pindah Baris dan Akhir Program
C
        }
        // Pindah ke baris baru setelah satu baris penuh selesai diproses
        printf("\n");
    }

    return 0;
}
printf("\n");: Dijalankan setiap kali perulangan kolom selesai dalam satu baris, berfungsi untuk turun ke baris berikutnya di terminal.
return 0;: Menandakan bahwa program telah berjalan dengan sukses dan selesai tanpa ada kendala.
💡 Contoh Simulasi (Jika nilaiInput = 3)
ukuranGrid = 2 * 3 - 1 = 5 (Artinya grid berukuran 5x5).
Program akan mencetak grid dengan pola berikut di terminal:
Plaintext
*   *
 * * 
  *  
 * * 
*   *
Titik * muncul di koordinat diagonal utama dan sekunder, sementara area sisanya diisi dengan spasi kosong sehingga membentuk huruf X.
