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
		a = a ^ b;                     //���ı��ʣ��޽�λ���
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
	int b = IsNeg(divisor) ? Reverse(divisor) : divisor;                    //�Ȱ�����������������
	int res = 0, i;
	for (i = 30; i >= 0; i = minus(i, 1))                                    //���������λΪ31λ����30λ��0λѭ��,i--ҲҪ�滻�������ܳ��ּӼ��˳�
		if ((a >> i) >= b)                                                //�ñ�������������
		{
			res |= (1 << i);                                              //λ������������ĳһλ����1�Ĳ���
			a = minus(a, b << i);                                             //����2��i�η���������iλ������������Ҫ��ʹ����ѧ������if��������ͬʱִ���������
		}

	return IsNeg(dividend) ^ IsNeg(divisor) ? Reverse(res) : res;         //�������ж�ԭ����������������ͬ�ţ�������������ͬΪ0,��ͬΪ1
}

int multi(int a, int b)
{
	unsigned int x = IsNeg(a) ? Reverse(a) : a;
	int y = IsNeg(b) ? Reverse(b) : b;
	int res = 0;
	while (y != 0)
	{
		if ((y & 1) != 0)
			res = add(res, x);                  //res��ֵ��������
		x <<= 1;                                                        //�����˸�ֵ��������
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