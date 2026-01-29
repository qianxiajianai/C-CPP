#include<stdio.h>
#include<algorithm>
using namespace std;

int a[100]={5,1,8,4,2,5,7,4,9,10};

struct Big {
    bool operator()(int a,int b) {         //结构体从大到小排序
        return a>b;
    }
};

int main() {
    int i;
    sort(a+0,a+10,Big());         //数组名+数字的本质是指针操作 这里是一个左闭右开的区间
    for (i=0;i<10;i++) {
        printf("%d ",a[i]);  //从小到大排序
    }
    return 0;
}