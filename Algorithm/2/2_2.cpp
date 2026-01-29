#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int a[100]={5,1,8,4,2,5,7,4,9,10};

//原理是为真的时候，第一个数字放前面 即为假的时候，第二个数字放前面
bool mycmp(int a,int b) {
    if (a>b) return 1;            //函数从大到小排序
    return 0;
}

int main() {
    int i;
    sort(a,a+10,mycmp);
    for (i=0;i<10;i++) {
        printf("%d ",a[i]);
    }
    return 0;
}