#include <stdio.h>
void sum(int begin, int end);      //函数原型声明
int main()
{
    sum(1,10);   // int sum(int,int)
    sum(20,30);
    sum(35,45);                                        //声明和定义要一致
    return 0;
}
void sum(int begin, int end)       //函数定义
{
    int i;
    int sum = 0;
    for (i = begin; i <= end; i++) {
        sum += i;
    }
    printf("%d到%d的和是%d\n", begin, end, sum);
}
