//����1.0�汾��������ĩ��Ϊnum,����С�ڵ���num��������ߣ�����num�������ұ�
/*#include <stdio.h>
#define n 8


void swap(int arr[], int i, int j)
{
	int t = 0;
	t = arr[i];
	arr[i] = arr[j];
	arr[j] = t;
}


int partition(int arr[], int l, int r)
{
	int less = l - 1;
	while (l < r)                          //ע�����ﲻ����С�ڵ���r,��Ϊ�������rǰ����������������Խ����
		if (arr[l] <= arr[r])              //ֱ���ƶ�l���������¿���һ���ռ�i���任�±�
			swap(arr, l++, ++less);
		else
			l++;
	swap(arr, less + 1, r);                //���������һ�д��룬��num��С�ڵ�������ǰһ��������λ�ã�ʹnum���м䣬�����С�ڵ���num���ұ��Ǵ���num

	return less + 1;
}


void quicksort(int arr[], int l,int r)
{
	if (l < r)
	{
		int more = partition(arr, l, r);
		quicksort(arr, l, more - 1);
		quicksort(arr, more+1, r);
	}
}



int main()
{
	int arr[n] = { 3,5,6,7,4,3,5,8 }, i = 0;
	quicksort(arr, 0, n - 1);
	for (i = 0; i < n; i++)
		printf("%d ", arr[i]);
	printf("\n");

	return 0;
}*/