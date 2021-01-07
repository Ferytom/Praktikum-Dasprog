#include <stdio.h>

int fibonacci(int n){
    if ((n == 1) || (n == 2)){
        return 1;
    }
    else if(n == 0){
        return 0;
    }
    else return(fibonacci(n-1) + fibonacci (n-2));
}

int main(){
    unsigned int input;
    printf("Masukkan suku ke - n : "); scanf("%u", &input);
    if (input >= 0 && input <= 40){
        printf("%d ", fibonacci(input));
    }
    return 0;
}