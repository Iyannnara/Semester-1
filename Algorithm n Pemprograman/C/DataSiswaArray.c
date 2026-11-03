#include <stdio.h>

int main() {
    int n;
    printf("Masukkan jumlah data yang ingin diinput: ");
    scanf("%d", &n);
    
    float nilai[n];
    for (int i = 0; i < n; i++) {
        printf("Input data ke-%d: ", i);
        scanf("%f", &nilai[i]);
    }

    for (int i = 0; i < n; i++) {
        printf("Output Data ke-%d = %.2f\n", i, nilai[i]);
    }

    return 0;
}