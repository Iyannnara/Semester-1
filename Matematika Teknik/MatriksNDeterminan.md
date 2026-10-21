# Penyelesaian Lengkap Soal Aljabar Linier

---

## Soal 3 — Determinan dan Invers Matriks

### **Isi Soal**
Diberikan matriks:
$$A = \begin{bmatrix} 2 & 1 & 0 \\ 1 & 2 & 1 \\ 0 & 1 & 2 \end{bmatrix}$$

a. Hitung $\det(A)$.  
b. Berdasarkan hasil pada bagian (a), tentukan apakah $A^{-1}$ ada. Jelaskan alasan Anda.  
c. Tentukan $A^{-1}$.  
d. Buktikan hasil invers Anda benar.

---

### **Rumus yang Digunakan**

1. **Determinan Matriks $3 \times 3$ (Ekspansi Kofaktor / Sarrus):**
   $$\det(A) = a_{11}(a_{22}a_{33} - a_{23}a_{32}) - a_{12}(a_{21}a_{33} - a_{23}a_{31}) + a_{13}(a_{21}a_{32} - a_{22}a_{31})$$

2. **Syarat Keberadaan Invers:**
   $$A^{-1} \text{ ada} \iff \det(A) \neq 0$$

3. **Invers Matriks:**
   $$A^{-1} = \frac{1}{\det(A)} \cdot \text{Adj}(A)$$
   * Kofaktor: $C_{ij} = (-1)^{i+j} \cdot M_{ij}$
   * Adjoin: $\text{Adj}(A) = C^T$ (Transpose matriks kofaktor)

4. **Pembuktian Invers:**
   $$A \cdot A^{-1} = I \quad (\text{Matriks Identitas})$$

---

### **Penjelasan & Langkah Penyelesaian**

#### **a. Hitung $\det(A)$**
Menggunakan ekspansi kofaktor sepanjang baris pertama:
$$\det(A) = 2 \begin{vmatrix} 2 & 1 \\ 1 & 2 \end{vmatrix} - 1 \begin{vmatrix} 1 & 1 \\ 0 & 2 \end{vmatrix} + 0 \begin{vmatrix} 1 & 2 \\ 0 & 1 \end{vmatrix}$$
$$\det(A) = 2(2\cdot 2 - 1\cdot 1) - 1(1\cdot 2 - 1\cdot 0) + 0$$
$$\det(A) = 2(4 - 1) - 1(2 - 0) = 6 - 2 = 4$$

---

#### **b. Apakah $A^{-1}$ ada?**
* **Jawaban:** Ya, $A^{-1}$ ada.
* **Alasan:** Matriks $A$ memiliki nilai $\det(A) = 4 \neq 0$ (bersifat *non-singular*). Suatu matriks persegi hanya memiliki invers jika determinannya tidak sama dengan zero.

---

#### **c. Tentukan $A^{-1}$**

* **Menentukan Matriks Kofaktor $C_{ij}$:**
  * $C_{11} = +(4 - 1) = 3$
  * $C_{12} = -(2 - 0) = -2$
  * $C_{13} = +(1 - 0) = 1$
  * $C_{21} = -(2 - 0) = -2$
  * $C_{22} = +(4 - 0) = 4$
  * $C_{23} = -(2 - 0) = -2$
  * $C_{31} = +(1 - 0) = 1$
  * $C_{32} = -(2 - 0) = -2$
  * $C_{33} = +(4 - 1) = 3$

  Matriks Kofaktor $C = \begin{bmatrix} 3 & -2 & 1 \\ -2 & 4 & -2 \\ 1 & -2 & 3 \end{bmatrix}$

* **Adjoin Matriks ($\text{Adj}(A) = C^T$):**
  $$\text{Adj}(A) = \begin{bmatrix} 3 & -2 & 1 \\ -2 & 4 & -2 \\ 1 & -2 & 3 \end{bmatrix}$$

* **Menghitung Invers $A^{-1}$:**
  $$A^{-1} = \frac{1}{4} \begin{bmatrix} 3 & -2 & 1 \\ -2 & 4 & -2 \\ 1 & -2 & 3 \end{bmatrix} = \begin{bmatrix} 3/4 & -1/2 & 1/4 \\ -1/2 & 1 & -1/2 \\ 1/4 & -1/2 & 3/4 \end{bmatrix}$$

---

