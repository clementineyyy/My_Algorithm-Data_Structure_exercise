/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int walk(int n,int sign)                //�õݹ���������������ͬ������ظ��������Ѵ�����ֽ��������С��������
{
	if (n < 0)                          //ע�⣺n==0�������һ����n<0ʱ�����þ���ֱ�ӷ���0�����������
		return 0;
	if (sign == 1)                      //�����һ���߱�����ô��һ���������򶼿�����
	{
		if (n == 0)                     //���n==0,ֻ����һ���������Բ��ݹ飬ֱ�ӷ���1
			return 1;
		return walk(n - 1, 1) + walk(n - 1, 2) + walk(n - 1, 3);   //�ݹ飬��ǰ·���������������ߵ�·����
	}
	else if (sign == 2)                 //�����һ���߶�����ô��һ��ֻ�����������򣺱��Ͷ�
	{
		if (n == 0)
			return 1;
		return walk(n - 1, 1) + walk(n - 1, 2);            //�ݹ飬��ǰ·���������������ߵ�·����
	}
	else if (sign == 3)                //�����һ����������ô��һ��ֻ�����������򣺱�����
	{
		if (n == 0)
			return 1;
		return walk(n - 1, 1) + walk(n - 1, 3);        //�ݹ飬��ǰ·���������������ߵ�·����
	}
	
}

int main()
{
	int n = 0, step = 0, sign = 1;         //sign��ʾ��һ�����������ߵģ�1��ʾ����2��ʾ����3��ʾ��
	scanf("%d", &n);
	if (n == 1)
		step = 3;
	else 
		step = walk(n, sign);
	printf("%d", step);
	return 0;
}*/