/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <limits.h>

bool IsNeg(int num)
{
	return num < 0;
}

int add(int a, int b)
{
	while (b != 0)
	{
		unsigned int carry = a & b;
		a = a ^ b;                     //异或的本质：无进位相加
		b = carry << 1;
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

int divi(int dividend, int divisor)
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
	unsigned int x = IsNeg(a) ? Reverse(a) : a;
	int y = IsNeg(b) ? Reverse(b) : b;
	int res = 0;
	while (y != 0)
	{
		if ((y & 1) != 0)
			res = add(res, x);                  //res赋值！！！！
		x <<= 1;                                                        //别忘了赋值！！！！
		y >>= 1;
	}

	return IsNeg(a) ^ IsNeg(b) ? Reverse(res) : res;
}

int min(int dividend, int divisor)
{
	int res = 0, t = 0;
	res = divi(add(dividend, 1), divisor);
	printf("%d\n", res);
	t = minus(dividend, multi(res, divisor));
	printf("%d\n", t);
	res = add(res, divi(t, divisor));
	printf("%d\n", res);

	return res;
}

int divide(int dividend, int divisor) {
	int res = 0;
	if (dividend == INT_MIN && divisor == INT_MIN)
		res = 1;
	else if (divisor == INT_MIN)
		res = 0;
	else if (dividend == INT_MIN)
	{
		if (divisor == Reverse(1))
			res = INT_MAX;
		else
			res = min(dividend, divisor);
	}
	else
		res = divi(dividend, divisor);

	return res;
}

int main()
{
	int dividend = INT_MIN, divisor = -3, res = 0;
	res = divide(dividend, divisor);
	printf("%d\n", res);

	return 0;
}*/