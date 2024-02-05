/*#define _CRT_SECURE_NO_WARNINGS
//实现位图：使用数据类型的每一位来表示数据的存在，并实现增删查等功能，比哈希表快
//重点在位运算的灵活使用（位运算注意优先级和括号）
#include <stdio.h>
#include <stdlib.h>

 long* BitMap(int maxval)
{
	 int size = (maxval + 64) >> 6;                             //定义一个位图，基本类型为长整型，64字节，得到开辟长整型数组的大小,加上64因为最后会取整，相当于在最后加上1
	 long* bits = (long*)malloc(sizeof(long) * size);           //因为数组必须固定大小，所以使用动态分配空间函数

	 return bits;
}

 void add(long bits[], int val)
 {
	 bits[val >> 6] |= (1L << (val & 63));                       //这里1必须要加上long，否则默认1是整型，只有32字节，不可能移动最多63字节（long型），因为余数是0-63,先确定是哪个数，再确定哪一位,而且这里是或运算
 }

 void del(long bits[], int val)
 {
	 bits[val >> 6] &= ~(1L << (val & 63));                      //任何数和0与上都是0，0取反是1，1左移来到位置
 }

 bool contains(long bits[], int val)
 {
	 return (bits[val >> 6] & (1L << (val % 63))) != 0;          //只有1和1与运算才是1，如果结果不是0（是1），说明存在，如果结果是0，说明不存在
 }

int main()
{
	int maxval = 100;
	long* bits = BitMap(maxval);
	add(bits, 1);
	add(bits, 2);
	add(bits, 3);
	del(bits, 1);
	if (contains(bits, 1))
		printf("yes\n");
	else
		printf("no\n");
	if (contains(bits, 2))
		printf("yes\n");
	else
		printf("no\n");

	return 0;
}*/