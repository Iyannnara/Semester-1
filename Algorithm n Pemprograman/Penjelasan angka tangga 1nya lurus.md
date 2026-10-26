# Penjelasan Kode Program C: Pola Angka Rata Kanan

Dokumen ini berisi penjelasan detail mengenai struktur, alur kerja, dan logika matematika di balik kode program C yang mencetak pola angka rata kanan secara menurun.

---

## 1. Kode Program Utama

Berikut adalah kode C yang digunakan:

```c
#include <stdio.h>

int main() {
    int n;
    printf("Masukkan angka: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        // Perulangan 1: Mencetak spasi
        for (int s = 1; s <= (n - i); s++) {
            printf("  "); 
        }

        // Perulangan 2: Mencetak angka mundur
        for (int j = i; j >= 1; j--) {
            printf("%d ", j);
        }
        
        // Pindah baris
        printf("\n");
    }

    return 0;
}
```

---

## 2. Deskripsi Variabel

*   **`n`**: Menampung nilai input dari pengguna yang menentukan jumlah total baris/batas maksimal pola.
*   **`i`**: Variabel penghitung (*counter*) untuk **loop luar** yang menunjukkan baris yang sedang diproses (berjalan dari $1$ hingga $n$).
*   **`s`**: Variabel penghitung untuk **loop spasi** yang mengatur jumlah spasi kosong agar pola terdorong ke sebelah kanan.
*   **`j`**: Variabel penghitung untuk **loop angka** yang mencetak angka secara menurun dari nilai baris $i$ hingga angka $1$.

---

## 3. Logika & Alur Kerja Perulangan (*Nested Loop*)

Program menggunakan tiga tingkat perulangan (perulangan utama dan dua perulangan di dalamnya):

### A. Perulangan Utama (`for (int i = 1; i <= n; i++)`)
Perulangan ini menentukan baris mana yang sedang dibuat. 
* Pada baris ke-$i$, program akan menyelesaikan cetakan spasi dan angka, lalu mencetak `\n` (pindah baris).

### B. Perulangan Spasi (`for (int s = 1; s <= (n - i); s++)`)
Untuk membuat tampilan rata kanan, jumlah spasi yang dicetak berkurang seiring bertambahnya baris:
* Jumlah spasi pada baris ke-$i$ adalah sebanyak $(n - i)$ kali dua spasi.
* **Contoh** ($n = 4$):
  * Baris $i = 1$: Mencetak $4 - 1 = 3$ pasang spasi.
  * Baris $i = 2$: Mencetak $4 - 2 = 2$ pasang spasi.
  * Baris $i = 4$: Mencetak $4 - 4 = 0$ spasi.

### C. Perulangan Angka (`for (int j = i; j >= 1; j--)`)
Setelah spasi dicetak, perulangan ini mencetak deret angka menurun:
* Dimulai dari angka baris saat ini ($j = i$) dan terus berkurang hingga $j = 1$.
* **Contoh**:
  * Baris $i = 1$: Mencetak `1`
  * Baris $i = 3$: Mencetak `3 2 1`

---

## 4. Simulasi Output (Keluaran Program)

Jika pengguna memasukkan angka **`n = 4`**, berikut adalah simulasi proses per baris:

1. **Baris 1 ($i = 1$):**
   * Spasi: $(4 - 1) = 3$ kali `  `
   * Angka: $j = 1$ $\rightarrow$ mencetak `1 `
   * Hasil: `      1`

2. **Baris 2 ($i = 2$):**
   * Spasi: $(4 - 2) = 2$ kali `  `
   * Angka: $j = 2, 1$ $\rightarrow$ mencetak `2 1 `
   * Hasil: `    2 1`

3. **Baris 3 ($i = 3$):**
   * Spasi: $(4 - 3) = 1$ kali `  `
   * Angka: $j = 3, 2, 1$ $\rightarrow$ mencetak `3 2 1 `
   * Hasil: `  3 2 1`

4. **Baris 4 ($i = 4$):**
   * Spasi: $(4 - 4) = 0$ kali
   * Angka: $j = 4, 3, 2, 1$ $\rightarrow$ mencetak `4 3 2 1 `
   * Hasil: `4 3 2 1`

### Tampilan Akhir di Terminal:
```text
      1
    2 1
  3 2 1
4 3 2 1
```