#### **d. Pembuktian Hasil Invers**
$$A \cdot A^{-1} = \begin{bmatrix} 2 & 1 & 0 \\ 1 & 2 & 1 \\ 0 & 1 & 2 \end{bmatrix} \cdot \frac{1}{4} \begin{bmatrix} 3 & -2 & 1 \\ -2 & 4 & -2 \\ 1 & -2 & 3 \end{bmatrix}$$
$$= \frac{1}{4} \begin{bmatrix} 2(3)+1(-2)+0(1) & 2(-2)+1(4)+0(-2) & 2(1)+1(-2)+0(3) \\ 1(3)+2(-2)+1(1) & 1(-2)+2(4)+1(-2) & 1(1)+2(-2)+1(3) \\ 0(3)+1(-2)+2(1) & 0(-2)+1(4)+2(-2) & 0(1)+1(-2)+2(3) \end{bmatrix}$$
$$= \frac{1}{4} \begin{bmatrix} 4 & 0 & 0 \\ 0 & 4 & 0 \\ 0 & 0 & 4 \end{bmatrix} = \begin{bmatrix} 1 & 0 & 0 \\ 0 & 1 & 0 \\ 0 & 0 & 1 \end{bmatrix} = I \quad (\text{Terbukti})$$

---
---

## Soal 4 — Sistem Persamaan Linear: Metode Eliminasi Gauss

### **Isi Soal**
Sebuah perusahaan menggunakan tiga jenis material $X, Y,$ dan $Z$. Dalam suatu proyek diketahui:
* 2 unit $X$, 1 unit $Y$, dan 1 unit $Z$ membutuhkan biaya Rp11 juta.
* 1 unit $X$, 2 unit $Y$, dan 3 unit $Z$ membutuhkan biaya Rp20 juta.
* 3 unit $X$, 1 unit $Y$, dan 2 unit $Z$ membutuhkan biaya Rp18 juta.

Misalkan harga per unit material berturut-turut adalah $x, y, z$ juta rupiah.

a. Bentuk sistem persamaan linear tersebut dalam bentuk matriks $AX = B$.  
b. Tentukan $x, y, z$ menggunakan metode eliminasi Gauss.  
c. Interpretasikan hasil yang diperoleh dalam konteks permasalahan.

---

### **Rumus yang Digunakan**

1. **Bentuk Matriks System ($AX = B$):**
   $$\begin{bmatrix} a_{11} & a_{12} & a_{13} \\ a_{21} & a_{22} & a_{23} \\ a_{31} & a_{32} & a_{33} \end{bmatrix} \begin{bmatrix} x \\ y \\ z \end{bmatrix} = \begin{bmatrix} b_1 \\ b_2 \\ b_3 \end{bmatrix}$$

2. **Operasi Baris Elementer (OBE):**
   Mengubah Matriks Augmentasi $[A|B]$ menjadi **Matriks Segitiga Atas** (Bentuk Eselon Baris):
   $$\left[\begin{array}{ccc|c} 1 & * & * & * \\ 0 & 1 & * & * \\ 0 & 0 & 1 & * \end{array}\right]$$

3. **Substitusi Balik (Back Substitution):**
   Mencari nilai variabel dari baris paling bawah ke atas.

---

### **Penjelasan & Langkah Penyelesaian**

#### **a. Bentuk Matriks $AX = B$**
Sistem Persamaan Linear:
$$\begin{aligned}
2x + y + z &= 11 \\
x + 2y + 3z &= 20 \\
3x + y + 2z &= 18
\end{aligned}$$

Bentuk matriks:
$$\begin{bmatrix} 2 & 1 & 1 \\ 1 & 2 & 3 \\ 3 & 1 & 2 \end{bmatrix} \begin{bmatrix} x \\ y \\ z \end{bmatrix} = \begin{bmatrix} 11 \\ 20 \\ 18 \end{bmatrix}$$

---

#### **b. Eliminasi Gauss**

* **Matriks Augmentasi Awal $[A|B]$:**
  $$\left[\begin{array}{ccc|c} 2 & 1 & 1 & 11 \\ 1 & 2 & 3 & 20 \\ 3 & 1 & 2 & 18 \end{array}\right]$$

* **Langkah 1 ($R_1 \leftrightarrow R_2$):** Tukar baris 1 dan baris 2 agar pivot $R_1 = 1$.
  $$\left[\begin{array}{ccc|c} 1 & 2 & 3 & 20 \\ 2 & 1 & 1 & 11 \\ 3 & 1 & 2 & 18 \end{array}\right]$$

* **Langkah 2 (Nolkan kolom 1 di bawah pivot):**
  * $R_2 \leftarrow R_2 - 2R_1 \implies [0, -3, -5 \mid -29]$
  * $R_3 \leftarrow R_3 - 3R_1 \implies [0, -5, -7 \mid -42]$
  $$\left[\begin{array}{ccc|c} 1 & 2 & 3 & 20 \\ 0 & -3 & -5 & -29 \\ 0 & -5 & -7 & -42 \end{array}\right]$$

