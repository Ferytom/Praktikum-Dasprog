#include<stdio.h>
#include<math.h>
#include<string.h>

int main()
{
    char n[6];
    scanf("%s", n);

    int p_n = strlen(n) - 1;

    int i=0;
    while (i < p_n)
    {
        if (n[i++] != n[p_n--]){
            printf("Bambang Liken't\n");
            return 0;
        }
    }
    printf("Bambang Like Dis!\n");

    return 0;
}
