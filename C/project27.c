#include <stdio.h>
int main() {
    unsigned int c=127;
    int i=255;    //去掉unsigned变为0，同时127+1=-128，-127-1=128
    c=c+1;
    printf("c=%d,i=%d\n",c,i);

    c=-1;
    i=-1;
    printf("c=%u,i=%u\n",c,i);  //此时为unsigned类型所能储存的最大数值

    c=012; //八进制
    i=0x12;  //十六进制
    printf("c=%d,i=%u\n",c,i);     //若输出八进制则0%o，若输出十六进制则0x%x，若带字母%x小写%X大写
    return 0;
}