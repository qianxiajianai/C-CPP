#include <stdio.h>
#include <stdlib.h>
int main(void) {
    void *p;
    int cnt=0;
    while ((p=malloc(100*1024*1024))) {        //p为0的时候
        cnt++;
    }
    printf("系统分配了%d00MB内存\n",cnt);
    return 0;
}