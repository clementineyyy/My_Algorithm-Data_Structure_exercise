/*#define _CRT_SECURE_NO_WARNINGS
//位运算实现减法：加法中实现相反数：按位取反再加一（包括符号位）
#include <stdio.h>

int add(int a, int b)
{
	int t = 0;
	while (b != 0)
	{
		t = a ^ b;
		b = (a & b) << 1;
		a = t;
	}

	return a;
}


int minus(int a, int b)
{
	b = add(~b, 1);                     //按位取反再加一也要用位运算的加法来实现，不可以含有加号
	return add(a, b);
}

int main()
{
	int a = 0, b = 0, res = 0;
	scanf("%d %d", &a, &b);
	res = minus(a, b);
	printf("%d\n", res);

	return 0;
}*/