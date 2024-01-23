/*#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int n = 0;

int* generaterandomarray(int maxsize,int maxvalue)
{
	srand((unsigned)time(NULL));
	n = rand() % maxsize + 1;
	int* p = (int*)malloc(sizeof(int) * n);
	for (int i = 0; i < n; i++)
		p[i] = rand() % maxvalue;
	for (int i = 0; i < n; i++)
		printf("%d ", p[i]);
	printf("\n");

	return p;
}


int main()
{
	const int maxsize = 10, maxvalue = 10;
	int* arr = generaterandomarray(maxsize,maxvalue);
	int count[maxsize] = { 0 };
	for (int i = 0; i < n; i++)                        //注意每一次循环的次数和对应的变量
		count[arr[i]]++;
	for (int i = 0; i < maxsize; i++)
		printf("%d ", count[i]);
	printf("\n");
	for (int i = 0; i < maxsize; i++)
		if (count[i] == 0)
			continue;
		else
		{
			int j = 0;                                //每一次使用j之前都要归零
			while (j < count[i])
			{
				printf("%d ", i);
				j++;
			}
		}
	printf("\n");

	return 0;
}*/
