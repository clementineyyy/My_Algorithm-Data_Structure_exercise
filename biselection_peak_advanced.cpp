//在一个无序数组中找到一个局部最大值（严格大于）即可，已知任意两个相邻的数组元素不相等
/*#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int n = 0;

void peak(int arr[])
{
	int fir = 0, end = n, mid = (fir + end) / 2;
	if (arr[0] > arr[1])
		printf("the peak is %d at 0!\n", arr[0]);
	else if (arr[n - 1] > arr[n - 2])
		printf("the peak is %d at %d!\n", arr[n - 1], n - 1);
	else
	{
		while (fir <= end)
		{
			if (arr[mid] > arr[mid - 1] && arr[mid] > arr[mid + 1])
			{
				printf("the peak is %d at %d!\n", arr[mid], mid);
				break;
			}
			else if (arr[mid] < arr[mid + 1])
			{
				fir = mid;
				mid = (fir + end) / 2;
				continue;
			}
			else if (arr[mid] < arr[mid - 1])
			{
				end = mid;
				mid = (fir + end) / 2;
			}
		}
	}
}


int* generaterandomarray(int maxsize, int maxvalue)
{
	srand((unsigned)time(NULL));
	n = rand() % 11;
	int* p = (int*)malloc(sizeof(int) * n);
	int i;
	for (i = 0; i < n; i++)
		p[i] = rand() % 11;
	for (i = 0; i < n; i++)
		printf("%d ", p[i]);
	printf("\n");

	return p;
}


int main()
{
	int* arr;;
	int maxsize = 10, maxvalue = 100;
	arr=generaterandomarray(maxsize, maxvalue);
	if (n == 0)
		printf("the array do not exist!\n");
	else if (n == 1)
		printf("the peak do not exist!\n");
	else if (n >= 2)
		peak(arr);

	return 0;
}*/
