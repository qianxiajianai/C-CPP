#include <stdio.h>
int main() {
    const int size = 3;
    int board[size][size];
    int i,j;
    int numberOfO,numberOfX;      //1：X，0：O
    int result=-1;  //-1：平局，1：X赢，0：O赢
    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
            scanf("%d",&board[i][j]);
        }
    }
    for (i = 0; i < size && result == -1; i++) {            //检查行
        numberOfX = numberOfO = 0;
        for (j = 0; j < size; j++) {
            if (board[i][j] == 1) {
                numberOfX++;
            }
            else {
                numberOfO++;
            }
            if (numberOfO == size) {
                result = 0;
            }
            else if (numberOfX == size) {
                result = 1;
            }
        }
    }
    if (result == -1) {
        for (j = 0; j < size; j++) {                 //检查列
            numberOfX = numberOfO = 0;
            for (i = 0; i < size; i++) {
                if (board[i][j] == 1) {
                    numberOfX++;
                }
                else {
                    numberOfO++;
                }
                if (numberOfO == size) {
                    result = 0;
                }
                else if (numberOfX == size) {
                    result = 1;
                }
            }
        }
        numberOfX = numberOfO = 0;
        for (i = 0; i < size; i++) {           //检查对角线1
            if ( board[i][i] == 1 ) {
                numberOfX ++;
            }
            else {
                numberOfO ++;
            }
        }
        for (i = 0; i < size; i++) {               //检查对角线2
            if (board[i][size-1-i] == 1) {
                numberOfX++;
            }
            else {
                numberOfO++;
            }
        }
        if (numberOfO == size) {
            result = 0;
        }
        else if (numberOfX == size) {
            result = 1;
        }
        numberOfX = numberOfO = 0;
    }
    printf("%d",result);
    return 0;
}