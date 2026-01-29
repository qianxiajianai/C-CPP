#include<stdio.h>
int main() {
    char c;
    char d;
    c=1;
    d='1';
    if (c==d) {
        printf("相等\n");
    }
    else {
        printf("不相等\n");
    }
    printf("c=%d\n",c);
    printf("d=%d\n",d);

    scanf("%c",&c);
    printf("c=%d\n",c);
    printf("c='%c'\n",c);

    int i;
    scanf("%d",&i);
    c=i;
    printf("c=%d\n",c);
    printf("c='%c'\n",c);

    if (49=='1') {
        printf("OK\n");
    }

    scanf("%d %c",&i,&c);
    printf("i=%d,c=%d,c='%c'\n",i,c,c);

    c='A';
    c++;
    printf("c=%c\n",c);
    i='Z'-'A';                     //字符运算
    printf("i=%d\n",i);          //a+'A'-'a'小写变大写  a+'a'-‘A’大写变小写
    return 0;
}