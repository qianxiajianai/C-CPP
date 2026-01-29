#include <stdio.h>
int main()
{
	//定义变量
	int price=0,bill=0;
	//输入金额和票面
	printf("请输入金额");
	scanf("%d",&price);
	printf("请输入票面");
	scanf("%d",&bill);                      /*计算找零 */
	//计算找零
	if (bill>=price){
		printf("应该找您%d\n",bill-price);
	} else{
		printf("您的钱不够\n");
	}

	const int MINOR=35;
	int age=0;
	printf("请输入您的年龄");
	scanf("%d",&age);
	printf("您的年龄是%d岁\n",age);      /*判断年龄*/
	if(age<MINOR){
		printf("年轻是美好的");
	}
	printf("年龄决定了你的精神世界，要好好珍惜哦\n");
	return 0;
}