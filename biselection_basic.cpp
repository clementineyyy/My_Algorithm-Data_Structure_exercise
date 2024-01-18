//二分查找：输入一个数，在有序数组中查找是否存在这个数
/*#include <stdio.h>
#define n 10

void biselection(int num,int arr[])
{
	int fir = 0, end = n, bi = (fir + end) / 2;                 //bi是每一次二分之后的数组下标,要写成每一次区间首尾下标相加除以2才是中间的下标
	if (arr[0] > num || arr[n - 1] < num)                       //因为是有序数组，如果所查找的数不在范围之内，直接判定这个数不存在
		printf("the number do not exist!\n");
	else
	{
		while (fir<=end)           
			if (arr[bi] == num)                                 //只能通过二分的位置刚好是这个数的位置来把这个数找到
			{
				printf("the number do exist!\n");
				break;
			}
			else if (arr[bi] > num)                             //数组元素从小到大，如果这个数在左边
			{
				end = bi;                                       //移动的是首尾下标
				bi = (fir + end) / 2;
			}
			else if (arr[bi] < num)                             //如果这个数在右边
			{
				fir = bi;
				bi = (fir + end) / 2;
			}
	}
}

int main()
{
	int num = 0, arr[n] = { 0,1,2,3,4,5,6,7,8,9 };
	scanf("%d", &num);
	if (n == 0)                                                    //如果数组不存在
		printf("the array do not exist\n");
	else if (n == 1)                                               //如果数组只有一个数
	{
		if (arr[0] == num)
			printf("the number do exist!\n");
		else printf("the number do not exist!\n");
	}
	else if(n>=2)                                                  //数组长度大于2才二分查找
		biselection(num, arr);

	return 0;
}*/
