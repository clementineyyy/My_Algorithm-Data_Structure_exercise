/*#define _CRT_SECURE_NO_WARNINGS
//��λ����ʵ�ּӷ��������ʵ�ּӷ��ĵײ��߼�
//������޽�λ��ӣ���Ͻ�λ
#include <stdio.h>

int add(int a, int b)
{
	int t = 0;                        //ʹ���м������ʱ��������Ľ��
	while (b!=0)                      //��ͣѭ��ֱ����λ��Ϣ��0
	{
		t = a ^ b;
		b = (a & b) << 1;             //��ʾ��λ��Ϣ��������������λ��Ϊ1����λҪ����һλ
		a = t;
	}

	return a;
}

int main()
{
	int a = 0, b = 0, res = 0;
	scanf("%d %d", &a, &b);
	res = add(a, b);                 //���ϸ���Ҳ����
	printf("%d\n", res);

	return 0;
}*/