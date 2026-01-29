#include <stdio.h>
	 int main()
{
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	int max=0;
	if(a>b)
	{
		if(a>c)
		{
			max=a;
		}
		else
		{
			max=c;
		}
	}
	else
	{                                   //Ç¶Ì×if else 
		if(b>c)
		{
			max=b;
		}
		else
		{
			max=c;
		}
	}
	printf("The max is %d\n", max); 
	
	int f, x;
	scanf ("%d", &x);
	if(x<0)
	{
		f=-1;
	}
	else if(x==0)
	{               //¼¶ÁªµÄif-else if 
		f=0;
	} 
	else
	{
		f=2*x;
	}
	printf("%d", f);
	return 0;
} 
