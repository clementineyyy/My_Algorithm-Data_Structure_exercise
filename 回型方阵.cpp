/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int cube[9][9] = { 0 }, n = 0, i, j, L, R, T, D, num = 1;            //正方形，用边界框住来做
	scanf("%d", &n);
	L = T = 0;
	R = D = n - 1;
	for (i = L; i <=R; i++)
		cube[T][i] = cube[D][i] = cube[i][L] = cube[i][R] = num;
	L++;
	T++;
	R--;
	D--;
	num++;
	if (n % 2 == 0)
		while (L < R)
		{
			for (i = L; i <= R; i++)
				cube[T][i] = cube[D][i] = cube[i][L] = cube[i][R] = num;
			L++;
			T++;
			R--;
			D--;
			num++;
		}
	else if (n % 2 == 1)
	{
		while (L < R)
		{
			for (i = L; i <= R; i++)
				cube[T][i] = cube[D][i] = cube[i][L] = cube[i][R] = num;
			L++;
			T++;
			R--;
			D--;
			num++;
		}
		cube[L][R] = num;
	}
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
		{
			if (j == n - 1)
				printf("%d\n", cube[i][j]);
			else
				printf("%d ", cube[i][j]);
		}

	return 0;
}*/