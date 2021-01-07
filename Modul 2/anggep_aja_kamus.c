/*
Menggunakan konsep konversi bilangan desimal (basis 10) ke basis 26 (A - Z) 
lakukan looping hingga 14 karakter. Pada setiap iterasi print n % 26 + 'A', lalu bagi n dengan 16.
*/

#include <stdio.h>
#define ull unsigned long long

int main() {
    ull in, i; int t;
    scanf("%d", &t);
    while(t--) {
        scanf("%llu", &in);
        for(i=0; i<14; i++)
            printf("%c", (int)(in % 26) + 'A'), in /= 26;
        printf("\n");
    }
    return 0;
}
