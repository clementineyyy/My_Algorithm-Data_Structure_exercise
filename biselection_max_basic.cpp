//�õݹ鷽��������Ԫ�����ֵ���������ö��ַ��ֳɶ�Σ�ÿһ�������ֵ����ͬ�����ֵ�Ƚ�
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
		mid = fir + ((end - fir) >> 1);                      //����λ��������Ҫ�����ţ���Ϊ��λ����С�ڼӼ�����
		left = binary(arr, fir, mid);
		right = binary(arr, mid+1, end);                     //����midҪ��1�������԰�mid��������
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