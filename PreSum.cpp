/*#define _CRT_SECURE_NO_WARNINGS
//����ǰ׺�ͼ������鲻ͬ��Χ�ڵ�����֮��
//���������顢�ۼӺͣ�����ǰ׺�ͣ�����ֱ���������
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define n 10

void Print(int arr[])
{
	for (int i = 0; i < n; i++)
		printf("%d ", arr[i]);
	printf("\n");
}

void Initarr(int arr[])
{
	int maxvalue = 10;
	srand((unsigned)time(NULL));
	for (int i = 0; i < n; i++)
		arr[i] = rand() % (maxvalue + 1);
	Print(arr);
}

void PreSum(int arr[],int L,int R)                          //����ǰ׺������
{
	int pre[n];
	pre[0] = arr[0];
	for (int i = 1; i < n; i++)
		pre[i] = pre[i - 1] + arr[i];            //���ﲻ���Լ����Լ����Ǽ���ǰ��һ����
	Print(pre);
	if (L > 0)
		printf("%d\n", pre[R] - pre[L - 1]);           //ע�����������Lǰ��������ɹ�������ͬ���֣�ʣ������Χ(����Ϊ-1����Ҫ�������۵��ӷ�Χ0��ʼ�����������
	else printf("%d\n", pre[R]);
}

int main()
{
	int arr[n];
	srand((unsigned)time(NULL));
	int L, R;
	L = rand() % n;
	R = rand() % n;             //��ʾ�±꣬���ü�һ
	printf("%d %d\n", L, R);
	Initarr(arr);
	if (L <= R)
		PreSum(arr, L, R);
	else
		printf("fail!\n");

	return 0;
}*/