#include <stdio.h>
	int main()
{
	int a,b;
	printf("请输入两个整数：");
	scanf("%d %d", &a, &b);
	int max=0;
	if(a>b)
	{
		max = a;                   /*方案一*/ 
	}
	else
	{
		max = b;
	}
	printf("大的那个是%d\n",max);
	
	printf("请输入两个整数：");
	scanf("%d %d", &a, &b);
	int MAX=b;
	if(a>b)
	{                             /*方案二*/ 
		MAX = a;
	}
	printf("大的那个是%d\n",MAX);
	
	const int PASS=60;
	int score;
	printf("请输入成绩：");
	scanf("%d", &score);
	printf("你的成绩是%d.\n", score);         //不带大括号的if else用法(只适用于if else后只有一句语句)
	if(score<PASS)
		printf("很遗憾，这个成绩没有及格。") ;
	else
		printf("祝贺你，这个成绩及格了。");
	printf("再见\n") ;
	return 0;
}
