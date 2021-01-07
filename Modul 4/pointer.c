#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char string[50];
    int vowels, consonants;
    vowels = consonants = 0;
    fgets(string, sizeof(string), stdin);
    for (int i = 0; string[i] != '\0'; i++){
        if (string[i] == 'a' || string[i] == 'A' || string[i] == 'e' || string[i] == 'E' || string[i] == 'i' || string[i] == 'I' || string[i] == 'o' || string[i] == 'O' || string[i] == 'u' || string[i] == 'U'){
            ++vowels;
        }
        else if ((string[i] >= 'a' && string[i] <= 'z') || (string[i] >= 'A' && string[i] <= 'Z')){
            ++consonants;
        }
    }
    printf("Jumlah vokal: %d\n", vowels);
    printf("Jumlah konsonan: %d\n", consonants);
    return 0;
}