* **Langkah 3 (Nolkan elemen $R_3$ kolom 2):**
  * $R_3 \leftarrow 3R_3 - 5R_2 \implies [0, 0, 4 \mid 19]$
  $$\left[\begin{array}{ccc|c} 1 & 2 & 3 & 20 \\ 0 & -3 & -5 & -29 \\ 0 & 0 & 4 & 19 \end{array}\right]$$

* **Langkah 4 (Substitusi Balik):**
  1. Dari $R_3$: $4z = 19 \implies z = \frac{19}{4} = 4{,}75$
  2. Dari $R_2$: $-3y - 5(4{,}75) = -29 \implies -3y - 23{,}75 = -29 \implies -3y = -5{,}25 \implies y = 1{,}75$
  3. Dari $R_1$: $x + 2(1{,}75) + 3(4{,}75) = 20 \implies x + 3{,}5 + 14{,}25 = 20 \implies x + 17{,}75 = 20 \implies x = 2{,}25$

---

#### **c. Interpretasi Hasil**
* Harga **Material X** = **Rp2.250.000** (Rp2,25 juta) per unit.
* Harga **Material Y** = **Rp1.750.000** (Rp1,75 juta) per unit.
* Harga **Material Z** = **Rp4.750.000** (Rp4,75 juta) per unit.

---
---

## Soal 5 — Metode Cramer dan Analisis Hasil

### **Isi Soal**
Diberikan sistem persamaan linier:
$$\begin{aligned}
x + 2y + z &= 7 \\
2x - y + 3z &= 9 \\
3x + y + 4z &= 16
\end{aligned}$$

a. Tentukan determinan matriks koefisien.  
b. Gunakan aturan Cramer untuk menentukan $x, y,$ dan $z$.  
c. Seorang mahasiswa mengatakan: *"Jika determinan matriks koefisien tidak sama dengan nol, maka sistem persamaan linear pasti tidak mempunyai solusi."* Apakah pernyataan tersebut benar? Jelaskan.

---

### **Rumus yang Digunakan**

1. **Aturan Cramer (Cramer's Rule):**
   $$x = \frac{\det(A_x)}{\det(A)}, \quad y = \frac{\det(A_y)}{\det(A)}, \quad z = \frac{\det(A_z)}{\det(A)}$$

2. **Analisis Solusi Berdasarkan Determinan:**
   * $\det(A) \neq 0 \implies$ Memiliki **1 Solusi Unik (Tunggal)**.
   * $\det(A) = 0 \implies$ Memiliki **Banyak Solusi** atau **Tidak Punya Solusi**.

---

### **Penjelasan & Langkah Penyelesaian**

#### **a. Tentukan determinan matriks koefisien**
Matriks Koefisien $A = \begin{bmatrix} 1 & 2 & 1 \\ 2 & -1 & 3 \\ 3 & 1 & 4 \end{bmatrix}$

$$\det(A) = 1((-1)(4) - (3)(1)) - 2((2)(4) - (3)(3)) + 1((2)(1) - (-1)(3))$$
$$\det(A) = 1(-4 - 3) - 2(8 - 9) + 1(2 + 3)$$
$$\det(A) = -7 + 2 + 5 = 0$$

$$\det(A) = 0$$

---

#### **b. Penggunaan Aturan Cramer**
Karena nilai $\det(A) = 0$, **Aturan Cramer TIDAK DAPAT digunakan** untuk mencari nilai $x, y, z$. Aturan Cramer mensyaratkan pembagian dengan $\det(A)$, di mana pembagian dengan zero tidak terdefinisi secara matematis.

---

#### **c. Analisis Pernyataan Mahasiswa**
* **Status Pernyataan:** **TIDAK BENAR (SALAH).**
* **Penjelasan:**
  1. Jika determinan matriks koefisien **tidak sama dengan nol ($\det(A) \neq 0$)**, maka sistem persamaan linear **pasti memiliki solusi unik (tunggal)**.
  2. Kondisi di mana sistem persamaan linear **tidak mempunyai solusi** (atau mempunyai tak hingga banyak solusi) justru terjadi apabila determinan matriks koefisien **sama dengan nol ($\det(A) = 0$)**.
```eof

Saya telah membuatkan file Markdown `Penyelesaian_Soal_Aljabar_Linier.md` yang memuat seluruh soal, penjelasan lengkap, dan rumus yang digunakan.
