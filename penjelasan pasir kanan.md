#Penjelasan pasir kanan

oke so seperti biasa 
```bash
include <stdio.h>
```
yang diatas ini adalah libary nya kenapa wajib karena kan ini ngeinput

```bash
int main()
```
dari katanya aja "main" jadi itu adalah titik awal atau gerbang utama dari programnya, biar ditau dibaca darimana programnya. Kalau gak diisi kayak gitu ya programnya gak bisa jalan atau di eksekusi

```bash
  int n;
```
ini adalah varibelnya yang tipe datanya int, maksudnya tu kek menyimpan memorinya untuk menyimpan data yang akan dimasukan dan di proses


```bash
#include <stdio.h>
 int main() {
    int n;
        
    printf("masukan n: ");
    scanf("%d", &n);

    for (int baris = 0; baris < 2 * n - 1; baris++) {
        int geser;
        if (baris < n) {
            geser = baris;
        } else{
            geser = (2 * n - 2) - baris;
        }

        for (int kolom = 0; kolom < geser* 2; kolom++) {
            printf(" ");
        }

        for (int kolom = 0; kolom < n - geser; kolom++ ) {
            printf("* ");
        }

        printf("/n");
    }
    return 0;
 }
 ```
