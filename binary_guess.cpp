/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num = 0, l = 1, r = 100, mid = 0;
	//mid--;
	scanf("%d", &num);
	while (l <= r)              //判断错误的边界情况！！！！
	{
		mid = l + ((r - l) >> 1);
		if (mid == num)
		{
			printf("%d 对了！", mid);
			break;
		}
		else
			printf("%d ", mid);
		if (mid > num)
			r = mid - 1;        //注意右边界-1
		else if (mid < num)
			l = mid + 1;        //注意左边界+1
	}
	return 0;
}*/