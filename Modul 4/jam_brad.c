#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

struct waktu{
    unsigned int jam, menit, detik;
};

int main() {
    struct waktu w1, w2, hasil;
    scanf("%u", &w1.jam);
    if (w1.jam <= 24){
        scanf("%u", &w1.menit);
        if (w1.menit <= 59){  
            scanf("%u", &w1.detik);
            if (w1.detik <= 59){
                scanf("%u", &w2.jam);
                if (w2.jam <= 24){
                    scanf("%u", &w2.menit);
                    if (w2.menit <= 59){
                        scanf("%u", &w2.detik);
                        if (w2.detik <= 59){
                            int total1, total2, total3;
                            total1 = (w1.jam * 3600) + (w1.menit * 60) + w1.detik;
                            total2 = (w2.jam * 3600) + (w2.menit * 60) + w2.detik;
                            if (total1 > total2){
                                total3 = total1 - total2;
                                hasil.jam = total3 / 3600;
                                hasil.menit = (total3 % 3600) / 60;
                                hasil.detik = (total3 % 3600) % 60;
                                printf("Beda Waktunya : %d:%d:%d - %d:%d:%d = %d:%d:%d", total1 / 3600, (total1 % 3600) / 60, (total1 %3600) % 60, total2 / 3600, (total2 % 3600) / 60, (total2 % 3600) % 60, hasil.jam, hasil.menit, hasil.detik);
                            }
                            else if (total2 >= total1){
                                total3 = total2 - total1;
                                hasil.jam = total3 / 3600;
                                hasil.menit = (total3 % 3600) / 60;
                                hasil.detik = (total3 % 3600) % 60;
                                printf("Beda Waktunya : %d:%d:%d - %d:%d:%d = %d:%d:%d", total2 / 3600, (total2 % 3600) / 60, (total2 %3600) % 60, total1 / 3600, (total1 % 3600) / 60, (total1 % 3600) % 60, hasil.jam, hasil.menit, hasil.detik);
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;
}
