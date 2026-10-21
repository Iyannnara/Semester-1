
# Rangkuman dan Pembahasan Lengkap Soal Vektor

Dokumen ini berisi rangkuman rumus-rumus utama serta penyelesaian langkah demi langkah untuk 10 tipe soal vektor.

---

## Ringkasan Rumus Utamanya

### 1. Operasi Dasar & Panjang Vektor
Jika diketahui $\vec{v} = x\mathbf{i} + y\mathbf{j} + z\mathbf{k}$:
* **Panjang Vektor:** $|\vec{v}| = \sqrt{x^2 + y^2 + z^2}$
* **Vektor Dua Titik ($P \to Q$):** $\vec{PQ} = \vec{q} - \vec{p} = (x_2 - x_1)\mathbf{i} + (y_2 - y_1)\mathbf{j} + (z_2 - z_1)\mathbf{k}$
* **Vektor Satuan:** $\mathbf{e}_{\vec{v}} = \frac{\vec{v}}{|\vec{v}|}$

### 2. Cosinus Arah
* $\cos\alpha = \frac{x}{|\vec{v}|}, \quad \cos\beta = \frac{y}{|\vec{v}|}, \quad \cos\gamma = \frac{z}{|\vec{v}|}$
* Identitas: $\cos^2\alpha + \cos^2\beta + \cos^2\gamma = 1$

### 3. Perkalian Titik (*Dot Product*) & Proyeksi
* **Perkalian Titik:** $\vec{a} \cdot \vec{b} = a_x b_x + a_y b_y + a_z b_z$
* **Sudut Dua Vektor:** $\cos\theta = \frac{\vec{a} \cdot \vec{b}}{|\vec{a}| |\vec{b}|}$
* **Proyeksi Skalar $\vec{a}$ pada $\vec{b}$:** $s = \frac{\vec{a} \cdot \vec{b}}{|\vec{b}|}$
* **Proyeksi Vektor $\vec{a}$ pada $\vec{b}$:** $\vec{p} = \left( \frac{\vec{a} \cdot \vec{b}}{|\vec{b}|^2} \right) \vec{b}$
* **Usaha (Aplikasi Physics):** $W = \vec{F} \cdot \vec{d}$

### 4. Syarat Tegak Lurus & Sejajar
* **Tegak Lurus ($\vec{a} \perp \vec{b}$):** $\vec{a} \cdot \vec{b} = 0$
* **Sejajar ($\vec{a} \parallel \vec{c}$):** $\vec{a} = k \cdot \vec{c} \implies \frac{a_x}{c_x} = \frac{a_y}{c_y} = \frac{a_z}{c_z} = k$

### 5. Perkalian Silang (*Cross Product*) & Aplikasi
* **Determinan Cross Product:**
  $$\vec{a} \times \vec{b} = \begin{vmatrix} \mathbf{i} & \mathbf{j} & \mathbf{k} \\ a_x & a_y & a_z \\ b_x & b_y & b_z \end{vmatrix}$$
* **Sifat Anti-komutatif:** $\vec{a} \times \vec{b} = -(\vec{b} \times \vec{a})$
* **Luas Jajar Genjang:** $L = |\vec{a} \times \vec{b}|$
* **Luas Segitiga:** $L = \frac{1}{2} |\vec{a} \times \vec{b}|$
* **Momen Gaya (Torsi):** $\vec{\tau} = \vec{r} \times \vec{F}$

### 6. Perkalian Tiga Vektor (*Triple Product*)
* **Perkalian Skalar Tiga:**
  $$\vec{a} \cdot (\vec{b} \times \vec{c}) = \begin{vmatrix} a_x & a_y & a_z \\ b_x & b_y & b_z \\ c_x & c_y & c_z \end{vmatrix}$$
* **Volume Paralelepipedum:** $V = |\vec{a} \cdot (\vec{b} \times \vec{c})|$ *(Jika $V = 0$, vektor **koplanar/sebidang**)*
* **Identitas BAC-CAB:** $\vec{a} \times (\vec{b} \times \vec{c}) = \vec{b}(\vec{a} \cdot \vec{c}) - \vec{c}(\vec{a} \cdot \vec{b})$

---

# Pembahasan Soal-Soal

