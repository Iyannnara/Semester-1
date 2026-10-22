# Model SDLC: Spiral, RAD, dan Iterative

## 1. Model Spiral
Model spiral adalah metode pengembangan perangkat lunak yang menggabungkan pendekatan iteratif dengan kontrol sistematis yang berfokus pada analisis dan manajemen risiko[cite: 4]. Model ini merupakan gabungan dari Iterative dan Waterfall Model, di mana setiap iterasi disebut sebagai "spiral" yang disertai analisis risiko dan perencanaan matang[cite: 4].

### Tahapan Utama Model Spiral:
* **Perencanaan (Penetapan Tujuan):** Mengidentifikasi tujuan, persyaratan fungsional/non-fungsional, dan alternatif solusi[cite: 4].
* **Analisis Risiko:** Mengidentifikasi, menganalisis, dan mengurangi potensi risiko (biaya, teknologi, atau jadwal) melalui pembuatan prototipe[cite: 4].
* **Rekayasa (Pengembangan & Pengujian):** Melakukan perancangan, pembuatan kode, pengujian, dan pengembangan versi produk yang berjalan[cite: 4].
* **Evaluasi (Peninjauan):** Mengumpulkan umpan balik dari pengguna atau pemangku kepentingan untuk merencanakan iterasi berikutnya[cite: 4].

### Kelebihan Model Spiral:
* **Pengendalian Risiko yang Baik:** Risiko besar diidentifikasi dan dimitigasi sejak dini di setiap siklus[cite: 4].
* **Fleksibel:** Perubahan persyaratan dapat diakomodasi pada tahap pengembangan selanjutnya[cite: 4].
* **Cocok untuk Proyek Besar:** Sangat ideal untuk sistem berskala besar, kompleks, dan berisiko tinggi[cite: 4].

### Kekurangan Model Spiral:
* **Biaya Tinggi:** Proses analisis risiko dan dokumentasi yang intensif membuat model ini mahal dan tidak cocok untuk proyek kecil[cite: 4].
* **Kompleksitas Manajemen:** Bergantung pada keahlian analisis risiko yang akurat dan manajemen yang berpengalaman[cite: 4].

### Contoh Proyek Penggunaan Model Spiral:
* **Sistem Penerbangan dan Ruang Angkasa (NASA):** Digunakan untuk misi luar angkasa karena kesalahan kecil berakibat fatal[cite: 4].
* **Pengembangan Sistem Operasi:** Seperti masa awal Microsoft Windows yang membutuhkan evaluasi dan penambahan fitur bertahap[cite: 4].
* **Aplikasi Layanan Kesehatan (Klinik/Rumah Sakit):** Dibangun bertahap dari modul profil pasien hingga sistem privasi data ketat[cite: 4].
* **Sistem Keamanan Militer atau Perbankan:** Proyek yang menuntut keamanan data tingkat tinggi dan evaluasi risiko matang[cite: 4].

---

## 2. Rapid Application Development (RAD)
**RAD** adalah model proses pengembangan perangkat lunak *incremental* yang menekankan pada siklus pengembangan sangat singkat (biasanya 60 hingga 90 hari)[cite: 4]. Jika kebutuhan sistem dimengerti dengan baik dan cakupan proyek dibatasi, RAD memungkinkan tim menciptakan sistem yang berfungsi penuh dengan cepat[cite: 4].

### Tahapan Utama RAD:
1. **Business modeling:** Pemodelan alur bisnis[cite: 4].
2. **Data modeling:** Pemodelan data[cite: 4].
3. **Process modeling:** Pemodelan proses[cite: 4].
4. **Application generation:** Pembuatan aplikasi / *coding* cepat[cite: 4].
5. **Testing and turnover:** Pengujian dan penyerahan[cite: 4].

### Kelebihan dan Kekurangan RAD:
* **Kelebihan:** Waktu pengerjaan sangat cepat dan melibatkan pengguna secara aktif sejak awal[cite: 4].
* **Kekurangan:** Butuh komitmen tinggi dari pengguna dan tidak cocok untuk sistem yang tidak bisa dibagi menjadi modul-modul kecil[cite: 4].

