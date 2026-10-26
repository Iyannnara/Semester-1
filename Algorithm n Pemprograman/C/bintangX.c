#include <stdio.h>
  int main (){
    int InputNilai, UkuranGrid, Baris, Kolom;
    printf("masukan variabel: ");
    scanf("%d", &InputNilai);

    UkuranGrid = 2 * NilaiInput - 1;

    for (baris=0; baris<UkuranGrid; baris++){
      for (kolom=0; kolom<UkuranGrid; kolom++) {

        int diagonalutama=(baris==kolom);
        int diagonalsekunder=(baris+kolom==UkuranGrid -1);

        if (diagonalutama || diagonal sekunder){
          print ("*");
        } else{
          printf (" ");
        }
        printf("\n");
      }
    }
    return 0;
  }
