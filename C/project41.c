#include <stdio.h>
int main() {
    int a[]={2,4,6,7,1,3,5,9,11,13,23,14,32};   //a[2]=4   也可直接{此处[1]=...,3(a2),[5]=...}
    int i;
    printf("%lu\n",sizeof(a));
    printf("%lu\n",sizeof(a[0]));
    for (i=0; i<sizeof(a)/sizeof(a[0]); i++) {      //sizeof(a)/sizeof(a[0]总是等于元素的个数
        printf("%d\t",a[i]);
    }
    printf("\n");
    return 0;
}