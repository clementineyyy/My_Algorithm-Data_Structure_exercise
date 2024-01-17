//二分查找：输入一个数，在有序数组中查找是否存在这个数
/*#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int n = 0;                                                    //n就是数组长度--有多少个元素

void biselection(int num, int arr[])
{
	int fir = 0, end = n, bi = (fir + end) / 2;                 //bi是每一次二分之后的数组下标,要写成每一次区间首尾下标相加除以2才是中间的下标
	if (arr[0] > num || arr[n - 1] < num)                       //因为是有序数组，如果所查找的数不在范围之内，直接判定这个数不存在
		printf("the number do not exist!\n");
	else
	{
		while (bi >= 0)                                         //只要下标>=0
			if (arr[bi] == num)                                 //只能通过二分的位置刚好是这个数的位置来把这个数找到
			{
				printf("the number do exist!\n");
				break;
			}
			else if (arr[bi] > num)                             //数组元素从小到大，如果这个数在左边
			{
				end = bi;                                       //移动的是首尾下标
				bi = (fir + end) / 2;
			}
			else if (arr[bi] < num)                             //如果这个数在右边
			{
				fir = bi;
				bi = (fir + end) / 2;
			}
	}
}

int* generaterandomarray(int maxsize, int maxvalue)
{
	srand((unsigned)time(NULL));
	n = rand() % (maxsize + 1);                                           //数组长度为0-10
	int* p = (int*)malloc(sizeof(int) * n);                    //给这个数组分舵多少内存空间，使用动态内存分配函数
	int i;
	for (i = 0; i < n; i++)
		p[i] = rand()%(maxvalue+1);                             //数组元素大小为0-100        
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
	int num = 0, * arr, i;
	int testtime = 10, maxsize = 10, maxvalue = 100;
	for (i = 0; i < testtime; i++)
	{
		arr = generaterandomarray(maxsize, maxvalue);
		insert(arr);
		srand((unsigned)time(NULL));
		num = rand() % 101;                                           //所查找的数字大小为0-1000
		printf("%d\n", num);
		if (n == 0)                                                    //如果数组不存在
			printf("the array do not exist\n");
		else if (n == 1)                                               //如果数组只有一个数
		{
			if (arr[0] == num)
				printf("the number do exist!\n");
			else printf("the number do not exist!\n");
		}
		else if (n >= 2)                                                  //数组长度大于2才二分查找
			biselection(num, arr);
	}

	return 0;
}*/