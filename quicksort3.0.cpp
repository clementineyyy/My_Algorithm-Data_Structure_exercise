//����3.0���������������ȡһ������num,�����һ��������λ�ã�Ȼ��ʹС��num��������ߣ�����num�������м�,����num�������ұ�
/*#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define maxsize 10
#define maxvalue 10


int n = 0, less = 0, more = 0;


int* generaterandomarray()
{
	srand((unsigned)time(NULL));
	n = rand() % (maxsize + 1);
	int* p = (int*)malloc(sizeof(int) * n);
	for (int i = 0; i < n; i++)                       //�˴������i��Ȼֻ�ڸ�ѭ������Ч������
		p[i] = rand() % (maxvalue + 1);
	for (int i = 0; i < n; i++)
		printf("%d ", p[i]);
	printf("\n");

	return p;
}


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
		int num = l+rand() % (r-l+1);              //num��ѡ�е��±�,ע��ȡ�����ǰ��������L!!!!!!!
		swap(arr, num, r);
		partition(arr, l, r);
		quicksort(arr, l, less);
		quicksort(arr, more, r);
	}
}


int main()
{
	int* arr;
	arr = generaterandomarray();
	if (n == 0)
	{
		printf("the array do not exist!\n");
		return 0;
	}
	else
		quicksort(arr, 0, n - 1);
	for (int i = 0; i < n; i++)
		printf("%d ", arr[i]);
	printf("\n");

	return 0;
}*/