## Soal 1: Panjang Vektor
**Soal:**
Diketahui vektor $\vec{a} = 3\mathbf{i} - 4\mathbf{j} + 12\mathbf{k}$ dan $\vec{b} = 2\mathbf{i} - \mathbf{j} + 2\mathbf{k}$. Tentukan:
a. Panjang (besar) vektor $\vec{a}$ dan vektor $\vec{b}$.
b. Panjang vektor $\vec{a} + \vec{b}$.
c. Panjang vektor $\vec{a} - 2\vec{b}$.

**Pembahasan:**
* **a. Panjang $\vec{a}$ dan $\vec{b}$:**
  $$|\vec{a}| = \sqrt{3^2 + (-4)^2 + 12^2} = \sqrt{9 + 16 + 144} = \sqrt{169} = 13$$
  $$|\vec{b}| = \sqrt{2^2 + (-1)^2 + 2^2} = \sqrt{4 + 1 + 4} = \sqrt{9} = 3$$

* **b. Panjang $\vec{a} + \vec{b}$:**
  $$\vec{a} + \vec{b} = (3+2)\mathbf{i} + (-4-1)\mathbf{j} + (12+2)\mathbf{k} = 5\mathbf{i} - 5\mathbf{j} + 14\mathbf{k}$$
  $$|\vec{a} + \vec{b}| = \sqrt{5^2 + (-5)^2 + 14^2} = \sqrt{25 + 25 + 196} = \sqrt{246} \approx 15{,}68$$

* **c. Panjang $\vec{a} - 2\vec{b}$:**
  $$2\vec{b} = 4\mathbf{i} - 2\mathbf{j} + 4\mathbf{k}$$
  $$\vec{a} - 2\vec{b} = (3-4)\mathbf{i} + (-4-(-2))\mathbf{j} + (12-4)\mathbf{k} = -\mathbf{i} - 2\mathbf{j} + 8\mathbf{k}$$
  $$|\vec{a} - 2\vec{b}| = \sqrt{(-1)^2 + (-2)^2 + 8^2} = \sqrt{1 + 4 + 64} = \sqrt{69} \approx 8{,}31$$

---

## Soal 2: Arah Vektor dan Vektor Satuan
**Soal:**
Diketahui titik $P(1, 2, 3)$ dan $Q(4, -2, 15)$. Tentukan:
a. Vektor $\vec{PQ}$ dan panjangnya.
b. Vektor satuan searah $\vec{PQ}$.
c. Cosinus arah ($\cos \alpha, \cos \beta, \cos \gamma$) vektor $\vec{PQ}$, kemudian sudut-sudut arahnya terhadap sumbu X, Y, dan Z.
d. Buktikan bahwa $\cos^2\alpha + \cos^2\beta + \cos^2\gamma = 1$.

**Pembahasan:**
* **a. Vektor $\vec{PQ}$ dan Panjangnya:**
  $$\vec{PQ} = (4-1)\mathbf{i} + (-2-2)\mathbf{j} + (15-3)\mathbf{k} = 3\mathbf{i} - 4\mathbf{j} + 12\mathbf{k}$$
  $$|\vec{PQ}| = \sqrt{3^2 + (-4)^2 + 12^2} = \sqrt{169} = 13$$

* **b. Vektor Satuan:**
  $$\mathbf{e}_{\vec{PQ}} = \frac{3}{13}\mathbf{i} - \frac{4}{13}\mathbf{j} + \frac{12}{13}\mathbf{k}$$

* **c. Cosinus Arah & Sudut Arah:**
  $$\cos\alpha = \frac{3}{13} \implies \alpha \approx 76{,}66^\circ$$
  $$\cos\beta = -\frac{4}{13} \implies \beta \approx 107{,}92^\circ$$
  $$\cos\gamma = \frac{12}{13} \implies \gamma \approx 22{,}62^\circ$$

* **d. Pembuktian:**
  $$\cos^2\alpha + \cos^2\beta + \cos^2\gamma = \left(\frac{3}{13}\right)^2 + \left(-\frac{4}{13}\right)^2 + \left(\frac{12}{13}\right)^2 = \frac{9 + 16 + 144}{169} = \frac{169}{169} = 1 \quad (\text{Terbukti})$$

