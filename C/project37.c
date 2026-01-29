#include <stdio.h>
void cheer(int i) {
    printf("cheer %d\n",i);
}
int main() {                            //悄悄自动转换了类型
    cheer(2.4);
}
