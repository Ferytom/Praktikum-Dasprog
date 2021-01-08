#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a, b, P, M, K, B;
    char operasi;
    scanf("%d %d\n%c", &a, &b, &operasi);
    if((a>=0 && a<=999) && (b>=0 && b<=999))
    {
        if(operasi=='P')
        {
            P=a+b;
            printf("%d\n", P);
        }
        else if(operasi=='M')
        {
            M=a-b;
            printf("%d\n", M);
        }
        else if(operasi=='K')
        {
            K=a*b;
            printf("%d\n", K);
        }
        else if(operasi=='B')
        {
            if(b==0)
            {
                printf("Maaf, input anda salah\n");
            }
            else
            {
                B=a/b;
                printf("%d\n", B);
            }
        }
    }
    else
    {
        printf("Maaf, input anda salah\n");
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
