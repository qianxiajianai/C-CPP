#include<stdio.h>
#include<algorithm>
#include <functional>
using namespace std;

int a[100]={5,1,8,4,2,5,7,4,9,10};

int main() {
    int i;
    sort(a+0,a+10,greater<int>());         //数组名+数字的本质是指针操作 这里是一个左闭右开的区间
    for (i=0;i<10;i++) {
        printf("%d ",a[i]);  //从大到小排序
    }
    return 0;
}