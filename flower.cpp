/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <map>
#include <iostream>

using namespace std;

int main()
{
	int T = 0, N = 0, M = 0;
	scanf("%d", &T);
	map<int, int> res;                                   //��һ����������洢���������������Ǹ��ݵ�һ��int(key)���Զ��ڲ������
	map<int, int>::iterator it;
	for (T; T > 0; T--)
	{
		scanf("%d %d", &N, &M);
		res[N] += M;                                    //���ǵ�һ����ſ��ܳ��ֶ�ε���������Ľ��Ҫ����֮ǰ�õ��Ľ��
	}
	for (it = res.begin(); it != res.end(); it++)       //�õ�������������ע�������������ǵ����������ڱ�Ľ�β
		printf("%d %d\n", it->first, it->second);       //��first,second����ʾÿһ��ӳ���е�key��value
	return 0;
}*/