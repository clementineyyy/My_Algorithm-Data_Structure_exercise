/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int N = 0, i = 0, j = 0, k = 0, num = 0;
	scanf("%d", &N);
	int two[32] = { 0 };
	int eight[11] = { 0 };
	char six[10];
	printf("%dturn into2:\n", N);
	for (i = 31; i >= 0; i--)                               //这里i--，从二进制高位判断到低位，存储是j++,在二进制数组中而是按从高位到低位存储
		two[j++] = (N & (1 << i)) == 0 ? 0 : 1;             //注意这里要判断结果是0吗，如果是0说明这个二进制位上是0，给二进制数组赋上0，如果不是0说明这个二进制位上是1（注意到与出来的结果并不是1），给二进制数组赋上1
	//printf("%d", j);
	for (i = 0; i <j; i++)                                  //二进制数组从高位到低位遍历，如果一找到1（前面全是0，无效，不输出），那么开始输出二进制数组中的数
		if (two[i] == 1)                                    
			break;
	int size = j - i;
	int* help = (int*)malloc(sizeof(int) * size);          //用一个辅助数组记录下输出的数的二进制形式中有效的这些位数，下面八进制和十六进制的转换在这个数组中遍历，不要再使用原来的two数组了
	//printf("%d",size);
	for (; i < j; i++)
	{
		printf("%d", two[i]);
		help[k++] = two[i];
	}
	//printf("\n");
	//for (i = 0; i < k; i++)
		//printf("%d", help[i]);
	printf("\n");
	printf("%dturn into8:\n", N);
	i = size-1;
	//printf("%d\n", i);
	j = 0;
	k = 1;                   //二进制到八进制的转换就是从低位到高位，二进制每三个数用十进制表示就是八进制一个位上的数，用k记录当前已经走了几个二进制位
	while (i>=0)
	{
		if (k==1 && help[i] == 1)
			num += help[i];
		else if (k==2 && help[i] == 1)
			num += 2 * help[i];
		else if(k==3)
		{
			if (help[i] == 1)
				num += 4 * help[i];
			eight[j++] = num;
			num = 0;
		}
		if (i == 0 && k != 3)         //注意最后没有走满三个二进制位的情况，此时仍要把结果放到八进制数组中（如果结果不为0）
			eight[j++] = num;
		i--;
		if (k == 3)
			k = 1;
		else
			k++;
	}
	for (i = j-1; i>=0; i--)
		printf("%d", eight[i]);
	printf("\n");
	printf("%dturn into16:\n", N);
	i = size - 1;
	j = 0;
	k = 1;                            //二进制到十六进制的转换就是从低位到高位，二进制每四个数用十进制表示就是十六进制一个位上的数，用k记录当前已经走了几个二进制位
	num = 0;
	while (i >= 0)
	{
		if (k == 1 && help[i] == 1)
			num += help[i];
		else if (k == 2 && help[i] == 1)
			num += 2 * help[i];
		else if (k == 3 && help[i] == 1)
			num += 4 * help[i];
		else if (k==4)
		{
			if (help[i] == 1)
				num += 8 * help[i];
			if (num >= 10)
				six[j++] = num + 55;          //由于十六进制位表示中含有字母，于是十六进制数组就是字符类型而不是整型，注意进行ASICC码值的转换
			else
				six[j++] = num + 48;
			num = 0;
		}
		if (i == 0 && k != 4)
			six[j++] = num + 48;             //不仅是字母，普通的计算出来的num也要进行转换
		i--;
		if (k == 4)
			k = 1;
		else
			k++;
	}
	for (i = j-1; i >= 0; i--)
		printf("%c", six[i]);

	return 0;
}*/