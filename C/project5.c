#include<stdio.h>
int main()
{
	int a=10;

	printf("a++=%d\n", a++);        //先使用a的值然后再让a+1，所以a++输出a
	printf("a=%d\n", a);           //a++执行后的值

	printf("++a=%d\n", ++a);         //先让a+1然后再使用a的值，所以++a输出a+1
	printf("a=%d\n", a);            //++a执行后的值
	return 0;
}