#include <stdio.h>
#include <math.h>

int binarySearch(int x, int y){
    int start = 1, end = x;
    while (start <= end){
        int mid = (start + end) / 2;
        double generator = ceil((float)mid + ((float)y / (mid + 1)));
        if (generator == x){
            return mid;
        }
        else if (generator > x){
            end = mid - 1;
        }
        else{
            return mid;
        }
    }
    return -1;
}

int main() {
    int testCase;
    scanf("%d", &testCase);
    int n[testCase], d[testCase];
    for (int i = 0; i < testCase; i++){
        scanf("%d", &n[i]);
        scanf("%d", &d[i]);
    }
    int cek = -1;
    for (int i = 0; i < testCase; i++){
        if (d[i] <= n[i]){
            printf("YA\n");
        }
        else{
            cek = binarySearch(n[i], d[i]);
            if (cek == -1){
                printf("TIDAK\n");
            }
            else{
                printf("YA\n");
            }
        }
    }
  	// Sebetulnya cuman butuh 2 library itu aja yang diinclude.
    return 0;
}