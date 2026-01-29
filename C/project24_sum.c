#include <stdio.h>
int main() {
    int n,i;
    double ret=0.0;
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        ret+=1.0/i;                  //f(n)=1+1/2+1/3+...+1/n
    }
    printf("%.1lf\n",ret);

    double sum=0.0,sign=1.0;
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        sum+=sign/i;
        sign=-sign;                                //f(n)=1-1/2+1/3-1/4+...+1/n
    }
    printf("f(%d)=%f\n",n,sum);
    return 0;
}