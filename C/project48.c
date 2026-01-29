#include<stdio.h>
int main() {
    char ac[]={0,1,2,3,4,5,6,7,8,9,-1};
    char *p=ac;
    char *p1=&ac[5];
    printf("p=%p\n",p);
    printf("p=%p\n",p+1);             //sizeof(char)=1
    printf("*(p+1)=%d\n",*(p+1));
    printf("p1-p=%d\n",p1-p);
    int ai[]={0,1,2,3,4,5,6,7,8,9,};
    int *q=ai;
    int *q1=&ai[6];
    printf("q=%p\n",q);
    printf("q1=%p\n",q1);           //sizeof(int)=4
    printf("*q+1=%d\n",*q+1);     //此处q1与q的地址间相差的值转化为十进制为24
    printf("q1-q=%d\n",q1-q);   //结果为24/4（int类型所占字节）=6

    for (int i=0;i<sizeof(ac)/sizeof(ac[0]);i++) {
        printf("%d\n",ac[i]);
    }
    while (*p!=-1) {
        printf("%d\n",*p++);
    }
    return 0;
}