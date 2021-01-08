#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char ch;
    scanf("%c", &ch);
    if ((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
    {
        printf("ini huruf bro\n");
    }
    else if (ch>='0' && ch<='9')
    {
        printf("ini angka bro\n");
    }
    else
    {
        printf("ini karakter spesial bro\n");    
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
