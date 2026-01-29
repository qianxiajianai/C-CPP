#include <stdio.h>
int main() {
    int a=6;
    printf("sizeof(int)=%ld\n",sizeof(int));
    printf("sizeof(a)=%ld\n",sizeof(a));

    int i=0;
    int p;
    p=(int)&i;
    printf("0x%x\n",p);
    printf("%p\n",&i);
    return 0;
}