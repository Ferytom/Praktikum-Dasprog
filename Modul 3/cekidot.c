#include <stdio.h>

int armstrong(int x);
int prima(int x);
int sempurna(int x);

int main(){
    int input;
    scanf("%d", &input);
    if (input <= 9999)
    prima(input);
    armstrong(input);
    sempurna(input);
    return 0;
}

int armstrong(int x){
    int y = x, sisa, hasil = 0;
    while (y != 0){
        sisa = y % 10;
        hasil += sisa * sisa * sisa *sisa;
        y /= 10;
    }
    if (hasil == x){
        printf("%d adalah bilangan Armstrong\n", x);
    }
    else printf("%d bukan bilangan Armstrong\n", x);
    return 0;
}

int prima(int x){
    int y;
    if (x <= 1){
        printf("%d bukan bilangan prima\n", x);
    }
    else {
        if (x == 2){
            printf("%d adalah bilangan prima\n", x);
        }
        else {
            for (int i = 2; i < x; i++){
                if (x % i == 0){
                    y = 0;
                    break;
                }
                else {
                    y = 1;
                }
            }
            if (y == 0){
                printf("%d bukan bilangan prima\n", x);
            }
            else {
                printf("%d adalah bilangan prima\n", x);
            }
        }
    }
    return 0;
}

int sempurna(int x){
    int y = 0;
    for (int i = 1; i < x; i++){
        if (x % i == 0){
            y += i;
        }
    }
    if (y == x){
        printf("%d adalah bilangan sempurna\n", x);
    }
    else {
        printf("%d bukan bilangan sempurna\n", x);
    }
    return 0;
}