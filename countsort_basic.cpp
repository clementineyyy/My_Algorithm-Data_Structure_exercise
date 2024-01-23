//计数排序：对一组有范围的数，另外开辟一个遍历范围的数组计数，再输出
/*#include <stdio.h>
#define n  10

int main()
{
	int arr[n] = { 9,5,2,7,4,8,6,9,1,0 };
	int count[10] = { 0 };
	for (int i = 0; i < n; i++)
		count[arr[i]]++;
	for (int i = 0; i < n; i++)
		printf("%d ", count[i]);
	printf("\n");
	for (int i = 0; i < n; i++)
	if (count[i] == 0)
			continue;
	else
	{ 
		int j = 0;                         //每一次使用j之前都要归零
		while (j < count[i])
		{
			printf("%d ", i);
			j++;
		}
	}
	printf("\n");

	return 0;
}*/
