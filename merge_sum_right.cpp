//С�����⣺��һ�������У�ÿһ������߱���С�����������ĺ�ΪС��
//ת��Ϊÿһ�����ұ��м�����������
/*#include <stdio.h>
#include <stdlib.h>
#define n 5


int merge(int arr[], int l, int mid, int r)
{
	int* p = (int*)malloc(sizeof(int) * (r - l + 1));
	int i = 0, j, p1 = l, p2 = mid + 1, sum = 0;
	while (p1 <= mid && p2 <= r)
	{
		sum += arr[p1] < arr[p2] ? (r - p2 + 1) * arr[p1] : 0;          //��һ����ת��
		p[i++] = arr[p1] < arr[p2] ? arr[p1++] : arr[p2++];             //����Ҫ���򣬲�Ȼ�޷�ֱ�ӵó��ұ��ж��ٸ���������,�������ﲻ����С�ڵ��ںţ��п����ұ��ж����ȵ������������Щ�����ŵ�
	}
	while (p1 <= mid)
		p[i++] = arr[p1++];
	while (p2 <= r)
		p[i++] = arr[p2++];
	for (j = 0; j < i; j++)
		arr[l + j] = p[j];

	return sum;
}


int binary(int arr[], int l, int r)
{
	int mid = l + ((r - l) >> 1);
	if (l == r)
		return 0;                                    //ע�����ﷵ��ֵ��0������������Ԫ��ֵ��˵������Ԫ����ɵ�����û����������
	else
		return (binary(arr, l, mid) + binary(arr, mid + 1, r) + merge(arr, l, mid, r));
}

int main()
{
	int arr[n] = { 1,3,4,2,5 };
	printf("%d\n", binary(arr, 0, n - 1));

	return 0;
}*/