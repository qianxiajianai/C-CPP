#include <stdio.h>

int isPrime(int i) {
    int ret = 1;
    int k;
    for (k = 2; k < i - 1; k++) {
        if (i % k == 0) {              //判断素数函数
            ret = 0;
            break;
        }
    }
    return ret;
}

void sum_range(int begin, int end)
{
    int sum = 0;
    int i;
    for (i = begin; i <= end; i++) {                        //求和函数
        sum += i;
    }
    printf("%d到%d的和是%d\n", begin, end, sum);
}

int main() {
    int m, n;
    int sum = 0;
    int cnt = 0;
    int i;
    scanf("%d %d", &m, &n);
    // m=10, n=31;
    if (m == 1) m = 2;
    for (i = m; i <= n; i++) {
        if (isPrime(i)) {
            sum += i;
            cnt++;
        }
    }
    printf("%d %d\n", cnt, sum);

    for (i = 1, sum = 0; i <= 10; i++) {
        sum += i;
    }
    printf("%d到%d的和是%d\n", 1, 10, sum);
    for (i = 20, sum = 0; i <= 30; i++) {
        sum += i;
    }
    printf("%d到%d的和是%d\n", 20, 30, sum);                //原始求和方法
    for (i = 35, sum = 0; i <= 45; i++) {
        sum += i;
    }
    printf("%d到%d的和是%d\n", 35, 45, sum);


    sum_range(1, 10);
    sum_range(20, 30);
    sum_range(35, 45);             //利用函数求和
    return 0;
}