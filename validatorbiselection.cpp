//���ֲ��ң�����һ�����������������в����Ƿ���������
/*#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int n = 0;                                                    //n�������鳤��--�ж��ٸ�Ԫ��

void biselection(int num, int arr[])
{
	int fir = 0, end = n, bi = (fir + end) / 2;                 //bi��ÿһ�ζ���֮��������±�,Ҫд��ÿһ��������β�±���ӳ���2�����м���±�
	if (arr[0] > num || arr[n - 1] < num)                       //��Ϊ���������飬��������ҵ������ڷ�Χ֮�ڣ�ֱ���ж������������
		printf("the number do not exist!\n");
	else
	{
		while (bi >= 0)                                         //ֻҪ�±�>=0
			if (arr[bi] == num)                                 //ֻ��ͨ�����ֵ�λ�øպ����������λ������������ҵ�
			{
				printf("the number do exist!\n");
				break;
			}
			else if (arr[bi] > num)                             //����Ԫ�ش�С�����������������
			{
				end = bi;                                       //�ƶ�������β�±�
				bi = (fir + end) / 2;
			}
			else if (arr[bi] < num)                             //�����������ұ�
			{
				fir = bi;
				bi = (fir + end) / 2;
			}
	}
}


void normalselection(int num,int arr[])
{
	int i=0;
	for (i = 0; i < n && arr[i] != num; i++);                   //����ѭ���������ҵ��������������������˻�û�ҵ�
	if (i < n)
		printf("the number do exist!\n");
	else printf("the number do not exist!\n");
}


int* generaterandomarray(int maxsize, int maxvalue)
{
	srand((unsigned)time(NULL));
	n = rand() % (maxsize + 1);                                           //���鳤��Ϊ0-10
	int* p = (int*)malloc(sizeof(int) * n);                    //���������ֶ�����ڴ�ռ䣬ʹ�ö�̬�ڴ���亯��
	int i;
	for (i = 0; i < n; i++)
		p[i] = rand() % (maxvalue + 1);                             //����Ԫ�ش�СΪ0-100        
	for (i = 0; i < n; i++)
		printf("%d ", p[i]);
	printf("\n");

	return p;
}


void swap(int arr[], int i, int j)
{
	arr[i] = arr[i] ^ arr[j];
	arr[j] = arr[i] ^ arr[j];
	arr[i] = arr[i] ^ arr[j];
}


void insert(int arr[])
{
	int i, j;
	for (i = 1; i < n; i++)
		for (j = i - 1; j >= 0 && arr[j] > arr[j + 1]; j--)
			swap(arr, j, j + 1);
	for (i = 0; i < n; i++)
		printf("%d ", arr[i]);
	printf("\n");
}

int main()
{
	int num = 0, * arr1, * arr2, i;
	int testtime = 10, maxsize = 10, maxvalue = 10;
	for (i = 0; i < testtime; i++)
	{
		arr1 = generaterandomarray(maxsize, maxvalue);
		insert(arr1);
		arr2 = arr1;
		srand((unsigned)time(NULL));
		num = rand() % 10;                                           //�����ҵ����ִ�СΪ0-1000�������
		printf("%d\n", num);
		if (n == 0)                                                    //������鲻����
			printf("the array do not exist\n");
		else if (n == 1)                                               //�������ֻ��һ����
		{
			if (arr1[0] == num)
				printf("the number do exist!\n");
			else printf("the number do not exist!\n");
		}
		else if (n >= 2)                                               //���鳤�ȴ���2�Ŷ��ֲ���
		{
			biselection(num, arr1);
			normalselection(num,arr2);
		}
	}

	return 0;
}*/