//水仙花数是指一个N位正整数（N>=3），他的每个位上的数字的N次幂之和等于它本身
#include <stdio.h>
#include <math.h>
int main() {
    int n;
    scanf("%d",&n);
    int first=1;
    int i=1;
    for(i;i<n;i++) {
        first*=10;
    }
    //遍历所有n位数
    i=first;
    for (i;i<first*10;i++) {
        int t=i,sum=0;
        do {
            int d=t%10;
            t/=10;
            sum+=pow(d,n);
        } while (t>0);
        if (sum==i) {
            printf("%d\n",i);
        }
    }
    return 0;
}