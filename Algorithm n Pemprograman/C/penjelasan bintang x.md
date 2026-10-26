# Bikin Pola Huruf 'X' di C? Gampang Banget! 🚀

Pernah penasaran gimana caranya bikin huruf **'X'** pake bintang-bintang (`*`) di terminal C? Di sini kita bakal bedah kodenya dengan gaya santai biar gampang dipahami.

---

## 🛠️ Kode Lengkapnya dulu, Nih!

```c
#include <stdio.h>

int main() {
    int nilaiInput, ukuranGrid;
    int baris, kolom;

    // 1. Minta angka dari user
    printf("Masukkan angka = ");
    scanf("%d", &nilaiInput);

    // 2. Hitung ukuran grid (wajib ganjil biar punya titik tengah)
    ukuranGrid = 2 * nilaiInput - 1;

    // 3. Perulangan untuk jalan-jalan di grid (koordinat 2D)
    for (baris = 0; baris < ukuranGrid; baris++) {
        for (kolom = 0; kolom < ukuranGrid; kolom++) {

            // 4. Logika penentu: Kapan cetak bintang (*)?
            int diagonalUtama = (baris == kolom);
            int diagonalSekunder = (baris + kolom == ukuranGrid - 1);

            if (diagonalUtama || diagonalSekunder) {
                printf("*"); // Pas di jalur silang, cetak bintang
            } else {
                printf(" "); // Di luar jalur silang, kasih spasi
            }
        }
        // Kelar satu baris, ganti baris baru
        printf("\n");
    }

    return 0;
}
```

---

## 🔍 Bedah Kode Biar Nggak Pusing

### 1. Pondasi Awal (Header & Variabel)
- `#include <stdio.h>`  
  Ini ibarat **kotak perkakas**. Wajib dibawa supaya fungsi pencetak `printf` dan penerima input `scanf` bisa dipakai.
- `int main()`  
  Pintu masuk utama program. Semua aksi dimulai dari sini.
- **Variabel:**
  - `nilaiInput`: Menyimpan angka yang dimasukkan pengguna.
  - `ukuranGrid`: Luas papan/grid tempat huruf 'X' digambar.
  - `baris` & `kolom`: Petunjuk posisi (koordinat) saat program menggambar.

---

### 2. Minta Input Pengguna
```c
printf("Masukkan angka = ");
scanf("%d", &nilaiInput);
```
Simpelnya, program menyapa pengguna: *"Hei, mau bikin X sebesar apa?"* Lalu simpan jawaban itu di `nilaiInput`.

---

### 3. Trik Rahasia: Menghitung Ukuran Grid

$$ukuranGrid = 2 \times nilaiInput - 1$$

Kenapa harus pakai rumus $2n - 1$?  
Biar ukurannya **selalu ganjil**! Coba bayangkan:
- Kalau input $= 3$, ukuran grid $= 2(3) - 1 = 5$ (Grid $5 \times 5$).
- Kalau ukurannya genap, huruf 'X' nggak bakal punya **satu titik pusat di tengah**. Nanti silangannya penyok! 📐

---

### 4. Jalan-jalan di Grid (*Nested Loop*)
Gaya perulangannya mirip seperti mencoret-coret buku kotak-kotak matematika:
- **Loop Luar (`baris`)**: Pindah dari atas ke bawah.
- **Loop Dalam (`kolom`)**: Jalan dari kiri ke kanan untuk setiap baris.

---

### 5. Otak Program: Gimana Bintang (`*`) Bisa Membentuk 'X'?

Di setiap kotak $(baris, kolom)$, program bakal nanya:  
*"Sesuai syarat bikin garis silang nggak?"*

1. **Diagonal Utama (Miring Kiri ke Kanan):**
   $$baris == kolom$$
   Titiknya ada di koordinat $(0,0), (1,1), (2,2)$, dan seterusnya. Angka baris dan kolomnya kembar!

2. **Diagonal Sekunder (Miring Kanan ke Kiri):**
   $$baris + kolom == ukuranGrid - 1$$
   Misal pada grid ukuran $5$ (indeks $0$ sampai $4$), koordinatnya adalah $(0,4), (1,3), (2,2), (3,1), (4,0)$. Jika dijumlahkan, hasilnya selalu $4$!

3. **Keputusan (`if - else`):**
   Kalau posisi sekarang masuk ke salah satu diagonal tadi (`||`), cetak `*`. Kalau bukan, biarkan kosong dengan mencetak spasi `" "`.

---

### 6. Pindah Baris dan Selesai!
- `printf("\n");`  
  Kalau titik-titik dalam satu baris sudah selesai digambar dari kiri ke kanan, saatnya tekan *Enter* untuk turun ke baris berikutnya.
- `return 0;`  
  Tanda bahwa program selesai menjalankan tugasnya dengan sukses! 🎉

---

## ☕ Simulasi Singkat (Input = 3)

Grid otomatis dibuat berukuran $5 \times 5$, dan hasilnya di terminal bakal seperti ini:

```text
*   *
 * * 
  *  
 * * 
*   *
```

Simetris, rapi, dan membentuk huruf **X** yang presisi di tengah-tengah!