### Contoh Kasus Nyata Penggunaan RAD:
* **Sistem Alur Kerja SDM (HR):** Aplikasi pengajuan cuti *online*, *onboarding* karyawan baru, atau manajemen klaim pengeluaran[cite: 4].
* **Aplikasi Manajemen Operasional:** Sistem penjadwalan *shift*, pelacakan pemeliharaan aset, atau penanganan tiket *helpdesk*[cite: 4].
* **Portal Pendaftaran Vendor/Pelanggan:** Formulir pendaftaran digital dengan antarmuka sederhana untuk uji coba prototipe awal[cite: 4].

---

## 3. Model Iterative
Model *Iterative* adalah pendekatan di mana perangkat lunak dikembangkan melalui siklus berulang (iterasi) secara bertahap[cite: 4]. Alih-alih langsung membuat produk sempurna sejak awal, model ini berfokus pada versi dasar terlebih dahulu, lalu terus disempurnakan[cite: 4].

### Cara Kerja Model Iterative:
1. **Membuat Versi Awal (MVP):** Pengembang membangun versi pertama dengan fitur-fitur paling inti (*Minimum Viable Product*)[cite: 4].
2. **Evaluasi dan Masukan:** Pengguna atau penguji mencoba produk untuk memberikan *feedback*[cite: 4].
3. **Mulai Iterasi Berikutnya:** Memperbaiki *bug*, menambah fitur baru, dan meningkatkan kualitas produk berdasarkan masukan[cite: 4].
4. **Pengulangan:** Proses berulang (Iterasi 1, 2, dst.) hingga produk akhir memenuhi semua kebutuhan[cite: 4].

### Tahapan dalam Setiap Iterasi:
* *Requirements* (Kebutuhan)[cite: 4]
* *Design* (Desain)[cite: 4]
* *Implementation* (Implementasi)[cite: 4]
* *Testing* (Pengujian)[cite: 4]
* *Evaluation* (Evaluasi)[cite: 4]

### Kelebihan Model Iterative:
* **Rilis Lebih Cepat:** Pengguna bisa mencoba fungsi dasar produk tanpa menunggu lama[cite: 4].
* **Mudah Beradaptasi:** Penyesuaian terhadap perubahan tren pasar atau bisnis dapat dilakukan dengan cepat[cite: 4].
* **Manajemen Risiko Lebih Baik:** *Bug* atau kesalahan desain lebih cepat ditemukan dan diperbaiki[cite: 4].

### Kekurangan Model Iterative:
* **Biaya Bisa Membengkak:** Jumlah iterasi bisa terus bertambah jika batasan proyek tidak jelas (*scope creep*)[cite: 4].
* **Butuh Pengawasan Ketat:** Manajemen proyek harus disiplin agar iterasi selesai tepat waktu[cite: 4].
* **Arsitektur Sistem Berisiko Berantakan:** Penambahan fitur bertahap dapat membuat kode rumit jika tidak dilakukan *refactoring*[cite: 4].

---

## 4. Perbandingan Model SDLC

### Perbedaan RAD dan Iterative:
* **RAD:** Sangat menekankan kecepatan waktu pengerjaan (target ketat 60–90 hari) dengan bantuan komponen siap pakai[cite: 4].
* **Iterative:** Menekankan perbaikan kualitas secara bertahap melalui evaluasi siklus ulang tanpa batasan waktu seketat RAD[cite: 4].

### Tabel Perbandingan: Model Iterative vs Model Tradisional (Waterfall)
| Karakteristik | Model Iterative | Model Tradisional / Waterfall |
| :--- | :--- | :--- |
| **Peluncuran Produk** | Versi awal dirilis dengan cepat[cite: 4]. | Produk baru dirilis setelah seluruh proyek selesai[cite: 4]. |
| **Perubahan Desain** | Sangat fleksibel dan mudah diubah di tengah jalan[cite: 4]. | Sangat sulit dan mahal jika ada perubahan di tengah jalan[cite: 4]. |
| **Keterlibatan Klien** | Klien terus memberikan masukan di setiap akhir iterasi[cite: 4]. | Klien hanya terlibat di awal (kontrak) dan di akhir (serah terima)[cite: 4]. |
| **Risiko Kegagalan** | Rendah, karena masalah terdeteksi lebih cepat[cite: 4]. | Tinggi, karena cacat produk baru ketahuan di akhir proyek[cite: 4]. |
