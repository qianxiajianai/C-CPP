#include<stdio.h>
int main()
{
	int x;
	int n=0;
	scanf("%d", &x);
	if(x>999)
	{
		n=4;
	}
	else if(x>99)
	{
		n=3;
	}
	else if(x>9)
	{
		n=2;
	}
	else if(x>0)
	{
		n=1;
	}
	printf("%d\n",n);

	n=0;
	scanf("%d", &x);
	n++;
	x/=10;       //¿¼ÂÇµ½x=0µÄ»°
	while(x>0)
	{
		n++;
	}
	printf("%d\n", n);
	return 0;
}