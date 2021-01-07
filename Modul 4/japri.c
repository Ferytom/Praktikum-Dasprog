#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

struct kontak{
    char nama[11], nomor[11];
};

int main() {
    int n, q;
    scanf("%d %d", &n, &q);
    struct kontak zyd[n];
    for (int i = 0; i < n; i++){
        scanf("%s", zyd[i].nama);
        scanf("%s", zyd[i].nomor);
    }
    char nama_dicari[q][11];
    for (int i = 0; i < q; i++){
        scanf("%s", nama_dicari[i]);
    }
    int cek;
    for (int j = 0; j < q; j++){
        cek = 0;
        for (int i = 0; i < n; i++){
            if (strcmp(zyd[i].nama, nama_dicari[j]) == 0){
                printf("%s\n", zyd[i].nomor);
                cek = 1;
                break;
            }
        }
        if (cek == 0){
            printf("NIHIL\n");
        }
    }
/* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}