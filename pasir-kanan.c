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
    }
    return 0;
 }
 