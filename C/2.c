#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int A,B,C;
    scanf("%d %d %d",&A,&B,&C);
    int max = A;
    if (B > max) {
        max = B;
    }
    if (C > max) {
        max = C;
    }
    int min = A;
    if (B < min) {
        min = B;
    }
    if (C < min) {
        min = C;
    }
    int mid = A + B + C - max - min;
    printf("%d",max+min-(max-mid));
    return 0;
}