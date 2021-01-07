#include <stdio.h>
#include <stdlib.h>

int main()
{
    char angka[5];
    angka[0] = 'A';
    angka[1] = 'B';
    angka[2] = 'C';
    angka[3] = 'D';
    angka[4] = 'E';
    angka[5] = 'F';

    int i = 0, j = 0;

    printf("Nilai Array yang akan ditampilkan: ");
    for (i = 0; i < 5; i++)
    {
        printf("%c ", angka[i]);
    }
    printf("\n");

    printf("Nilai Array setelah dibalik: ");
    for (j = 4; j >= 0; j--)
    {
        printf("%c ", angka[j]);
    }
    return 0;
}
