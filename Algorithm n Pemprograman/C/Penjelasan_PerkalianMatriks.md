#include <stdio.h>   // Untuk printf() dan scanf()
#include <stdlib.h>  // Untuk malloc(), calloc(), dan free()

/*
    Fungsi alokasi_matriks membuat matriks secara dinamis.

    baris:
        Jumlah baris matriks.

    kolom:
        Jumlah kolom matriks.

    inisialisasi_nol:
        Jika nilainya 1, semua elemen matriks diisi 0 menggunakan calloc().
        Jika nilainya 0, memori disiapkan menggunakan malloc(),
        tetapi nilai awal elemennya belum tentu 0.

    Fungsi mengembalikan int ** karena matriks disimpan sebagai
    kumpulan alamat baris, dan setiap baris berisi beberapa angka.
*/
int **alokasi_matriks(int baris, int kolom, int inisialisasi_nol) {
    /*
        Buat ruang untuk menyimpan alamat setiap baris.

        Contoh:
        Jika baris = 2, maka mat dapat menyimpan alamat untuk:
        mat[0] dan mat[1].
    */
    int **mat = (int **)malloc(baris * sizeof(int *));

    /*
        Buat isi setiap baris satu per satu.

        i adalah indeks baris. Indeks dalam C dimulai dari 0,
        jadi baris pertama adalah mat[0].
    */
    for (int i = 0; i < baris; i++) {
        if (inisialisasi_nol) {
            /*
                calloc menyediakan memori untuk kolom elemen.
                Berbeda dari malloc, calloc mengisi semua elemen dengan 0.
            */
            mat[i] = (int *)calloc(kolom, sizeof(int));
        } else {
            /*
                malloc menyediakan memori untuk kolom elemen,
                tetapi nilai awalnya belum ditentukan.
            */
            mat[i] = (int *)malloc(kolom * sizeof(int));
        }
    }

    // Kembalikan alamat matriks agar dapat digunakan oleh pemanggil fungsi.
    return mat;
}

/*
    Fungsi bebaskan_matriks mengembalikan memori yang sebelumnya
    disediakan untuk matriks.

    mat:
        Matriks yang akan dibebaskan.

    baris:
        Jumlah baris matriks, supaya setiap baris dapat dibebaskan.
*/
void bebaskan_matriks(int **mat, int baris) {
    /*
        Bebaskan memori isi setiap baris terlebih dahulu.
    */
    for (int i = 0; i < baris; i++) {
        free(mat[i]);
    }

    /*
        Setelah isi baris dibebaskan, bebaskan juga memori
        yang menyimpan alamat baris-baris tersebut.
    */
    free(mat);
}

/*
    Fungsi input_matriks meminta pengguna memasukkan angka
    untuk setiap elemen matriks.

    mat:
        Matriks yang akan diisi.

    baris dan kolom:
        Ukuran matriks.

    nama:
        Nama matriks yang ditampilkan, misalnya "Matriks 1".
*/
void input_matriks(int **mat, int baris, int kolom, const char *nama) {
    // %s akan diganti dengan teks yang disimpan di dalam nama.
    printf("\nMasukkan elemen %s:\n", nama);

    /*
        Perulangan luar memilih baris.
        i bergerak dari 0 sampai baris - 1.
    */
    for (int i = 0; i < baris; i++) {
        /*
            Perulangan dalam memilih kolom pada baris tersebut.
            j bergerak dari 0 sampai kolom - 1.
        */
        for (int j = 0; j < kolom; j++) {
            /*
                i + 1 dan j + 1 dipakai agar posisi yang ditampilkan
                dimulai dari 1. Namun, indeks matriks di dalam program
                tetap dimulai dari 0.
            */
            printf("%s [%d][%d]: ", nama, i + 1, j + 1);

            /*
                Baca satu bilangan bulat dari pengguna.

                &mat[i][j] berarti alamat elemen yang akan diisi.
                & diperlukan agar scanf dapat menyimpan angka
                ke variabel tersebut.
            */
            scanf("%d", &mat[i][j]);
        }
    }
}

