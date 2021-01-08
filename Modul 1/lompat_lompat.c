#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a;
    long b, hasil;
    scanf("%d %ld", &a, &b);
    hasil=a+((b*(b+1))/2);
    if((a>=1 && a<=100) && (b>=1 && b<=1000000000))    
    {    
        printf("%ld\n", hasil);
    }
    else
    {
        return 0;    
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}