---

## Soal 3: Resultan Gaya
**Soal:**
Tiga buah gaya bekerja pada satu titik, yaitu $\vec{F_1} = 20\mathbf{i} + 30\mathbf{j} - 10\mathbf{k}\text{ N}$, $\vec{F_2} = -5\mathbf{i} + 15\mathbf{j} + 25\mathbf{k}\text{ N}$, dan $\vec{F_3} = 10\mathbf{i} - 20\mathbf{j} + 5\mathbf{k}\text{ N}$. Tentukan:
a. Vektor resultan gaya $\vec{R} = \vec{F_1} + \vec{F_2} + \vec{F_3}$.
b. Besar resultan gaya tersebut.
c. Sudut yang dibentuk resultan gaya terhadap sumbu X, Y, dan Z positif.

**Pembahasan:**
* **a. Vektor Resultan $\vec{R}$:**
  $$\vec{R} = (20 - 5 + 10)\mathbf{i} + (30 + 15 - 20)\mathbf{j} + (-10 + 25 + 5)\mathbf{k} = 25\mathbf{i} + 25\mathbf{j} + 20\mathbf{k}\text{ N}$$

* **b. Besar Resultan $|\vec{R}|$:**
  $$|\vec{R}| = \sqrt{25^2 + 25^2 + 20^2} = \sqrt{625 + 625 + 400} = \sqrt{1650} = 5\sqrt{66}\text{ N} \approx 40{,}62\text{ N}$$

* **c. Sudut Arah:**
  $$\cos\alpha = \frac{25}{40{,}62} \approx 0{,}6155 \implies \alpha \approx 52{,}01^\circ$$
  $$\cos\beta = \frac{25}{40{,}62} \approx 0{,}6155 \implies \beta \approx 52{,}01^\circ$$
  $$\cos\gamma = \frac{20}{40{,}62} \approx 0{,}4924 \implies \gamma \approx 60{,}50^\circ$$

---

## Soal 4: Perkalian Titik (Dot Product)
**Soal:**
Diketahui $\vec{a} = 2\mathbf{i} - 3\mathbf{j} + \mathbf{k}$ dan $\vec{b} = 4\mathbf{i} + \mathbf{j} - 2\mathbf{k}$. Tentukan:
a. Hasil perkalian titik $\vec{a} \cdot \vec{b}$.
b. Sudut $\theta$ antara vektor $\vec{a}$ dan $\vec{b}$.
c. Proyeksi skalar $\vec{a}$ pada $\vec{b}$.
d. Proyeksi vektor $\vec{a}$ pada $\vec{b}$.

**Pembahasan:**
* **a. Perkalian Titik:**
  $$\vec{a} \cdot \vec{b} = (2 \cdot 4) + (-3 \cdot 1) + (1 \cdot -2) = 8 - 3 - 2 = 3$$

* **b. Sudut $\theta$:**
  $$|\vec{a}| = \sqrt{2^2+(-3)^2+1^2} = \sqrt{14}, \quad |\vec{b}| = \sqrt{4^2+1^2+(-2)^2} = \sqrt{21}$$
  $$\cos\theta = \frac{3}{\sqrt{14}\sqrt{21}} = \frac{3}{\sqrt{294}} \approx 0{,}1750 \implies \theta \approx 79{,}93^\circ$$

* **c. Proyeksi Skalar:**
  $$s = \frac{\vec{a} \cdot \vec{b}}{|\vec{b}|} = \frac{3}{\sqrt{21}} = \frac{\sqrt{21}}{7} \approx 0{,}655$$

* **d. Proyeksi Vektor:**
  $$\vec{p} = \left(\frac{3}{21}\right)(4\mathbf{i} + \mathbf{j} - 2\mathbf{k}) = \frac{4}{7}\mathbf{i} + \frac{1}{7}\mathbf{j} - \frac{2}{7}\mathbf{k}$$

---

