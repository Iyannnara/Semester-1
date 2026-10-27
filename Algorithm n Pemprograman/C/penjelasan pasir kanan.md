# Penjelasan pasir kanan
---

### 1. `#include <stdio.h>` (Prapemrosesan / Header File)
* **Jenis:** *Preprocessor Directive* (`#include`)
* **Fungsi Detail:** Baris ini bukan fungsi eksekusi, melainkan perintah kepada kompiler C untuk menyertakan pustaka **Standard Input/Output (`stdio.h`)** sebelum program dikompilasi. Pustaka ini wajib ada agar program kita bisa mengenali dan menjalankan fungsi-fungsi dasar untuk menampilkan teks ke layar (`printf`) dan membaca masukan dari keyboard (`scanf`).

---

### 2. `int main()` (Fungsi Utama Program)
* **Jenis:** Fungsi Utama (*Main Function*)
* **Fungsi Detail:**
  * Ini adalah **titik awal (*entry point*)** dari seluruh program C. Komputer akan selalu mencari fungsi `main()` ini untuk pertama kali saat program dijalankan.
  * Kata `int` di depan `main` menunjukkan bahwa fungsi ini akan mengembalikan nilai bertipe bilangan bulat (*integer*) ke sistem operasi saat program selesai.

---

### 3. `int n;` (Deklarasi Variabel)
* **Jenis:** Deklarasi Variabel
* **Fungsi Detail:** Berfungsi untuk memesan ruang di dalam memori komputer dengan tipe data **integer (bilangan bulat)** yang diberi nama `n`. Variabel ini digunakan untuk menyimpan nilai ukuran pola yang nanti diinput oleh pengguna.

---

### 4. `printf("masukan n: ");` (Fungsi Output / Menampilkan Teks)
* **Jenis:** Fungsi Bawaan Pustaka (`<stdio.h>`)
* **Fungsi Detail:** Berfungsi untuk mencetak teks literal ke layar konsol (terminal). Pada baris ini, teks `"masukan n: "` dicetak agar pengguna tahu bahwa mereka harus mengetikkan sebuah angka.

---

### 5. `scanf("%d", &n);` (Fungsi Input / Membaca Masukan)
* **Jenis:** Fungsi Bawaan Pustaka (`<stdio.h>`)
* **Fungsi Detail:**
  * Berfungsi untuk membaca data yang diketik oleh pengguna melalui keyboard.
  * `%d` adalah *format specifier* yang memberitahu program bahwa data yang dimasukkan harus berupa bilangan bulat desimal (*decimal integer*).
  * `&n` (`&` adalah operator *address-of*) berfungsi untuk menunjukkan alamat memori dari variabel `n`, sehingga angka yang diketik pengguna bisa disimpan langsung ke dalam kotak memori variabel `n`.

---

### 6. `for (int baris = 0; baris < 2 * n - 1; baris++)` (Perulangan Utama / Baris)
* **Jenis:** Perulangan (*Looping* - `for`)
* **Fungsi Detail:**
  * Berfungsi untuk mengatur **jumlah baris vertikal** yang akan dicetak ke bawah.
  * Perulangan ini dimulai dari `baris = 0` dan akan terus berulang selama nilai `baris` kurang dari $2n - 1$.
  * Contoh: Jika $n = 3$, maka perulangan ini akan berjalan sebanyak $2(3) - 1 = 5$ kali (yaitu untuk baris ke-0, 1, 2, 3, dan 4).

---

### 7. Percabangan `if (baris < n) ... else ...` (Logika Penentuan Titik Tengah)
* **Jenis:** Struktur Percabangan (*Conditional Branching*)
* **Fungsi Detail:**
  * **Bagian `if (baris < n)` (Atas):** Jika nomor baris masih berada di atas atau tepat di titik tengah $n$, maka variabel `geser` diatur sama dengan `baris`. Ini membuat spasi bertambah secara bertahap (pola menyempit).
  * **Bagian `else` (Bawah):** Jika nomor baris sudah melewati titik tengah, program masuk ke blok ini. Rumus `(2 * n - 2) - baris` dijalankan untuk membalikkan perhitungan, membuat nilai `geser` mengecil kembali secara simetris (pola melebar kembali).

---

