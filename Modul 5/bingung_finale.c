#include <stdio.h>
#include <math.h>

int main() {
    int testCase;
    scanf("%d", &testCase);
    float n[testCase], d[testCase];
    for (int i = 0; i < testCase; i++){
        scanf("%f", &n[i]);
        scanf("%f", &d[i]);
    }
    float x, count = 0, generator[testCase];
    for (int i = 0; i < testCase; i++){
        if (d[i] <= n[i]){
            printf("YA\n");
        }
        else{
            for (int j = 1; j <= n[i]; j++){
                x = j;
                generator[i] = x + ceil(d[i] / (x + 1));
                count++;
                if (generator[i] <= n[i]){
                    printf("YA\n");
                    break;
                } 
            }
            if (count == 0){
                printf("TIDAK\n");
            }
        }
    }
  	// Sebetulnya cuman butuh 2 library itu aja yang diinclude.
    return 0;
}