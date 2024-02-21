/*#include <stdio.h>
#include <stdlib.h>
#define n 10

void merge(int arr[], int L, int M, int R)
{
	int p1, p2;
	p1 = L;
	p2 = M + 1;
	int* help = (int*)malloc(sizeof(int) * (R - L + 1));         //数组量过大可能溢出
	int i = 0;
	while (p1 <= M && p2 <= R)
		help[i++] = arr[p1] <= arr[p2] ? arr[p1++] : arr[p2++];
	while (p1 <= M)
		help[i++] = arr[p1++];
	while (p2 <= R)
		help[i++] = arr[p2++];
	for (int j = 0; j < i; j++)                                  //这里是小于号而不是小于等于号
		arr[L+j] = help[j];
	free(help);
	help = NULL;
}

int main()
{
	int arr[n] = { 9,8,7,6,5,4,3,2,1,0 };
	int step = 1;                                               //步长初始化为1；
	int L = 0, M = 0, R = 0;                                    //左组左下标一开始是0
	while (step < n)                                            //如果步长大于等于数组长度，不用分组归并排序，直接退出循环
	{
		L = 0;
		while (L < n)                                           //最后一对还有左组:
		{
			if (n - L > step)                                   //说明左组满
				M = L + step - 1;
			else                                                //最后一对只有左组,没有右组，不归并，直接退出循环
				break;                                            
			if (n - M - 1 > step)                               //上一个if语句规定M不会越界（越过下标），M只会小于等于数组边界
				R = M + step;
			else
				R = n - 1;
			merge(arr, L, M, R);
			if (R == n - 1)                                     //全程着重考虑下标越界溢出等特殊极端情况
				break;
			else
				L = R + 1;
		}
		if (step > (n / 2))                                     //注意这里是大于号而不是大于等于号
			break;
		else
			step *= 2;
	}
	for (int i = 0; i < n; i++)
		printf("%d ", arr[i]);
	return 0;
}*/