#Penjelasan pasir kanan

oke so seperti biasa 
```bash
include <stdio.h>
```
yang diatas ini adalah libary nya kenapa wajib karena kan ini ngeinput.

```bash
int main() {
```
dari katanya aja "main" jadi itu adalah titik awal atau gerbang utama dari programnya, biar ditau dibaca darimana programnya. Kalau gak diisi kayak gitu ya programnya gak bisa jalan atau di eksekusi.

```bash
  int n;
```
ini adalah varibelnya yang tipe datanya int, maksudnya tu kek menyimpan memorinya untuk menyimpan data yang akan dimasukan dan di proses.

```bash
printf("masukan n: ");
```
ini tu buat ngeluarin teks yang harus dimasukan oleh user, kalau gak diisi ya bakal kosong layarnya dan user bingung program sedang mengunggu input atau crash.

```bash
scanf(%d, &n);
```
biar bisa menangkap apa yang diketik oleh user. 
"%d" = kode format integer
&n = alamat memori variabel yang udah dibuat sebelumnya diatas

```bash
for (int baris = 0; baris < 2 * n - 1; baris++) {
```
Perulangan (looping) untuk mengontrol perpindahan baris dari atas ke bawah.

```bash
if (baris < n) { geser = baris; }
```
untuk bagian setengah atas pola (dari baris pertama sampai baris tengah). Nilai variabel geser akan terus bertambah naik mengikuti nomor baris (misal: 0, 1, 2).

```bash
else { geser = (2 * n - 2) - baris; }
```
Logika untuk bagian setengah bawah pola (setelah melewati baris tengah). Membalikkan hitungan agar nilai geser yang tadinya sudah di puncak, perlahan turun kembali ke angka kecil (misal: 1, lalu 0) sehingga polanya simetris.

```bash
for (int kolom = 0; kolom < geser * 2; kolom++)
```
Perulangan kolom untuk mencetak spasi sebanyak dua kali lipat dari nilai geser. Mengatur seberapa jauh teks atau karakter utama akan terdorong/menjorok ke kanan pada baris tersebut. Karena dikali 2, pergeserannya akan terlihat lebih lebar dan rapi.

```bash
printf(" ");
```
Perintah cetak spasi ke layar. Mengisi ruang kosong di layar agar karakter berikutnya bergeser ke kanan, membentuk efek lekukan atau kemiringan pada pola.

```bash
for (int kolom = 0; kolom < n - geser; kolom++)
```
Perulangan untuk menentukan berapa banyak bintang yang dicetak pada baris tersebut. Rumus ``n - geser`` membuat jumlah bintang makin sedikit di tengah, tapi makin banyak di atas dan bawah. Jika n = 3, jumlah bintang tiap barisnya akan berpola: 3, 2, 1, 2, 3.

```bash
printf("* ");
```
Perintah untuk mencetak sebuah bintang diikuti satu spasi. Karakter untuk membentuk wujud visual dari pola yang sedang dibuat.

```bash
printf("\n");
```
Karakter ``\n`` *(newline)* adalah perintah khusus dalam bahasa C untuk memindahkan kursor cetak ke baris di bawahnya. Wajib ditulis di akhir setiap perulangan baris, Tanpa baris ini, semua spasi dan bintang dari baris berikutnya akan tercetak memanjang ke samping kanan, sehingga pola jam pasirnya tidak akan terbentuk.

```bash
return 0;
```
standar internasional yang memberi tahu sistem operasi bahwa program telah berjalan dengan sukses dan selesai tanpa ada error. Jika program mengalami masalah di tengah jalan, ia biasanya akan mengembalikan angka selain 0.

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