## Soal 5: Syarat Tegak Lurus dan Sejajar
**Soal:**
Diketahui $\vec{a} = m\mathbf{i} + 2\mathbf{j} - \mathbf{k}$, $\vec{b} = 3\mathbf{i} + m\mathbf{j} + 4\mathbf{k}$, dan $\vec{c} = 2\mathbf{i} - 4\mathbf{j} + 2\mathbf{k}$.
a. Tentukan nilai $m$ agar $\vec{a}$ tegak lurus $\vec{b}$.
b. Tentukan nilai $m$ agar $\vec{a}$ sejajar dengan $\vec{c}$.
c. Jelaskan alasan Anda berdasarkan sifat perkalian titik dan hubungan antarvektor yang sejajar.

**Pembahasan:**
* **a. Tegak Lurus ($\vec{a} \cdot \vec{b} = 0$):**
  $$3m + 2m - 4 = 0 \implies 5m = 4 \implies m = \frac{4}{5}$$

* **b. Sejajar ($\vec{a} = k\vec{c}$):**
  $$\begin{pmatrix} m \\ 2 \\ -1 \end{pmatrix} = k \begin{pmatrix} 2 \\ -4 \\ 2 \end{pmatrix}$$
  Dari komponen $z$: $-1 = 2k \implies k = -\frac{1}{2}$.
  Maka komponen $x$: $m = 2k = 2\left(-\frac{1}{2}\right) = -1$.

* **c. Alasan:**
  * **Tegak lurus:** Karena $\vec{a} \cdot \vec{b} = |\vec{a}||\vec{b}|\cos 90^\circ = 0$.
  * **Sejajar:** Dua vektor sejajar memiliki komponen seletak dengan perbandingan berkonstanta sama ($\vec{a} = k\vec{c}$).

---

## Soal 6: Aplikasi Perkalian Titik (Usaha)
**Soal:**
Sebuah gaya $\vec{F} = 10\mathbf{i} - 4\mathbf{j} + 6\mathbf{k}\text{ N}$ memindahkan sebuah benda dari titik $A(1, 2, 0)$ ke titik $B(5, -1, 3)$ (dalam meter). Tentukan:
a. Vektor perpindahan $\vec{d} = \vec{AB}$.
b. Usaha yang dilakukan gaya tersebut, $W = \vec{F} \cdot \vec{d}$.
c. Sudut antara gaya $\vec{F}$ dan arah perpindahan $\vec{d}$.

**Pembahasan:**
* **a. Vektor Perpindahan:**
  $$\vec{d} = (5-1)\mathbf{i} + (-1-2)\mathbf{j} + (3-0)\mathbf{k} = 4\mathbf{i} - 3\mathbf{j} + 3\mathbf{k}\text{ m}$$

* **b. Usaha ($W$):**
  $$W = (10 \cdot 4) + (-4 \cdot -3) + (6 \cdot 3) = 40 + 12 + 18 = 70\text{ Joule}$$

* **c. Sudut $\theta$:**
  $$|\vec{F}| = \sqrt{10^2+(-4)^2+6^2} = \sqrt{152}, \quad |\vec{d}| = \sqrt{4^2+(-3)^2+3^2} = \sqrt{34}$$
  $$\cos\theta = \frac{70}{\sqrt{152}\sqrt{34}} = \frac{70}{\sqrt{5168}} \approx 0{,}9737 \implies \theta \approx 13{,}17^\circ$$

---

## Soal 7: Perkalian Silang (Cross Product)
**Soal:**
Diketahui $\vec{a} = \mathbf{i} + 2\mathbf{j} + 3\mathbf{k}$ dan $\vec{b} = -2\mathbf{i} + \mathbf{j} + 4\mathbf{k}$. Tentukan:
a. Hasil perkalian silang $\vec{a} \times \vec{b}$.
b. Buktikan bahwa $\vec{a} \times \vec{b}$ tegak lurus terhadap $\vec{a}$ dan $\vec{b}$.
c. Besar $|\vec{a} \times \vec{b}|$ dan nilai $\sin \theta$.
d. Buktikan bahwa $\vec{a} \times \vec{b} = -(\vec{b} \times \vec{a})$.

**Pembahasan:**
* **a. Perkalian Silang:**
  $$\vec{a} \times \vec{b} = \begin{vmatrix} \mathbf{i} & \mathbf{j} & \mathbf{k} \\ 1 & 2 & 3 \\ -2 & 1 & 4 \end{vmatrix} = (8-3)\mathbf{i} - (4+6)\mathbf{j} + (1+4)\mathbf{k} = 5\mathbf{i} - 10\mathbf{j} + 5\mathbf{k}$$

