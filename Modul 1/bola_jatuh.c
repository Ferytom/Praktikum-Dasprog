#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    long long int a, b, c, d, e, f, jarak;
    scanf("%lld %lld %lld", &a, &b, &c);
    e=c+b;
    f=c-b;
    jarak=(e*a)/f;
    printf("%lld\n", jarak);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}