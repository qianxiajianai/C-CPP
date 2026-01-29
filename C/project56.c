#include <stdio.h>
#include <string.h>

char* mycpy(char *dst,const char* src) {
    int idx=0;
    /*while(src[idx]!='\0') {
        dst[idx]=src[idx];
        idx++;                 //数组版本
    }
    dst[idx]='\0';*/
    char* ret=dst;
    while(*src!='\0') {
        *dst=*src;
        dst++;
        src++;
    }
    *dst='\0';
    return ret;
}
int main(int argc,char const *argv[]) {
    char s1[]="abc";
    char s2[]="abc";
    strcpy(s2,s1);
    return 0;
}