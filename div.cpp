/*#define _CRT_SECURE_NO_WARNINGS
//λ����ʵ�ֳ���
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
		t = a ^ b;                     //���ı��ʣ��޽�λ���
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
	int res = 0;
	while (b != 0)
	{
		if ((b & 1) != 0)
			add(res, a);
		a <<= 1;                                                        //�����˸�ֵ��������
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
	int dividend = INT_MIN, divisor = 1, res = 0;                                //�ѹ涨divisor��Ϊ0����ʵ������int���ֵ����Сֵ��������dividend�����й�
	if (dividend == INT_MIN && divisor == INT_MIN)
		res = 1;
	else if (divisor == INT_MIN)
		res = 0;
	else if (dividend == INT_MIN)
		res = min(dividend, divisor);
	else
		res = div(dividend, divisor);
	printf("%d\n", res);
	printf("%d\n", INT_MAX);                                            //Ҫ����ͷ�ļ�
	printf("%d\n", INT_MIN);

	return 0;
}*/