* **b. Bukti Tegak Lurus:**
  $$(\vec{a} \times \vec{b}) \cdot \vec{a} = (5 \cdot 1) + (-10 \cdot 2) + (5 \cdot 3) = 5 - 20 + 15 = 0 \quad (\text{Tegak lurus})$$
  $$(\vec{a} \times \vec{b}) \cdot \vec{b} = (5 \cdot -2) + (-10 \cdot 1) + (5 \cdot 4) = -10 - 10 + 20 = 0 \quad (\text{Tegak lurus})$$

* **c. Besar $|\vec{a} \times \vec{b}|$ dan $\sin\theta$:**
  $$|\vec{a} \times \vec{b}| = \sqrt{5^2 + (-10)^2 + 5^2} = \sqrt{150} = 5\sqrt{6}$$
  $$\sin\theta = \frac{|\vec{a} \times \vec{b}|}{|\vec{a}||\vec{b}|} = \frac{5\sqrt{6}}{\sqrt{14}\sqrt{21}} = \frac{5\sqrt{6}}{7\sqrt{6}} = \frac{5}{7}$$

* **d. Sifat Anti-komutatif:**
  $$\vec{b} \times \vec{a} = \begin{vmatrix} \mathbf{i} & \mathbf{j} & \mathbf{k} \\ -2 & 1 & 4 \\ 1 & 2 & 3 \end{vmatrix} = -5\mathbf{i} + 10\mathbf{j} - 5\mathbf{k} = -(\vec{a} \times \vec{b}) \quad (\text{Terbukti})$$

---

## Soal 8: Aplikasi Perkalian Silang (Luas)
**Soal:**
Diketahui segitiga ABC dengan titik $A(1, 0, 2)$, $B(3, 1, -1)$, dan $C(2, 4, 0)$. Tentukan:
a. Vektor $\vec{AB}$ dan $\vec{AC}$.
b. Luas segitiga ABC dan luas jajar genjang yang dibentuk oleh $\vec{AB}$ dan $\vec{AC}$.
c. Vektor satuan yang tegak lurus bidang segitiga ABC.

**Pembahasan:**
* **a. Vektor $\vec{AB}$ dan $\vec{AC}$:**
  $$\vec{AB} = 2\mathbf{i} + \mathbf{j} - 3\mathbf{k}, \quad \vec{AC} = \mathbf{i} + 4\mathbf{j} - 2\mathbf{k}$$

* **b. Hitung Luas:**
  $$\vec{AB} \times \vec{AC} = \begin{vmatrix} \mathbf{i} & \mathbf{j} & \mathbf{k} \\ 2 & 1 & -3 \\ 1 & 4 & -2 \end{vmatrix} = 10\mathbf{i} + \mathbf{j} + 7\mathbf{k}$$
  $$|\vec{AB} \times \vec{AC}| = \sqrt{10^2 + 1^2 + 7^2} = \sqrt{150} = 5\sqrt{6}$$
  * **Luas Jajar Genjang:** $5\sqrt{6} \approx 12{,}25\text{ satuan luas}$
  * **Luas Segitiga ABC:** $\frac{5\sqrt{6}}{2} \approx 6{,}12\text{ satuan luas}$

* **c. Vektor Satuan Tegak Lurus:**
  $$\mathbf{e} = \pm \frac{10\mathbf{i} + \mathbf{j} + 7\mathbf{k}}{5\sqrt{6}} = \pm \left( \frac{\sqrt{6}}{3}\mathbf{i} + \frac{\sqrt{6}}{30}\mathbf{j} + \frac{7\sqrt{6}}{30}\mathbf{k} \right)$$

---

## Soal 9: Aplikasi Perkalian Silang (Momen Gaya)
**Soal:**
Sebuah gaya $\vec{F} = 4\mathbf{i} + 5\mathbf{j} - 2\mathbf{k}\text{ N}$ bekerja pada titik dengan posisi $\vec{r} = 2\mathbf{i} - \mathbf{j} + 3\mathbf{k}\text{ m}$. Tentukan:
a. Vektor momen gaya (torsi) $\vec{\tau} = \vec{r} \times \vec{F}$.
b. Besar momen gaya tersebut.
c. Sudut antara $\vec{r}$ dan $\vec{F}$, serta arah vektor momen gaya terhadap bidangnya.

