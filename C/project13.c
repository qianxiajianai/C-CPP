#include<stdio.h>
	int main() 
{
	int type;
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
			break;
		case 4:
			printf("再见");
			break;
		deafault:
			printf("啊，什么啊？");
			break;
	} 
	
	scanf("%d", &type);
	switch(type){
		case 1:
		case 2:
			printf("你好");
			break;
		case 3:
			printf("晚上好");         //case只是一个路牌并不能阻止他进入下一个case 需要用break阻止 
		case 4:
			printf("再见");
			break; 
		Deafault:
			printf("啊，什么啊？");
			break;
	} 
		return 0;
}