### 8. `for (int kolom = 0; kolom < geser * 2; kolom++)` (Perulangan Spasi)
* **Jenis:** Perulangan di dalam perulangan (*Nested Loop*)
* **Fungsi Detail:**
  * Berfungsi untuk mencetak **karakter spasi kosong** di awal setiap baris.
  * Jumlah spasi yang dicetak bergantung pada hasil perhitungan `geser * 2`. Dikalikan 2 karena satu karakter spasi di terminal ukurannya sangat kecil, sehingga butuh kelipatan ganda agar sejajar dengan lebar karakter bintang (`* ` yang membawa satu spasi di belakangnya).

---

### 9. `printf(" ");` (Fungsi Cetak Spasi)
* **Jenis:** Fungsi Output (`printf`)
* **Fungsi Detail:** Berfungsi untuk benar-benar menuliskan karakter spasi (`" "`) ke layar satu per satu sebanyak hasil dari perulangan spasi di atas.

---

### 10. `for (int kolom = 0; kolom < n - geser; kolom++)` (Perulangan Bintang)
* **Jenis:** Perulangan di dalam perulangan (*Nested Loop*)
* **Fungsi Detail:**
  * Berfungsi untuk mengatur **jumlah karakter bintang** yang dicetak pada baris tersebut setelah spasi selesai dicetak.
  * Jumlah bintang dihitung dengan rumus $n - \text{geser}$. Semakin besar nilai `geser` (di bagian tengah), semakin sedikit bintang yang dicetak. Sebaliknya, semakin kecil nilai `geser` (di bagian atas/bawah), semakin banyak bintang yang dicetak.

---

### 11. `printf("* ");` (Fungsi Cetak Bintang)
* **Jenis:** Fungsi Output (`printf`)
* **Fungsi Detail:** Berfungsi untuk mencetak karakter bintang diikuti satu spasi (`"* "`) ke layar secara berulang sesuai instruksi dari perulangan bintang di atas.

---

### 12. `printf("\n");` (Fungsi Baris Baru / Newline)
* **Jenis:** Fungsi Output dengan *Escape Sequence* (`\n`)
* **Fungsi Detail:**
  * Berfungsi untuk memindahkan kursor pengetikan ke **baris baru di bawahnya**.
  * Perintah ini dieksekusi tepat setelah satu baris pola (spasi dan bintang) selesai dicetak secara lengkap, agar baris berikutnya tidak bercampur di baris yang sama.

---

### 13. `return 0;` (Fungsi Pengembalian Nilai Selesai)
* **Jenis:** Pernyataan Pengembalian (*Return Statement*)
* **Fungsi Detail:**
  * Berfungsi untuk menghentikan fungsi `main()` dan mengembalikan nilai `0` ke sistem operasi.
  * Angka `0` ini adalah kode standar internasional dalam pemrograman C yang menandakan bahwa **program telah berjalan sukses tanpa ada error**.
---
# note:
- () Kurung Biasa: Digunakan untuk memanggil/membuat fungsi (contoh: printf(), main()), membungkus kondisi kontrol (contoh: if (x > 5)), dan mengatur prioritas matematika.
- {} Kurung Kurawal: Digunakan untuk membungkus blok kode atau tubuh (body) dari fungsi, percabangan if, atau perulangan for/while.
- [] Kurung Siku: Digunakan untuk membuat dan mengakses Array (daftar data) serta menentukan ukuran kapasitasnya.
- ; semicolon atau titik koma :pemberhentian atau akhir dari sebuah instruksi (statement) selesai. Tanda ; tidak ditaruh setelah judul fungsi atau struktur kontrol seperti if, for, while sebelum blok {}
  
# codingan lengkapnya
```bash
#include <stdio.h>
 int main() {
    int n;
        
    printf("masukan n: ");
    scanf("%d", &n);

    for (int baris = 0; baris < 2 * n - 1; baris++) { //looping
        int geser;
        if (baris < n) {  //bagian atas pola
            geser = baris;
        } else{  //bagian bawah pola
            geser = (2 * n - 2) - baris;
        }

        for (int kolom = 0; kolom < geser* 2; kolom++) { //spasi di kiri
            printf(" ");
        }

        for (int kolom = 0; kolom < n - geser; kolom++ ) { //cetak bintang
            printf("* ");
        }

        printf("/n");
    }
    return 0;
 }
 ```
