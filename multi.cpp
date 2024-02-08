/*#define _CRT_SECURE_NO_WARNINGS
//用位运算实现乘法：使用乘法运算的底层步骤
#include <stdio.h>

int multi(int a, int b)
{
	int res = 0;
	while (b != 0)                 //如果b的位数上不存在1，结束循环
	{
		if ((b & 1) != 0)          //只和最低位的数进行与运算，最低位是0结果就是0，最低为是1结果就是1
			add(res,a);
		a <<= 1;                //注意这里要把改变后的值赋给原来的值！！！否则就没有改变，一直死循环
		b = b >> 1;                //C语言中没有3个箭头的无符号右移位运算（若为负数（符号位为1）左边也补0），两个箭头是用符号位来补，但是结果是正确的(但是这里b不能是负数）
	}

	return res;
}

int main()
{
	int a = 0, b = 0, res = 0;           //int默认有符号,所以可以表示负数
	scanf("%d %d", &a, &b);
	res = multi(a, b);
	printf("%d\n", res);

	return 0;
}*/
