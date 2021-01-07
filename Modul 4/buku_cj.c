#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

struct perpustakaan{
    char nama[30];
    int max;
};

struct bukuCj{
    char judul[30];
    int tahun;
};

int main(){
    int n, b;
    scanf("%d", &n);
    if (n >= 1 && n <= 10){
        struct perpustakaan perpus[n];
        int jumlah = 0;
        for (int i = 0; i < n; i++){
            scanf(" %[^\n]s", perpus[i].nama);
            scanf("%d", &perpus[i].max);
            jumlah += perpus[i].max;
        }
        scanf("%d", &b);
        if (b >= 1 && b <= 100){
            struct bukuCj buku[b];
            int totalbuku = 0, total = 0;
            for (int i = 0; i < b; i++){
                scanf(" %[^\n]s", buku[i].judul);
                scanf("%d", &buku[i].tahun);
                if (buku[i].tahun > 2010 && buku[i].tahun <= 2020){
                    totalbuku++;
                }
                total++;
            }            
            if (totalbuku > jumlah){
                printf("Tidak dapat input buku lagi karena sudah penuh!\n");
            }
            int counter = 0, terisi;
            for (int j = 0; j < n; j++){
                printf("%d. %s :\n", j + 1, perpus[j].nama);
                if (counter >= totalbuku){
                    printf("Tidak ada buku tersisa untuk perpustakaan ini\n");
                }                    
                else{
                    int i = 0;
                    terisi = 0;
                    while (i < perpus[j].max){
                        if (counter > total){
                            break;
                        }
                        if (terisi >= perpus[j].max){
                            break;
                        }
                        if (buku[counter].tahun > 2010){
                            printf("%s\n", buku[counter].judul);
                            printf("Tahun Terbit : %d\n", buku[counter].tahun);
                            terisi++;
                        }
                        counter++;
                    }
                }
            }
        }      
    }   
    return 0;
}