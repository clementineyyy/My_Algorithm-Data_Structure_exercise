//��һ�����������в��Ҵ��ڵ���num������λ��
/*#include <stdio.h>
#define n 10

void left(int arr[], int num)
{
	int fir = 0, end = n, mid = 0;
	mid = (fir + end) / 2;
	if (arr[0] >= num)
		printf("the left place is 0!\n");
	else if (arr[n - 1] < num)
		printf("the left place do not exist!\n");
	else if (arr[n - 1] == num&&arr[n-2]<num)
		printf("the left place is %d!\n", n - 1);
	else
	{
		while (mid>=0)
		{
			if (arr[mid] >= num)
				if(arr[mid-1]<num&&arr[mid+1]>=num)                //ע����ߵ�������С��num�����ܵ���num,Ҫ���ǵ�����Ԫ�����ظ����ֵ����
			    {
				printf("the left place is %d!\n", mid);            //���ڵ�Ŀ���ǲ��ҵ�����λ��
				break;
			    }
				else 
				{
					end = mid;
					mid = (fir + end) / 2;
				}
			else if (arr[mid] < num)
			{
				fir = mid;
				mid = (fir + end) / 2;
			}
		}
	}
}

int main()
{
	int arr[n] = { 0,1,2,3,3,3,3,7,8,9 }, num = 0;
	scanf("%d", &num);
	if (n == 0)
		printf("the array do not exist!\n");
	else if (n == 1)
		if (arr[0] >= num)
			printf("the left place is 0\n");
		else
			printf("the left place do not exist!\n");
	else left(arr, num);

	return 0;
}*/