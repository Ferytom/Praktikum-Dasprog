#include <stdio.h>
#include <math.h>

int main(){
    int N, hasil = 0;
    scanf("%d", &N);
    hasil = N;
    for (int i = 0; i <= N; i++){
        hasil += pow((N-i),2);
    }
    printf("%d", N);
    return 0;
}