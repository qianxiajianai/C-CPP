#include <stdio.h>

int main()
{
    int x;
    //scanf("%d",&x);
    x=2;
    int cnt=0; //计数器
    //for (x=2;x<100;x++)  //输出100以内的素数
    //while ( cnt<50 )      //while循环格式的输出50个素数
    for (x=2;cnt<50;x++)        //for循环格式的输出50个素数
    {
        int i;
        int isPrime=1;  //x是素数
        for (i=2;i<x;i++) {
            if (x%i==0) {
                isPrime=0;
                break;
            }
        }
        if (isPrime==1) {
            printf("%d ",x);
            cnt ++;
        }
       // x++;     //while循环格式条件
    }
    printf("\n");
    return 0;
}