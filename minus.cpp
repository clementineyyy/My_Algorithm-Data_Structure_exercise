/*#define _CRT_SECURE_NO_WARNINGS
//λ����ʵ�ּ������ӷ���ʵ���෴������λȡ���ټ�һ����������λ��
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
	b = add(~b, 1);                     //��λȡ���ټ�һҲҪ��λ����ļӷ���ʵ�֣������Ժ��мӺ�
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