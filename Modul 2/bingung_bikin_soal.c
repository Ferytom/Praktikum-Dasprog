/*
Gunakan 2 string berukuran 10^6 + 2 untuk menyimpan A dan B.

Jumlahkan A[i] dan B[i] dari belakang dan simpan nilai carry untuk ditambahkan pada digit depannya.

Contoh 67 + 89

A[0] = 6

A[1] = 7

B[0] = 8

B[1] = 9

Iterasi pertama :

A[1] = (B[1] + A[1]) % 10 = 6

carry = (B[1] + A[1]) / 10 = 1

Iterasi kedua :

A[0] = (B[0] + A[0] + carry) % 10 = 5

carry = (B[0] + A[0]) / 10 = 1

Jawaban CarryA[0]A[1] = 156

Apabila panjang B lebih dari A, sama saja. Hanya perlu menambahkan digit2 depan dari B dengan carry.
*/

#include <stdio.h>
#include <string.h>
#define MAX 1000002
char A[MAX], B[MAX];
int main() {
    int n, i;
    scanf("%d", &n);
    for(i = 0; i < n; i++) {
        scanf("%s %s", A, B);
        int a_len = strlen(A), b_len = strlen(B);
        short carry = 0;
        int j, k;
        for(j=a_len - 1, k = b_len - 1; j >= 0 && k >= 0; j--, k--) {
            int tambah = A[j] + B[k] - 2*'0' + carry;
            B[k] = (tambah % 10) + '0';
            carry = tambah / 10;
        }
        if(b_len > a_len)
            for(k = b_len - a_len - 1; k >= 0; k--) {
                int tambah = B[k] - '0' + carry;
                B[k] = (tambah % 10) + '0';
                carry = tambah / 10;
            }
        if(carry > 0)
            printf("%hd", carry);
        for(j=0; j<b_len; j++)
            putchar(B[j]);
        putchar('\n');
    }
}