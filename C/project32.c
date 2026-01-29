#include <stdio.h>
int main() {
    int i;
    i=(3+4,5+6);     //逗号表达式的唯一用处for(i=1,j=10;...;...)；
    printf("%d\n",i);
    return 0;
}