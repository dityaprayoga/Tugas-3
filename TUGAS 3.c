#include <stdio.h>

int main(void)
{   
    int i, j, t;
    printf("Program Perulangan Mencetak Pola Bintang");
    printf("\nMasukan Nilai Tinggi\t: ");
    scanf("%i", &t);
    
    if (t % 2 == 0) {
        printf  ("\nTerjadi Kesalahan");
        printf("\nNilai yang diinput harus bilangan ganjil");
    }
    else 
    { for (i = 1; i <= t; i++) {
        for (j = 1; j <= i; j++){
            printf ("*");
        }
        printf ("\n");
    }
    for (i=t; i>=1; i--) {
        for (j = 1; j<=i; j++) {
            printf ("*");
        }
        printf ("\n");
    }
    
    }
  
    return 0;
}