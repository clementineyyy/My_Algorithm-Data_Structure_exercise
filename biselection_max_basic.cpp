//用递归方法找数组元素最大值：将数组用二分法分成多段，每一段求最大值，不同段最大值比较
/*#include <stdio.h>
#define n 10

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
		mid = fir + ((end - fir) >> 1);                      //这里位运算整体要加括号，因为移位运算小于加减运算
		left = binary(arr, fir, mid);
		right = binary(arr, mid+1, end);                     //这里mid要加1，不可以把mid包含进来
	}
	return compare(left, right);
}

int main()
{
	int arr[n] = { 0,1,2,3,4,5,6,7,8,9 }, max = 0;
	if (n == 0)
		printf("the array do not exist!\n");
	else
	{
		max = binary(arr, 0, n - 1);
		printf("the max number is %d!\n", max);
	}

	return 0;
}*/