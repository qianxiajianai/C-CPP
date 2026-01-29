//二分算法
//在有序数组中确定num存不存在
#include<stdio.h>
int main() {
    int n;        //数字个数
    printf("输入数列的数字个数：");
    scanf("%d",&n);
    int arr[n];    //有序数组 
    int num;
    printf("输入你想找的数字");
    scanf("%d",&num);
    int l=0,r=n,m; //左值 右值
    printf("输入数组：");
    for (int i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }
    while (l<=r) {
        m=(l+r)/2;
        {
            if (arr[m]==num) {
                printf("true");
                break;
            }
            else if (arr[m]>num) {
                r=m-1;
            }
            else {
                l=m+1;
            }
        }
    }
    printf("false");
    return 0;
}
