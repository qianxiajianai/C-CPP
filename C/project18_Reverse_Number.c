#include <stdio.h>

int main()
{
    int x;
    scanf("%d", &x);
    int digit;
    int ret = 0;
    while (x > 0)
    {
        digit = x % 10;
        printf("%d\n", digit);
        ret = ret * 10 + digit;                          //比如700反转后是7而不是007
        printf("x=%d,digit=%d,ret=%d\n", x, digit, ret); //调试时观察变量变化
        x/=10;
    }
    printf("%d", ret);
    return 0;
}