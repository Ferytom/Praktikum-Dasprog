#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int linear(int x[], int y, int n){
    for (int i = 0; i < n; ++i){
        if (y == i){
            return x[i];
        }
    }
    return -1;
}

int main() {
    int p;
    scanf("%d", &p);
    int arr[p];
    for (int i = 0; i < p; ++i){
        scanf("%d", &arr[i]);
    }
    int temp;
    for (int i = 0; i < p; ++i){
        for (int j = i + 1; j < p; ++j){
            if (arr[i] < arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    
    int search;
    scanf("%d", &search);
    search -= 1;
    int ans = linear(arr, search, p);
    printf("%d\n", ans);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
