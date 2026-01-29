#include <stdio.h>

int main() {
    int x;
    scanf("%d", &x);
    int mask = 1;
    while (mask * 10 <= x) {  //计算位数
        mask *= 10;
    }
    do {
        printf("%d", x / mask);
        if (mask > 9) {
            printf(" ");
        }
        x %= mask;
        mask /= 10;         //为计算下一位做准备
    } while (mask > 0);
    return 0;
}