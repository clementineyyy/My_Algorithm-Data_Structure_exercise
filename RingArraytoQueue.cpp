//�ù̶����ȵ�����ʵ�ֶ��У���׷��˼·
/*#include <stdio.h>
#define n 5

int begin = 0;
int end = 0;
int size = 0;

int plus(int num)
{
	return num == n - 1 ? 0 : ++num;           //ע��������num+1��++num������num++,��Ϊ�Ƿ����������Ҫ������������ʹ�ú���ʹ��������������
}

void push(int arr[],int val)
{
	if (size != n)
	{
		arr[end] = val;
		end = plus(end);
		size++;
	}
	else if (size == n)
		printf("�������ˣ������ټ���!\n");
}

void print(int arr[])
{
	if (size != 0)
	{
		int i;
		for (i = begin; i < n; i++)
			printf("%d ", arr[i]);
		for (i = 0; i < end; i++)
			printf("%d ", arr[i]);
		printf("\n");
	}
	else if (size == 0)
		printf("����Ϊ�գ�\n");
}

int poll(int arr[])
{
	int num = 0;
	if (size != 0)
	{
		num = arr[begin];
		begin = plus(begin);
		size--;
	}
	else if (size == 0)
		printf("����Ϊ�գ������ٵ����ˣ�\n");

	return num;
}

int main()
{
	int arr[n] = { 0 };
	push(arr, 1);
	push(arr, 2);
	push(arr, 3);
	push(arr, 4);
	push(arr, 5);
	push(arr, 7);
	print(arr);
	printf("%d\n", poll(arr));
	print(arr);
	push(arr, 6);
	print(arr);

	return 0;
}*/