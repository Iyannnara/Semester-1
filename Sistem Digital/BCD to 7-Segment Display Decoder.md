# BCD to 7-Segment Display Decoder
  Dekoder BCD ke tampilan 7-segmen adalah dekoder khusus yang dapat mengubah 
bilangan desimal berkode biner menjadi bentuk lain yang dapat dengan mudah ditampilkan melalui tampilan 7-segmen.

### what's BCD?
BCD adalah singkatan dari binary coded decimal (desimal berkode biner) . Ini adalah sistem penomoran digital di mana kita dapat merepresentasikan setiap angka desimal menggunakan 4 bit angka biner.
Sistem desimal memiliki 10 digit. Untuk merepresentasikan kesepuluh digit tersebut, kita membutuhkan 10 kombinasi dari 4 bit biner.

<img width="343" height="299" alt="image" src="https://github.com/user-attachments/assets/8240db27-86b1-45d1-991b-8e0baf73a2b5" />

Sistem digital seperti komputer dapat memahami dan dengan mudah membaca angka besar dalam format biner. 
Namun, manusia tidak dapat membaca angka biner yang besar. 
Untuk mengatasi masalah ini, kita perlu menampilkannya sebagai angka desimal menggunakan tampilan 7-segmen.

### 7 Segment
<img width="179" height="342" alt="image" src="https://github.com/user-attachments/assets/ff764322-bbf1-4e90-89a6-48bfe8a875fd" />

terdapat 8 pin input pada layar 7-Segmen. 7 pin input untuk masing-masing dari 7 LED dan satu pin untuk terminal umum.

#### Ada dua jenis tampilan 7-Segmen.
* **Katoda Umum:**
* Semua katoda terhubung ke **GND (logika '0')**.
* Dinyalakan dengan memberi **logika '1'** (HIGH) pada pin input.

* **Anoda Umum:**
* Semua anoda terhubung ke **Vcc (logika '1')**.
* Dinyalakan dengan memberi **logika '0'** (LOW) pada pin input.

### Working of 7-Segment Display (LED & LCD) Circuit
Terdapat 7 segmen LED pada tampilan dan pin-pinnya adalah “ a”, “b”, “c”, “d”, “e”, “f”, dan “g”.
Kita menggunakan segmen LED katoda umum sebagai contoh.
Misalkan kita ingin menampilkan angka '0', untuk menampilkan 0, 
kita perlu mengaktifkan “a”, “b”, “c”, “d”, “e”, “f”, dan menonaktifkan “g”. Hasilnya akan terlihat seperti gambar di bawah ini.
<img width="158" height="300" alt="image" src="https://github.com/user-attachments/assets/21daf743-5d14-4b6b-8379-35ff6716da32" />

### 7-Segment Display Segments for all Numbers
<img width="181" height="345" alt="image" src="https://github.com/user-attachments/assets/30974310-c8d8-41d8-bf6d-a86bad42e1db" />

Angka 1 : Untuk menampilkan angka 1, kita perlu menyalakan segmen b dan c, serta mematikan segmen LED a, d, e, f, dan g.
<img width="192" height="353" alt="image" src="https://github.com/user-attachments/assets/e7eba652-3ab8-4352-b43e-182e4ca2f55f" />

Angka 2 : Untuk menampilkan angka 2, kita perlu menyalakan segmen a, b, d, e, g dan mematikan segmen LED c, f.
<img width="158" height="300" alt="image" src="https://github.com/user-attachments/assets/91e45964-835a-4dd5-bb40-1b44cf986c59" />

Angka 3 : Untuk menampilkan angka 3, kita perlu menyalakan segmen a, b, c, d, g dan mematikan segmen LED e, f.
<img width="179" height="342" alt="image" src="https://github.com/user-attachments/assets/d8dd4c7b-0c5d-4079-acae-c38a115a480e" />
