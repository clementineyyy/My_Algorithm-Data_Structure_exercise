/*#include <stdio.h>

int main()
{
	int a = 0, b = 0, c = 0, d = 0;
	scanf("%o", &a);                   //%o是八进制数
	a >> 4;                        //a没变，是把b赋上了结果
	c = ~(~0 << 4);
	d = b & c;
	printf("%o,%d\n%o,%d", a, a, d, d);

	return 0;
}*/


//一个数组，一种数出现了奇数次，其他数都出现了偶数次，找出出现了奇数次的这个数
/*#include <stdio.h>

int main()
{
	int eor = 0, arr[9] = { 1,1,1,2,2,3,3,3,3 }, i;
	for (i = 0; i < 9; i++)
		eor ^= arr[i];                 //因为异或运算和顺序无关，所以出现偶数次的数自己和自己异或结果是0，出现奇数次的数自己和自己异或结果是自己，最后只剩下了这个数，0和这个数异或还是这个数
	printf("出现了奇数次的这个数是：%d", eor);
	  
	return 0;
}*/


//在一个数组中，只有两种数出现了奇数次，其他数都出现了偶数次，找出出现奇数次的这两个数
/*#include <stdio.h>

int main()
{
	int eor = 0, eor1 = 0, rightone = 0, arr[4] = { 354,666,11,11 }, i;
	for (i = 0; i < 4; i++)
		eor ^= arr[i];            //结果是这两个出现奇数次的数异或的结果
	rightone = eor & (~eor + 1);  //rightone为eor二进制中从右到左最早出现的一个1，eor与上自己的补码（按位取反再加一）可以提取出二进制最右边的1
	for (i = 0; i < 4; i++)
		if ((arr[i]&rightone)==rightone)   //在数组中只把和这个位数相同（为1）/或不同（为0）的数重新进行异或运算，数组里的数分成了两组，有两种情况：
			eor1 ^= arr[i];                //条件判断最终结果仍为rightone说明这个位置上也是1，不用管其他位置因为与运算之后都是0；条件判断最终结果为0则说明这个位置上是0，把两个出现奇数次的数分开
			                               //与运算只有同时为1时结果才为1，并且rightone只有一个位置上是1，其他都是0，
	printf("%d %d", eor1, eor1 ^ eor);     //得到了一个出现奇数次的数，再和异或的结果进行异或得到另一个出现奇数次的数

	return 0;
}*/




//插入排序
/*#include <stdio.h>
#define N 9                                //定义符号常量不需要在前面加上类型

void swap(int arr[N], int i, int j)        //注意使用位运算进行交换的条件，两个数的地址不同
{
	arr[i] = arr[i] ^ arr[j];
	arr[j] = arr[i] ^ arr[j];
	arr[i] = arr[i] ^ arr[j];
}

int main()
{
	int arr[N] = { 9,8,7,6,5,4,3,2,1 }, i, j;
	for (i = 1; i < N; i++)
		for (j = i - 1; j >= 0 && arr[j] > arr[j + 1]; j--)     //注意控制循环结束的条件：当来到有序数列最前面或者前一个数已经不大于后面的数
			swap(arr, j, j + 1);
	for (i = 0; i < N; i++)
		printf("%d ", arr[i]);

	return 0;
}*/



/*#include <stdio.h>

int n = 10;

void normalselection(int num, int arr[])
{
	int i = 0;
	for (i = 0; i < n && arr[i] != num; i++);                   //结束循环条件是找到了这个数或者数组结束了还没找到
	if (i < n)
		printf("the number do exist!\n");
	else printf("the number do not exist!\n");
}

int main()
{
	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 }, num = 0;
	scanf("%d", &num);
	normalselection(num, arr);

	return 0;
}*/



