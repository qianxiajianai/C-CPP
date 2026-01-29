#include <stdio.h>
#include <stdbool.h>
int main() {
    int i=32768;
    printf("123\t456\n");     //\t是回退但并不能删除

    short s=(short)i;
    printf("%d\n",i);      //强制类型转换不会改变值本身

    bool b=6>5;
    bool t=true;
    t=2;                       //逻辑类型bool布尔
    printf("%d\n",b);

    return 0;
}