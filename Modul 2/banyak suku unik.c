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
