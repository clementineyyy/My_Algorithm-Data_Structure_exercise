//��һ�����������в��Ҵ��ڵ���num������λ��
/*#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int n = 0;

void left(int arr[], int num)
{
	int fir = 0, end = n, mid = 0;
	mid = (fir + end) / 2;
	if (arr[0] >= num)
		printf("the left place is 0!\n");
	else if (arr[n - 1] < num)
		printf("the left place do not exist!\n");
	else if (arr[n - 1] == num && arr[n - 2] < num)
		printf("the left place is %d!\n", n - 1);
	else
	{
		while (mid >= 0)
		{
			if (arr[mid] >= num)
				if (arr[mid - 1] < num && arr[mid + 1] >= num)         //ע����ߵ�������С��num�����ܵ���num,Ҫ���ǵ�����Ԫ�����ظ����ֵ����
				{
					printf("the left place is %d!\n", mid);            //���ڵ�Ŀ���ǲ��ҵ�����λ��
					break;
				}
				else
				{
					end = mid;
					mid = (fir + end) / 2;
				}
			else if (arr[mid] < num)
			{
				fir = mid;
				mid = (fir + end) / 2;
			}
		}
	}
}


void normalleft(int arr[], int num)
{
	int i;
	if (arr[0] >= num)
		printf("the left place is 0!\n");
	else if (arr[n - 1] < num)
		printf("the left place do not exist!\n");
	else if (arr[n - 1] >= num && arr[n - 2] < num)
		printf("the left place is %d!\n", n - 1);
	else for (i = 1; i < n; i++)
		if (arr[i] >= num && arr[i - 1] < num && arr[i + 1] >= num)
		{
			printf("the left place is %d!\n", i);
			break;
		}
}



int* generaterandomarray(int maxsize, int maxvalue)
{
	srand((unsigned)time(NULL));
	n = rand() % 11;                                //���鳤��Ϊ0-10������֮���ֵ�϶�������
	int* p = (int*)malloc(sizeof(int) * n);
	int i;
	for (i = 0; i < n; i++)
		p[i] = rand() % 6;                          //����Ԫ�ش�СΪ0-5
	for (i = 0; i < n; i++)
		printf("%d ", p[i]);
	printf("\n");

	return p;
}



void swap(int arr[], int i, int j)
{
	arr[i] = arr[i] ^ arr[j];
	arr[j] = arr[i] ^ arr[j];
	arr[i] = arr[i] ^ arr[j];
}



void insert(int arr[])
{
	int i, j;
	for (i = 1; i < n; i++)
		for (j = i - 1; j >= 0 && arr[j] > arr[j + 1]; j--)
			swap(arr, j, j + 1);
	for (i = 0; i < n; i++)
		printf("%d ", arr[i]);
	printf("\n");
}


int main()
{
	int num = 0, * arr1, * arr2;
	int maxsize = 10, maxvalue = 5;
	arr1 = generaterandomarray(maxsize, maxvalue);
	insert(arr1);
	arr2 = arr1;
	srand((unsigned)time(NULL));
	num = rand() % 6;                                                     //���������СΪ0-10
	printf("%d\n", num);
	if (n == 0)
		printf("the array do not exist!\n");
	else if (n == 1)
		if (arr1[0] < num)
			printf("the left place do not exist!\n");
		else
			printf("the left place is 0\n");
	else
	{
		left(arr1, num);
		normalleft(arr2, num);
	}

	return 0;
}*/