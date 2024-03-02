/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char arr[500];
	int i = 0;
	char c = getchar();
	while (c != '.')
	{
		arr[i++] = c;
		c = getchar();
	}
	arr[i] = '.';
	int p1 = 0, p2 = 0, ans = 0, j = 0;
	char res[30];
	while (p2 <= i)
	{
		if (arr[p2] != ' '&&arr[p2]!='.')             //注意最后一个单词以点好结尾的判断！！！扣点边界
			p2++;
		else
		{
			if (ans < (p2 - p1)) 
			{
				ans = p2 - p1;
				for (j = 0; j < ans; j++)
					res[j] = arr[j + p1];
			}
			p2++;
			p1 = p2;
		}
	}
	for (i = 0; i < ans; i++)
		printf("%c", res[i]);
	return 0;
}*/