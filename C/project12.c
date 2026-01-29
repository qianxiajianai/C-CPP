#include<stdio.h>
	int main() 
{
	int type;
	scanf("%d", &type);
	if(type==1)
	{
		printf("你好");
	} 
	else if(type==2)
	{
		printf("早上好");                //if else 写法 一步步运行较慢 
	} 
	else if(type==3)
	{
		printf("晚上好");
	} 
	else if(type==4)
	{
		printf("再见");
	} 
	else
	{
		printf("啊，什么啊？");
	}
	
	scanf("%d", &type);
	switch(type){
		case 1:
			printf("你好");
			break;
		case 2:
			printf("早上好");
			break;
		case 3:
			printf("晚上好");
		case 4:
			printf("再见");
		deafault:
			printf("啊，什么啊？");
	} 
		return 0;
}
