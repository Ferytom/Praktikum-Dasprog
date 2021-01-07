#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);
    char str[n][100];
    for (int i = 0; i < n; i++){
        scanf("%s", str[i]);
    }
    
    char temp[100];
    for (int i = 0; i < n; i++){
        for (int j = i + 1; j < n; j++){
            if (strcmp(str[i], str[j]) < 0){
                strcpy(temp, str[i]);
                strcpy(str[i], str[j]);
                strcpy(str[j], temp);
            }
        }
    }
    
    for (int i = 0; i < n; i++){
        printf("%s\n", str[i]);
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
