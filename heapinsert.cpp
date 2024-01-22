//用户一个一个输入数字放入空数组中，用这些数字生成大根堆
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
	while (arr[index] > arr[(index - 1) / 2])         //循环进行条件是该元素大于父元素且没有到顶端
	{
		swap(arr, index, (index - 1) / 2);
		index = (index - 1) / 2;                      //必须加上这一行代码，如果交换位置多于一次，下标index就要移动到父结点上再和爷结点比较大小是否交换
	}
}


int main()
{
	int arr[n] = { 5,8,2,7,1 }, i;       //用户直接给了一个数组，一堆数
	for (i = 0; i < n; i++)              //用for循环一个一个把数组元素纳入进来，相当于用户一个一个给数
		heapinsert(arr, i);
	for (i = 0; i < n; i++)
		printf("%d ", arr[i]);
	printf("\n");

	return 0;
}*/