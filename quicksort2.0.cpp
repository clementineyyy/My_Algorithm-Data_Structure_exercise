//����2.0�������������һ��Ԫ����num,����num��������ߣ�����num�������м䣬����num�������ұ�
/*#include <stdio.h>
#define n 8

int less = 0, more = 0;                 //���ں���ֻ�ܷ���һ��ֵ������������ȫ�ֱ����������ֵ��������������Ȼ��Ч


void swap(int arr[], int i, int j)
{
	int t = 0;
	t = arr[i];
	arr[i] = arr[j];
	arr[j] = t;
}


void partition(int arr[], int l, int r)     //��������
{
	less = l - 1, more = r;                 //����������r-1+1
	while (l<more)                          //����ѭ�������������±겻���Ժʹ��������غ�
	{
		if (arr[l] < arr[r])
			swap(arr, l++, ++less);
		else if (arr[l] == arr[r])
			l++;
		else
			swap(arr, l, --more);
	}
	swap(arr, more, r);                     //��Ȼ����Ҫ���������һ������num����λ���������м�ȫ���ǵ���num����
}

void quicksort(int arr[], int l, int r)
{
	if (l < r)
	{
		partition(arr, l, r);
		quicksort(arr, l, less);
		quicksort(arr, more, r);
	}
}

int main()
{
	int arr[n] = { 3,5,6,7,4,3,5,8 };
	quicksort(arr, 0, n - 1);
	for (int i = 0; i < n; i++)
		printf("%d ", arr[i]);
	printf("\n");

	return 0;
}*/





//����3.0���������������ȡһ������num,�����һ��������λ�ã�Ȼ��ʹС��num��������ߣ�����num�������м�,����num�������ұ�
/*#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define n 8


int less = 0, more = 0;


void swap(int arr[], int i, int j)
{
	int t = 0;
	t = arr[i];
	arr[i] = arr[j];
	arr[j] = t;
}

void partition(int arr[], int l, int r)
{
	less = l - 1, more = r;
	while (l < more)
		if (arr[l] < arr[r])
			swap(arr, l++, ++less);
		else if (arr[l] == arr[r])
			l++;
		else
			swap(arr, l, --more);
	swap(arr, more, r);
}

void quicksort(int arr[], int l, int r)
{
	if (l < r)
	{
		int num = l+rand() % (r - l + 1);              //num��ѡ�е��±�,ע��ȡ�����ǰ��һ��Ҫ����L,��Ϊ����ֳ�n�κ�һ���Ǵ�0��ʼ����������
		swap(arr, num, r);
		partition(arr, l, r);
		quicksort(arr, l, less);
		quicksort(arr, more, r);
	}
}


int main()
{
	int arr[n] = { 3,5,6,7,4,3,5,8 };
	quicksort(arr, 0, n - 1);
	for (int i = 0; i < n; i++)
		printf("%d ", arr[i]);
	printf("\n");

	return 0;
}*/