#include <stdio.h>
int main()
{
	int A=5, B=3, C;
	C=A;
	A=B;
	B=C;
	printf("交换后A=%d和B=%d", A, B);            //交换两个变量的值
	return 0;
}