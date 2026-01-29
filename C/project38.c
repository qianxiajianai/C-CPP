#include <stdio.h>
void swap(int a, int b);
int main()
{
    int a = 5;
    int b = 6;
    swap(a,b);
    printf("a=%d b=%d\n", a, b);
    return 0;
}
void swap(int a, int b)
{                                   //函数仅发生了传值
    int t = a;                      //在函数的参数表内的参数并不和在main中声明的参数一样
    a = b;                          //函数中的参数是在一个单独空间内的（本地变量）
    b = t;                          //并不能传出来
}