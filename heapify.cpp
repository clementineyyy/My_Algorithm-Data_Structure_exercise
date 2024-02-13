//要求输出用户给的数中的最大数，删除这个数，并且仍然使数组是一个大根堆
/*#include <stdio.h>
#define n 8

int heapsize = n;


void swap(int arr[], int i, int j)
{
	int t = 0;
	t = arr[i];
	arr[i] = arr[j];
	arr[j] = t;
}


void heapinsert(int arr[], int index)
{
	while (arr[index] > arr[(index - 1) / 2])                     //注意这里的符号是大于号
	{
		swap(arr, index, (index - 1) / 2);
		index = (index - 1) / 2;
	}
}


void heapify(int arr[], int index)                               //因为比较，总是父结点，左右孩子结点三者中有一个最大，把最大的放到顶上，只需要变换二叉树的一支，其他部分仍然是大根堆
{
	while (index * 2 + 1 < heapsize)                                 //说明下一层有孩子,考虑左孩子
	{
		int largest = (index * 2 + 2) < heapsize&&arr[index * 2 + 1] < arr[index * 2 + 2] ? index * 2 + 2 : index * 2 + 1;      //说明下一层有右孩子而且左孩子比右孩子大吗，考虑右孩子,而且是先比较有没有右孩子
		largest = arr[largest] > arr[index] ? largest : index;              //比较的不是下标而是下标所指结点的数据大小
		if (largest == index)
			break;                                                  //一旦父结点仍然大于较大的子节点，就退出循环，结束函数，不用再比较下面的数了
		swap(arr, largest, index);
		index = largest;                                            //index要跑到下一层来继续比较左右孩子大小
	}
}



int main()
{
	int arr[n] = { 3,5,6,7,4,3,5,8 }, i;
	for (i = 0; i < heapsize; i++)
		heapinsert(arr, i);                       //heapinsert需要循环，因为模拟用户一个一个给数据，总是从当前新加入的数据的位置开始往上和父结点比较
	for (i = 0; i < heapsize; i++)
		printf("%d ", arr[i]);
	printf("\n");
	printf("%d\n", arr[0]);
	swap(arr, 0, heapsize - 1);
	heapsize--;
	heapify(arr, 0);                              //heapify就不用循环了，直接从最顶上的结点开始往下看
	for (i = 0; i < heapsize; i++)
		printf("%d ", arr[i]);
	printf("\n");

	return 0;
}*/