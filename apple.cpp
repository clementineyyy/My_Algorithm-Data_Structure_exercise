/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int put(int M, int N)
{
	if (M < 0)                    //������С�ںŶ�����С�ڵ��ں�
		return 0;
	if (M == 1 || N == 1)        //���ֻ��һ��ƻ������ֻ��һ�����ӣ��ַ�ֻ��һ��
		return 1;
	return put(M, N - 1) + put(M - N, N);      //�ַ�������������ɣ�һ�����п����ӣ���ôȫ��ƻ��M��ʣ��N-1��������ţ�����û�п����ӣ���ÿ�����ӷ�һ��ƻ������ʣ��M-N��ƻ����������ȫ��������N�з�
}

int main()
{
	int t = 0, M = 0, N = 0, res = 0;
	scanf("%d", &t);
	while (t > 0)
	{
		scanf("%d", &M);
		scanf("%d", &N);                //Ҫ�����ֱ�����ſ��ԣ��������
		t--;
		res = put(M, N);                //���ǻ�������ͬ�Ĳ����ظ������õݹ�
		printf("%d\n", res);
	}

	return 0;
}*/