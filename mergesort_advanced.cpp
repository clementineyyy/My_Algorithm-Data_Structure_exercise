/*#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int n = 0;


void merge(int arr[], int fir, int mid, int end)
{
	int* p = (int*)malloc(sizeof(int) * (end - fir + 1));         //���¿���һ������ռ����������������
	int i = 0, j, p1 = fir, p2 = mid + 1;
	while (p1 <= mid && p2 <= end)                                //ѭ���������������䶼û�г���
		p[i++] = arr[p1] <= arr[p2] ? arr[p1++] : arr[p2++];
	while (p1 <= mid)                                             //����ұߵ����䳬��
		p[i++] = arr[p1++];
	while (p2 <= end)                                             //�����ߵ����䳬��
		p[i++] = arr[p2++];
	for (j = 0; j < i; j++)                                       //�������˰�������������黹��ԭ���飬���������ں����������ͷ���
		arr[fir + j] = p[j];
}


void binary(int arr[], int fir, int end)
{
	int mid = fir + ((end - fir) >> 1);
	if (fir == end)                            //�����������ֻ��һ��Ԫ�أ�ֱ�ӷ��أ������Ƿ�����ֵ
		return;
	else
	{
		binary(arr, fir, mid);                 //ʹ�ö��ַ�������ֳ�����
		binary(arr, mid + 1, end);
		merge(arr, fir, mid, end);             //�Էֱ���������ν�����������ʹ��������
	}
}


int* generaterandomarray(int maxsize, int maxvalue)
{
	srand((unsigned)time(NULL));
	n = rand() % (maxsize + 1);
	int* p = (int*)malloc(sizeof(int) * n), i;
	for (i = 0; i < n; i++)
		p[i] = rand() % (maxvalue + 1);
	for (i = 0; i < n; i++)
		printf("%d ", p[i]);
	printf("\n");

	return p;
}


int main()
{
	int* arr, i = 0, maxsize = 10, maxvalue = 10;
	arr = generaterandomarray(maxsize, maxvalue);
	if (n == 0)
		printf("the array do not exist!\n");
	else binary(arr, 0, n - 1);
	for (i = 0; i < n; i++)
		printf("%d ", arr[i]);
	printf("\n");

	return 0;
}*/