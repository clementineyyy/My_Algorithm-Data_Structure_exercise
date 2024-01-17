/*#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int len = 0;                                         //�ɴ���һ��ȫ�ֱ���ֱ�ӵõ����鳤�ȣ��̶���

void swap(int arr[], int i, int j)
{
	arr[i] = arr[i] ^ arr[j];
	arr[j] = arr[i] ^ arr[j];
	arr[i] = arr[i] ^ arr[j];
}

void select(int arr[], int len)
{
	int i, j, min = 0, imin = 0;
	for (i = 0; i < len - 1; i++)
	{
		imin = i;
		min = arr[i];
		for (j = i+1; j < len; j++)
			if (min > arr[j])
			{
				imin = j;
				min = arr[j];
			}
		if (i != imin)
			swap(arr, i, imin);
	}
	for (i = 0; i < len; i++)
		printf("%d ", arr[i]);
	printf("\n");
}


void bubble(int arr[], int len)
{
	int i, j;
	for (i = 0; i < len - 1; i++)
		for (j = 0; j < len - 1 - i; j++)
			if (arr[j] > arr[j + 1])
				swap(arr, j, j + 1);
	for (i = 0; i < len; i++)
		printf("%d ", arr[i]);
	printf("\n");
}


void insert(int arr[], int len)
{
	int i, j;
	for (i = 1; i < len; i++)
		for (j = i - 1; j >= 0 && arr[j] > arr[j + 1]; j--)
			swap(arr, j, j + 1);
	for (i = 0; i < len; i++)
		printf("%d ", arr[i]);
	printf("\n");
}

int* generaterandomarray(int maxsize, int maxvalue)               //����һ������ָ��ֵ�ĺ���������ָ��û�г�ʼ�������
{
	srand((unsigned)time(NULL));                                  //��Ҫʹ��time�������stdlib�����⣬���Բ������������ʱ����أ���ͬһ���ڲ��������������ͬ��
	len= (int)(rand() % (maxsize + 1));                           //���鳤�����ֵΪmaxsize,����0-maxsize���������maxsze+1�ᱻ��������ȥ
    int *p = (int *)malloc(sizeof(int) * len);                    //��ָ�븳�����������ڴ�ռ���׵�ַ��ʹ�ö�̬�ڴ���亯��,�������ֽ�����Ҫǿ������ת��
	int i;
	for (i = 0; i < len; i++)
		p[i] = (int)rand() % (maxvalue + 1);                      //��ָ�뿴�������׵�ַ����ÿһ������Ԫ�ظ�ֵ
	for (i = 0; i < len; i++)
		printf("%d ", p[i]);
	printf("\n");

	return p;
}

int compare(int str1[], int str2[],int len)
{
	int i;
	for(i=0;i<len;i++)
		if (str1[i] != str2[i])
		{
			return 0;
			break;
		}
	return 1;
}


int main()
{
	int testtime = 1000000, maxsize = 10, maxvalue = 500000, i;   //����testtime�Σ�������󳤶�Ϊmaxsize,����Ԫ�����ֵΪmaxvalue
	for (i = 0; i < testtime; i++)
	{
		int *arr1=generaterandomarray(maxsize, maxvalue);         //��ָ��������飬��Ϊ��������ǹ̶�����
		int *arr2 = arr1;
		int *arr3 = arr2;
		if (arr1 == NULL || len < 2)                              //�ų�������Ϊ�ջ�������Ԫ�ظ���Ϊ1����������������
			continue;
		select(arr1, len);
		bubble(arr2, len);
		insert(arr3, len);
		if (compare(arr1, arr2, len))
			printf("%d select and bubble right\n", i);
		if (compare(arr1, arr3, len))
			printf("%d select and insert right\n", i);
	}

	return 0;
}*/