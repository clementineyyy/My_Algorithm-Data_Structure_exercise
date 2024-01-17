//在一个有序数组中查找大于等于num的最左位置
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
	else if (arr[n - 1] == num&&arr[n-2]<num)
		printf("the left place is %d!\n", n - 1);
	else
	{
		while (mid >= 0)
		{
			if (arr[mid] >= num)
				if (arr[mid - 1] < num && arr[mid + 1] >= num)         //注意左边的数必须小于num而不能等于num,要考虑到数组元素有重复数字的情况
				{
					printf("the left place is %d!\n", mid);            //现在的目的是查找到最左位置
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


int* generaterandomarray(int maxsize, int maxvalue)
{
	srand((unsigned)time(NULL));
	n = rand() % 11;                                //数组长度为0-10，求余之后的值肯定是整数
	int* p = (int*)malloc(sizeof(int) * n);
	int i;
	for (i = 0; i < n; i++)
		p[i] = rand() % 6;                          //数组元素大小为0-5
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
	int num = 0, * arr;
	int maxsize = 10, maxvalue = 5;
	arr = generaterandomarray(maxsize, maxvalue);
	srand((unsigned)time(NULL));
	num = rand() % 6;                                                     //输入的数大小为0-10
	printf("%d\n", num);
	if (n == 0)
		printf("the array do not exist!\n");
	else if (n == 1)
		if (arr[0] < num)
			printf("the left place do not exist!\n");
		else
			printf("the left place is 0\n");
	else
	{
		insert(arr);
		left(arr, num);
	}

	return 0;
}*/