/*
    main adalah fungsi utama. Program mulai berjalan dari sini.
*/
int main() {
    /*
        Variabel untuk menyimpan ukuran kedua matriks:
        matriks 1 berukuran baris1 x kolom1,
        matriks 2 berukuran baris2 x kolom2.
    */
    int baris1, kolom1, baris2, kolom2;

    // Minta pengguna menentukan jumlah baris matriks pertama.
    printf("Masukkan jumlah baris matriks pertama: ");
    scanf("%d", &baris1);

    // Minta jumlah kolom matriks pertama.
    printf("Masukkan jumlah kolom matriks pertama: ");
    scanf("%d", &kolom1);

    // Minta jumlah baris matriks kedua.
    printf("Masukkan jumlah baris matriks kedua: ");
    scanf("%d", &baris2);

    // Minta jumlah kolom matriks kedua.
    printf("Masukkan jumlah kolom matriks kedua: ");
    scanf("%d", &kolom2);

    /*
        Syarat perkalian matriks:
        jumlah kolom matriks pertama harus sama dengan
        jumlah baris matriks kedua.

        Contoh:
        Matriks 1 berukuran 2 x 3 dapat dikalikan dengan
        matriks 2 berukuran 3 x 4, karena 3 == 3.
        Hasilnya berukuran 2 x 4.
    */
    if (kolom1 != baris2) {
        printf("\nMaaf, perkalian tidak dapat dilakukan!\n");
        printf("Jumlah kolom matriks pertama harus sama dengan jumlah baris matriks kedua.\n");

        // Akhiri program karena ukuran matriks tidak memenuhi syarat.
        return 0;
    }

    /*
        Buat memori untuk matriks pertama.
        Parameter terakhir 0 berarti elemen tidak perlu diisi nol.
        Pengguna akan mengisi semua elemennya nanti.
    */
    int **matriks1 = alokasi_matriks(baris1, kolom1, 0);

    /*
        Buat memori untuk matriks kedua.
        Seperti matriks pertama, nilainya akan diisi oleh pengguna.
    */
    int **matriks2 = alokasi_matriks(baris2, kolom2, 0);

    /*
        Buat matriks hasil.

        Ukurannya:
        baris matriks pertama x kolom matriks kedua.

        Parameter terakhir 1 berarti semua elemennya diisi 0.
        Ini diperlukan karena nilai hasil akan dihitung dengan penjumlahan.
    */
    int **hasil = alokasi_matriks(baris1, kolom2, 1);

    /*
        Minta pengguna memasukkan angka-angka ke matriks pertama
        dan matriks kedua.
    */
    input_matriks(matriks1, baris1, kolom1, "Matriks 1");
    input_matriks(matriks2, baris2, kolom2, "Matriks 2");

    /*
        Menghitung perkalian matriks.

        i memilih baris pada matriks hasil.
        j memilih kolom pada matriks hasil.
        k digunakan untuk mengalikan pasangan angka lalu menjumlahkannya.

        Rumus untuk setiap elemen hasil[i][j]:

        hasil[i][j] =
            matriks1[i][0] * matriks2[0][j]
          + matriks1[i][1] * matriks2[1][j]
          + ...
    */
    for (int i = 0; i < baris1; i++) {
        // Pilih setiap kolom pada matriks hasil.
        for (int j = 0; j < kolom2; j++) {
            /*
                Pasangkan angka pada baris ke-i matriks pertama
                dengan angka pada kolom ke-j matriks kedua.

                k bergerak sepanjang kolom matriks pertama.
                Karena syarat perkalian terpenuhi, batas ini juga
                sesuai dengan jumlah baris matriks kedua.
            */
            for (int k = 0; k < kolom1; k++) {
                /*
                    Ambil elemen matriks1[i][k].
                    Kalikan dengan elemen matriks2[k][j].
                    Tambahkan hasil perkaliannya ke hasil[i][j].
                */
                hasil[i][j] += matriks1[i][k] * matriks2[k][j];
            }
        }
    }

    // Tampilkan judul sebelum mencetak matriks hasil.
    printf("\nHasil perkalian matriks:\n");

    /*
        Cetak matriks hasil baris demi baris.
        Perulangan luar memilih baris dan perulangan dalam
        mencetak semua kolom pada baris tersebut.
    */
    for (int i = 0; i < baris1; i++) {
        for (int j = 0; j < kolom2; j++) {
            // %d mencetak bilangan bulat; \t memberi jarak antarkolom.
            printf("%d \t", hasil[i][j]);
        }

        // Pindah ke baris baru setelah satu baris selesai dicetak.
        printf("\n");
    }

    /*
        Bebaskan memori setelah semua matriks tidak digunakan lagi.
        Jumlah baris yang diberikan harus sesuai dengan matriksnya.
    */
    bebaskan_matriks(matriks1, baris1);
    bebaskan_matriks(matriks2, baris2);
    bebaskan_matriks(hasil, baris1);

    // Nilai 0 menandakan program selesai dengan normal.
    return 0;
}
