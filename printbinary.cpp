/*#define _CRT_SECURE_NO_WARNINGS
//打印出整型数据的二进制32位
#include <stdio.h>

void print(int num)
{
	int i = 31;
	while (i >=0)
		printf("%d", (num & (1 << i--)) == 0 ? 0 : 1);            //必须先从高位开始递减，因为打印的顺序是从左到右，从高位到低位
	printf("\n");
}

int main()
{
	int num = 5;
	print(num);

	return 0;
}*/