**Pembahasan:**
* **a. Vektor Torsi $\vec{\tau}$:**
  $$\vec{\tau} = \begin{vmatrix} \mathbf{i} & \mathbf{j} & \mathbf{k} \\ 2 & -1 & 3 \\ 4 & 5 & -2 \end{vmatrix} = -13\mathbf{i} + 16\mathbf{j} + 14\mathbf{k}\text{ Nm}$$

* **b. Besar Torsi $|\vec{\tau}|$:**
  $$|\vec{\tau}| = \sqrt{(-13)^2 + 16^2 + 14^2} = \sqrt{621} = 3\sqrt{69}\text{ Nm} \approx 24{,}92\text{ Nm}$$

* **c. Sudut dan Arah:**
  $$\sin\theta = \frac{3\sqrt{69}}{\sqrt{14}\sqrt{45}} \approx 0{,}9928 \implies \theta \approx 96{,}86^\circ \text{ (atau } 83{,}11^\circ\text{)}$$
  * **Arah:** Vektor $\vec{\tau}$ tegak lurus terhadap bidang yang dibentuk oleh $\vec{r}$ dan $\vec{F}$ (mengikuti aturan tangan kanan).

---

## Soal 10: Perkalian Tiga Vektor
**Soal:**
Diketahui $\vec{a} = 2\mathbf{i} + \mathbf{j} - \mathbf{k}$, $\vec{b} = \mathbf{i} + 3\mathbf{j} + 2\mathbf{k}$, dan $\vec{c} = -\mathbf{i} + 2\mathbf{j} + 4\mathbf{k}$. Tentukan:
a. Perkalian skalar tiga vektor $\vec{a} \cdot (\vec{b} \times \vec{c})$.
b. Volume balok miring (paralelepipedum) dan jelaskan apakah ketiga vektor koplanar.
c. Perkalian vektor tiga $\vec{a} \times (\vec{b} \times \vec{c})$.
d. Buktikan identitas $\vec{a} \times (\vec{b} \times \vec{c}) = \vec{b}(\vec{a} \cdot \vec{c}) - \vec{c}(\vec{a} \cdot \vec{b})$.

**Pembahasan:**
* **a. Perkalian Skalar Tiga:**
  $$\vec{a} \cdot (\vec{b} \times \vec{c}) = \begin{vmatrix} 2 & 1 & -1 \\ 1 & 3 & 2 \\ -1 & 2 & 4 \end{vmatrix} = 2(12-4) - 1(4+2) - 1(2+3) = 16 - 6 - 5 = 5$$

* **b. Volume & Status Koplanar:**
  * **Volume:** $V = |5| = 5\text{ satuan volume}$
  * **Koplanar:** Ketiga vektor **tidak koplanar** karena volumenya tidak sama dengan nol ($5 \neq 0$).

* **c. Perkalian Vektor Tiga:**
  $$\vec{b} \times \vec{c} = 8\mathbf{i} - 6\mathbf{j} + 5\mathbf{k}$$
  $$\vec{a} \times (\vec{b} \times \vec{c}) = \begin{vmatrix} \mathbf{i} & \mathbf{j} & \mathbf{k} \\ 2 & 1 & -1 \\ 8 & -6 & 5 \end{vmatrix} = -\mathbf{i} - 18\mathbf{j} - 20\mathbf{k}$$

* **d. Pembuktian Identitas:**
  $$\vec{a} \cdot \vec{c} = (2 \cdot -1) + (1 \cdot 2) + (-1 \cdot 4) = -4$$
  $$\vec{a} \cdot \vec{b} = (2 \cdot 1) + (1 \cdot 3) + (-1 \cdot 2) = 3$$
  $$\text{RHS} = -4(\mathbf{i} + 3\mathbf{j} + 2\mathbf{k}) - 3(-\mathbf{i} + 2\mathbf{j} + 4\mathbf{k}) = -\mathbf{i} - 18\mathbf{j} - 20\mathbf{k} \quad (\text{Terbukti})$$
