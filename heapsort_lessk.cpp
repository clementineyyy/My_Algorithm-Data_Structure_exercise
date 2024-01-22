//��һ����������������У�ÿһ����������λ�ò�����k���ú��ʵ��㷨ʹ��������
#include <stdio.h>
#define n 8

int k = 5;                                           //����ȫ�ֱ������ر�ʵ�ڵ��õĺ�������Ҫע�⣨ͬ����������heapsize�������ǲ���ʡ

void swap(int arr[], int i, int j)
{
	int t = 0;
	t = arr[i];
	arr[i] = arr[j];
	arr[j] = t;
}


void heapinsert(int arr[], int index)
{
	while (arr[index] < arr[(index - 1) / 2])
	{
		swap(arr, index, (index - 1) / 2);
		index = (index - 1) / 2;
	}
}


void heapify(int arr[], int index,int heapsize)
{
	int left = index * 2 + 1;
	while (left < heapsize)                 
	{
		int smallest = arr[left] > arr[left + 1] && (left + 1) < heapsize ? left + 1 : left;
		smallest = arr[smallest] > arr[index] ? index : smallest;
		if (smallest == index)
			break;
		swap(arr, index, smallest);
		index = smallest;
		left = index * 2 + 1;
	}
}


int main()
{
	int arr[n] = { 3,5,3,4,6,5,7,8 };
	int priority_queue[6];                        //��ΪC���Կ⺯������û�����ȼ����к���������ֻ���Լ���һ��С����
	for (int i = 0; i <= k; i++)
		priority_queue[i] = arr[i];               //�Ȱ�ǰk+1�����Ž����ȼ��������棬��Ϊ����Ԫ��ֻ���ƶ�k�����룬������Сֵ���ڸ÷�Χ
	for (int i = 0; i <= k; i++)
		heapinsert(priority_queue, i);            //С�������򣬶��������Сֵ
	for (int i = 0; i <= k; i++)
		printf("%d ", priority_queue[i]);
	printf("\n");
	for (int i = k + 1; i < n; i++)
	{
		arr[i - k - 1] = priority_queue[0];       //���ε���С���ѵ���Сֵ����ԭ������
		priority_queue[0] = arr[i];               //�������е�ʣ����һ�β���С����
		heapify(priority_queue, 0, k);            //�����ѻ��ҳ���Сֵ
	}
	for (int i = 0; i <= k; i++)
		printf("%d ", priority_queue[i]);
	printf("\n");
	int heapsize = k + 1;
	while(heapsize>0)
	{
		arr[n-heapsize] = priority_queue[0];
		swap(priority_queue, 0, --heapsize);      //��С�ѵķ�Χ
		heapify(priority_queue, 0, heapsize);
	}
	for (int i = 0; i < n; i++)
		printf("%d ", arr[i]);
	printf("\n");

	return 0;
}