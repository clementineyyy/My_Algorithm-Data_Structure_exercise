/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <map>
#include <iostream>

using namespace std;

int main()
{
	int T = 0, N = 0, M = 0;
	scanf("%d", &T);
	map<int, int> res;                                   //用一个有序表来存储结果，而且有序表是根据第一个int(key)来自动内部排序的
	map<int, int>::iterator it;
	for (T; T > 0; T--)
	{
		scanf("%d %d", &N, &M);
		res[N] += M;                                    //考虑到一个编号可能出现多次的情况，最后的结果要加上之前得到的结果
	}
	for (it = res.begin(); it != res.end(); it++)       //用迭代器来遍历表，注意最后结束条件是迭代器不等于表的结尾
		printf("%d %d\n", it->first, it->second);       //用first,second来表示每一对映射中的key和value
	return 0;
}*/