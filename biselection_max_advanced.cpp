//用递归方法找数组元素最大值：将数组用二分法分成多段，每一段求最大值，不同段最大值比较
/*#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int n = 0;

int compare(int left, int right)
{
	return left > right ? left : right;
}

int binary(int arr[], int fir, int end)
{
	int mid = 0, left = 0, right = 0;
	if (fir == end)
		return arr[fir];
	else
	{
		mid = fir + ((end - fir) >> 1);                      //这里位运算整体要加括号，因为移位运算小于加减运算,这种写法防止数据量过大导致溢出，而且位运算的右移一位比除以二更快
		left = binary(arr, fir, mid);
		right = binary(arr, mid + 1, end);                   //这里mid要加1，不可以把mid包含进来
	}
	return compare(left, right);                             //最后是要返回的
}


int* generaterandomarray(int maxsize, int maxvalue)
{
	srand((unsigned)time(NULL));
	n = rand() % (maxsize + 1);
	int* p = (int*)malloc(sizeof(int) * n);
	int i;
	for (i = 0; i < n; i++)
		p[i] = rand() % 101;
	for (i = 0; i < n; i++)
		printf("%d ", p[i]);
	printf("\n");

	return p;
}

int main()
{
	int* arr, max = 0, maxsize = 10, maxvalue = 100;
	arr = generaterandomarray(maxsize, maxvalue);
	if (n == 0)
		printf("the array do not exist!\n");
	else
	{
		max = binary(arr, 0, n - 1);
		printf("the max number is %d!\n", max);
	}

	return 0;
}*/