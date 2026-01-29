/*# 构造素数表
- 欲构造n以内的素数表
1. 令x为 2
2. 将2x、3x、x直至ax < n的数标记为非素数
3. 令x为下一个没有被标记为非素数的数，重复 2；直到所有的数都已经尝试完毕
*/
#include <stdio.h>

int main()
{
    const int maxNumber = 25;
    int isPrime[maxNumber];
    int i;
    int x;
    
    for (i = 0; i < maxNumber; i++) {
        isPrime[i] = 1;
    }
    
    for (x = 2; x < maxNumber; x++) {
        if (isPrime[x]) {
            for (i = 2; i * x < maxNumber; i++) {
                isPrime[i * x] = 0;
            }
        }
    }
    
    for (i = 2; i < maxNumber; i++) {
        if (isPrime[i]) {
            printf("%d\n", i);
        }
    }
    return 0;
}