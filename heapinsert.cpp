//�û�һ��һ���������ַ���������У�����Щ�������ɴ����
/*#include <stdio.h>
#define n 5



void swap(int arr[], int i, int j)
{
	int t = 0;
	t = arr[i];
	arr[i] = arr[j];
	arr[j] = t;
}

void heapinsert(int arr[], int index)
{
	while (arr[index] > arr[(index - 1) / 2])         //ѭ�����������Ǹ�Ԫ�ش��ڸ�Ԫ����û�е�����
	{
		swap(arr, index, (index - 1) / 2);
		index = (index - 1) / 2;                      //���������һ�д��룬�������λ�ö���һ�Σ��±�index��Ҫ�ƶ�����������ٺ�ү���Ƚϴ�С�Ƿ񽻻�
	}
}


int main()
{
	int arr[n] = { 5,8,2,7,1 }, i;       //�û�ֱ�Ӹ���һ�����飬һ����
	for (i = 0; i < n; i++)              //��forѭ��һ��һ��������Ԫ������������൱���û�һ��һ������
		heapinsert(arr, i);
	for (i = 0; i < n; i++)
		printf("%d ", arr[i]);
	printf("\n");

	return 0;
}*/