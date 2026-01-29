#include <stdio.h>
#include <string.h>

int mycmp(const char* s1,const char* s2) {
    /*
    int idx =0;
    while (s1[idx]==s2[idx]&&s1[idx]!='\n') {       //数组形式
        idx++;
    }
    */
    while ((*s1)==(*s2)&&(*s1)!='\0') {
        s1++;
        s2++;
    }
    return *s1-*s2;
}
int main(int argc,char const *argv[]) {
    char s1[]="abc";
    char s2[]="abc ";
    printf("%d\n",mycmp(s1,s2));     //等于零时判断相等
    printf("%d\n",'a'-'A');
    return 0;
}