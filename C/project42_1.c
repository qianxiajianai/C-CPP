#include <stdio.h>

int isPrime(int x, int knownPrimes[], int numberOfKnownPrimes);

int main(void)
{
    int prime[10] = {2};
    int count = 1;
    int i = 3;

    {
        int i;
        printf("\t\t");
        for (i = 0; i < 10; i++) {
            printf("%d\t", i);
        }
        printf("\n");
    }
    while ( count < 10 ) {
        if ( isPrime(i, prime, count) == 1) {
            prime[count++] = i;
        }
        {
            printf("i=%d \tcnt=%d\t",i, count);
            int i;
            for ( i=0; i<10; i++) {
                printf("%d\t", prime[i]);
            }
            printf("\n");
        }
        i++;
    }

    for ( i=0; i<10; i++) {
        printf("%d", prime[i]);
        if ( (i+1)%5 ) printf("\t");
        else printf("\n");
    }
    return 0;
}
int isPrime(int x, int knownPrimes[], int numberOfKnownPrimes)
{
    int ret=1;
    int i;
    for (i=0; i<numberOfKnownPrimes; i++) {
        if (x%knownPrimes[i]==0) {
            ret = 0;
            break;
        }
    }
    return ret;
}
