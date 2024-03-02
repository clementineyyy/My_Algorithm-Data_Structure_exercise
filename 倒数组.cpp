/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a[10], i = 1, j;
	scanf("%d", &a[0]);
	while (getchar() == ' ')
		scanf("%d", &a[i++]);
	int res = a[0];
	for (j = 0; j < i-1; j++)
		a[j] = a[j + 1];
	a[i-1] = res;
	printf("Result:\n");
	for (j = 0; j < i; j++)
		printf("%d ", a[j]);
	return 0;
}*/