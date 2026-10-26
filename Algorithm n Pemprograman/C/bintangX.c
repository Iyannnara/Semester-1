#include <stdio.h>
  int main (){
    int InputNilai, UkuranGrid, baris, kolom;
    printf("masukan variabel: ");
    scanf("%d", &InputNilai);

    UkuranGrid = 2 * InputNilai - 1;

    for (baris=0; baris<UkuranGrid; baris++){
      for (kolom=0; kolom<UkuranGrid; kolom++) {

        int diagonalutama=(baris==kolom);
        int diagonalsekunder=(baris+kolom==UkuranGrid -1);

        if (diagonalutama || diagonalsekunder){
          print ("*");
        } else{
          printf (" ");
        }
        printf("\n");
      }
    }
    return 0;
  }
