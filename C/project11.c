#include<stdio.h>
	int main()
{
	const int READY = 24;
	int code = 0;
	int count = 0;
	scanf("%d %d", &code, &count);
	if(code==READY)
	{
		if(count<20)
		{
			printf("一切正常\n");         //嵌套if else   
		}
		else 
		{                         //else总是和最近的if匹配 无法用缩进匹配  建议：if else后面总是使用大括号 
			printf("继续等待\n");
		}
	}
	
	int type;
	scanf("%d", &type);
	if(type==1)
	{
		printf("你好");
	} 
	else if(type==2)
	{
		printf("早上好");
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
		return 0;
}
