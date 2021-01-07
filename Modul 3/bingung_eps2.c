#include <stdio.h>
#include <math.h>

int pangkat(int x, int y){
    if (y == 1){
        return x;
    }
    else {
        return x * (pangkat(x, y - 1));
    }
}

int main(){
    int x, y, a, z, n = 1000000007;
    scanf("%d", &x); scanf("%d", &y);
    z = pangkat(x, y);
    a = fmod(z, n);
    printf("%d", a);
    return 0;
}