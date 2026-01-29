#include<stdio.h>

int main()
{
	const int AMOUNT = 100;    //定义整型常量AMOUNT
	int price = 0;

	printf("请输入金额(元)：");
	scanf("%d", &price);       //scanf读取输入时需要加上&
	printf("请输入票面：");
	scanf("%d", &AMOUNT);
	int change = AMOUNT - price;
	printf("找零%d元\n", change) ;

	int a;
	int b;
	printf("请输入两个整数：");
	scanf("%d %d", &a, &b);
	printf("%d + %d = %d\n", a, b, a + b);

	printf("请分别输入身高的英尺和英寸"
		"如输入\"5 7\"表示5英尺7英寸：");
	double foot;
	double inch;
	scanf("%lf %lf", &foot, &inch);
	printf("身高为%f米\n",
		((foot + inch / 12.0) * 0.3048));

	int hour1 , minute1;
	int hour2 , minute2;
	scanf("%d %d", &hour1, &minute1);
	scanf("%d %d", &hour2, &minute2);
	int t1 = hour1 * 60 + minute1;
	int t2 = hour2 * 60 + minute2;
	int t = t2 - t1;
	printf("时间差为%d小时%d分钟", t/60, t%60);

	return 0;
}