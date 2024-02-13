/*#define _CRT_SECURE_NO_WARNINGS
//位运算实现除法
#include <stdio.h>
#include <limits.h>

bool IsNeg(int num)
{
	return num < 0;
}

int add(int a, int b)
{
	int t = 0;
	while (b != 0)
	{
		t = a ^ b;                     //异或的本质：无进位相加
		b = (b & a) << 1;
		a = t;
	}

	return a;
}

int Reverse(int num)
{
	return add(~num, 1);
}

int minus(int a, int b)
{
	b = Reverse(b);
	return add(a, b);
}

int div(int dividend, int divisor)
{
	int a = IsNeg(dividend) ? Reverse(dividend) : dividend;
	int b = IsNeg(divisor) ? Reverse(divisor) : divisor;                    //先把两个数都换成正数
	int res = 0, i;
	for (i = 30; i >= 0; i = minus(i, 1))                                    //二进制最高位为31位，从30位到0位循环,i--也要替换掉，不能出现加减乘除
		if ((a >> i) >= b)                                                //让被除数靠近除数
		{
			res |= (1 << i);                                              //位运算或运算符把某一位赋上1的操作
			a = minus(a, b << i);                                             //乘以2的i次方就是左移i位！！！！不需要再使用数学函数，if语句成立，同时执行两句程序
		}

	return IsNeg(dividend) ^ IsNeg(divisor) ? Reverse(res) : res;         //别忘了判断原来两个数的正负，同号，异或运算符，相同为0,不同为1
}

int multi(int a, int b)
{
	int res = 0;
	while (b != 0)
	{
		if ((b & 1) != 0)
			add(res, a);
		a <<= 1;                                                        //别忘了赋值！！！！
		b >>= 1;
	}

	return res;
}

int min(int dividend, int divisor)
{
	int res = 0, t = 0;
	res = div(add(dividend, 1), divisor);
	t = minus(dividend, multi(res, divisor));
	res = add(res, div(t, divisor));

	return res;
}

int main()
{
	int dividend = INT_MIN, divisor = 1, res = 0;                                //已规定divisor不为0，其实结果输出int最大值或最小值，正负与dividend正负有关
	if (dividend == INT_MIN && divisor == INT_MIN)
		res = 1;
	else if (divisor == INT_MIN)
		res = 0;
	else if (dividend == INT_MIN)
		res = min(dividend, divisor);
	else
		res = div(dividend, divisor);
	printf("%d\n", res);
	printf("%d\n", INT_MAX);                                            //要包含头文件
	printf("%d\n", INT_MIN);

	return 0;
}*/