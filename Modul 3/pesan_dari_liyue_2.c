/*
Pengecekan bisa menggunakan bantuan array baru yang bisa digunakan untuk menandai apakah node tersebut pernah dilalui / pernah dicek. 
Pengecekan daerah dilakukan dengan mengecek apakah 4 node disekitarnya yaitu kanan, kiri, atas, bawahnya tidak berisi 0 dan belum pernah dikunjungi. 
Apabila pernyataan tadi benar, maka pengecekan dilanjut sampai menemukan node yang berisi 0 atau sudah pernah dikunjungi. 
Selagi kita melintasi node node ini, kita juga menghitung setiap isinya dan menghitung jumlah node yang telah kita lalui.
*/
#include <stdio.h>
#include <stdbool.h>

void draw();
int check(int,int);
bool isNotVisited(int,int);

int node = 0;
int map[10][10] = {0};
int visit[10][10] = {0};
int fixrow = 0;
int fixcol = 0;

int main(){
    char input;
    int mapInput;
    int column = 0;
    scanf("%d",&column);
    for(int i = 0; i < column; i++){
        for(int j = 0; j < column;j++){
            scanf("%d",&map[i][j]);
        }
    }
    fixrow = column;
    fixcol = column;
    draw();
}

void draw(){
    int column = 0;
    int row = 0;
    int part = 0;
    while(column != fixrow && row != fixcol){
        if(map[row][column] != 0 && visit[row][column] == 0){
            node = 0;
            int total = 0;
            total = check(row,column);
            part++;
            double dangerlevel = (double)total/node;
            printf("daerah %d : total kesulitan %d dengan %d node, danger level : %.2lf\n",part,total,node,dangerlevel);
        }
        column++;
        if(column == fixcol){
            row++;
            column = 0;
        }
    }
}

int check(int row, int column){
    if(isNotVisited(row,column)){
        visit[row][column] = 1;
        node++;
        return map[row][column] + check(row + 1,column) + check(row,column + 1) + check(row - 1,column) + check(row,column - 1);
    }
    return 0;
}

bool isNotVisited(int row,int column){
    if(row >= 0 && row < fixrow && column >= 0 && column < fixcol && map[row][column] != 0 && visit[row][column] == 0){
        return true;
    }
    return false;
}