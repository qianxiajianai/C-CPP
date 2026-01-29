#include <stdio.h>
int main()
{
	double a, b;
	scanf("%lf %lf", &a, &b);               // 计算平均值
	double average = (a + b) / 2;
	printf("a 和 b 的平均值是: %lf\n", average);
	return 0;
}