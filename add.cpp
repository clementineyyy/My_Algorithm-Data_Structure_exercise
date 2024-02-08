/*#define _CRT_SECURE_NO_WARNINGS
//用位运算实现加法：计算机实现加法的底层逻辑
//异或是无进位相加，结合进位
#include <stdio.h>

int add(int a, int b)
{
	int t = 0;                        //使用中间变量暂时保存异或后的结果
	while (b!=0)                      //不停循环直到进位信息是0
	{
		t = a ^ b;
		b = (a & b) << 1;             //表示进位信息，与运算后是这个位置为1，进位要左移一位
		a = t;
	}

	return a;
}

int main()
{
	int a = 0, b = 0, res = 0;
	scanf("%d %d", &a, &b);
	res = add(a, b);                 //加上负数也可以
	printf("%d\n", res);

	return 0;
}*/