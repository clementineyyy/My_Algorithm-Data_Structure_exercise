/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main()
{
	int n, m, i, j;
	scanf("%d %d ", &n, &m);
	int ans[100][100], help[100][100];
	for (i = 0; i < n; i++)
		for (j = 0; j < m; j++)
		{
			if (i == n - 1 && j == m - 1)
				scanf("%d", &ans[i][j]);         //注意加地址符！！！！不然什么都运行不出来
			else
				scanf("%d ", &ans[i][j]);
		}
	for (i = 1; i < n - 1; i++)
		for (j = 1; j < m - 1; j++)
		{
			float x = ans[i][j - 1] + ans[i][j + 1] + ans[i - 1][j] + ans[i + 1][j] + ans[i][j];
			float y = 5;
			help[i][j] = lroundf(x / y);
		}
	for (i = 1; i < n - 1; i++)
		for (j = 1; j < m - 1; j++)
			ans[i][j] = help[i][j];
	for (i = 0; i < n; i++)                     //注意输出格式
	{
		for (j = 0; j < m; j++)
			printf("%d ", ans[i][j]);
		printf("\n");
	}

	return 0;
}*/