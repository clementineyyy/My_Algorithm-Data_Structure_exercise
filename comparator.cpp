//�Ƚ���Ӧ����ϵͳ�ṩ�Ŀ⺯���У�����˳�򻥻�
//�������ȷ��ص�һ��ʵ�Σ��������ȷ��صڶ���ʵ�Σ�0����㷵����һ��
/*include <stdio.h>
#include <stdlib.h>
#include <time.h>

int n = 0;

int comparator(const void* a, const void* b)      //�β������ǳ�����������
{
	return *(int*)a - *(int*)b;                  //˳�����򣺵���������Ҫ��ת��Ϊָ��������ȡ����
}


int comparator(const void* a, const void* b)
{
	return *(int*)b - *(int*)a;                 //�������򣺵ݼ�
}

int* generaterandomarray()
{
	srand((unsigned)time(NULL));
	n = rand() % 10 + 1;
	int* p = (int*)malloc(sizeof(int) * n);
	for (int i = 0; i < n; i++)
		p[i] = rand() % 11;
	for (int i = 0; i < n; i++)
		printf("%d ", p[i]);
	printf("\n");

	return p;
}


int main()
{
	int* arr = generaterandomarray();
	qsort(arr, n, sizeof(int), comparator);              //ע�����������ʵ�δ��ݵĸ�ʽ��˳��
	for (int i = 0; i < n; i++)
		printf("%d ", arr[i]);
	printf("\n");

	return 0;
}*/
