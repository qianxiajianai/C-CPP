#include <stdio.h>
int main() {
    double ff=1234.56789;
    printf("%E,%f\n",ff,ff);   //%e或%E为科学计数法表达
    ff=1E-10;
    printf("%E,%.16f\n",ff,ff);
    double a=0.0049;           //精度研究
    printf("%.30f",a);
    return 0;
}