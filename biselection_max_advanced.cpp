//�õݹ鷽��������Ԫ�����ֵ���������ö��ַ��ֳɶ�Σ�ÿһ�������ֵ����ͬ�����ֵ�Ƚ�
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
		mid = fir + ((end - fir) >> 1);                      //����λ��������Ҫ�����ţ���Ϊ��λ����С�ڼӼ�����,����д����ֹ���������������������λ���������һλ�ȳ��Զ�����
		left = binary(arr, fir, mid);
		right = binary(arr, mid + 1, end);                   //����midҪ��1�������԰�mid��������
	}
	return compare(left, right);                             //�����Ҫ���ص�
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