#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc,char const *argv[]) {
    char s[]="hello";
    char *p=strchr(s,'l');    //第一个l
    //p=strchr(p+1,'l');     //第二个l
    char c=*p;
    *p='\0';

    char *t=(char*)malloc(strlen(s)+1);
    strcpy(t,s);
    printf("%s\n",t);
    free(t);
    *p='l';
    printf("%s",s);
    return 0;
}