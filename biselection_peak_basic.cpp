//��һ�������������ҵ�һ���ֲ����ֵ���ϸ���ڣ����ɣ���֪�����������ڵ�����Ԫ�ز����
/*#include <stdio.h>
#define n 10


void peak(int arr[])
{
	int fir = 0, end = n, mid = (fir + end) / 2;
	if (arr[0] > arr[1])
		printf("the peak is %d at 0!\n", arr[0]);
	else if (arr[n - 1] > arr[n - 2])
		printf("the peak is %d at %d!\n", arr[n - 1], n - 1);
	else
	{
		while (fir <= end)
		{
			if (arr[mid] > arr[mid - 1] && arr[mid] > arr[mid + 1])
			{
				printf("the peak is %d at %d!\n", arr[mid], mid);
				break;
			}
			else if(arr[mid]<arr[mid+1])
			{
				fir = mid;
				mid = (fir + end) / 2;
				continue;
			}
			else if (arr[mid] < arr[mid - 1])
			{
				end = mid;
				mid = (fir + end) / 2;
			}
		}
	}
}

int main()
{
	int arr[n] = { 0,2,1,3,4,8,6,7,9,0 };
	if (n == 0)
		printf("the array do not exist!\n");
	else if (n == 1)
		printf("the peak do not exist!\n");
	else if(n>=2)
		peak(arr);

	return 0;
}*/
