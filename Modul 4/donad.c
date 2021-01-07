#include <stdio.h>
#include <string.h>

struct donad{
    char rasa[11];
    int harga;
};

int main(){
    int n, q;
    scanf("%d %d", &n, &q);
    struct donad donat[n];
    for (int i = 0; i < n; i++){
        scanf("%s", donat[i].rasa);
        scanf("%d", &donat[i].harga);
    }
    int x[q];
    for (int i = 0; i < q; i++){
        scanf("%d", &x[i]);
    }
    char *arr, *arr2;
    int max[q], min[q], jumlah[q];
    for (int i = 0; i < q; i++){
        max[i] = donat[0].harga;
        min[i] = donat[0].harga;
        arr = donat[0].rasa;
        arr2 = donat[0].rasa;
        jumlah[i] = 0;
        for (int j = 0; j < x[i]; j++){
            if (donat[j].harga > max[i]){
                max[i] = donat[j].harga;
                arr = donat[j].rasa;
            }
            if (donat[j].harga < min[i]){
                min[i] = donat[j].harga;
                arr2 = donat[j].rasa;
            }
            jumlah[i] += donat[j].harga;
        }
        printf("%d donat telah dibeli dengan total harga %d. Donat termurah yang dibeli adalah %s dan yang termahal adalah %s\n", x[i], jumlah[i], arr2, arr);
    }
    return 0;
}