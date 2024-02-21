/*#include <stdio.h>
#include <stdlib.h>
#define n 10

void merge(int arr[], int L, int M, int R)
{
	int p1, p2;
	p1 = L;
	p2 = M + 1;
	int* help = (int*)malloc(sizeof(int) * (R - L + 1));         //����������������
	int i = 0;
	while (p1 <= M && p2 <= R)
		help[i++] = arr[p1] <= arr[p2] ? arr[p1++] : arr[p2++];
	while (p1 <= M)
		help[i++] = arr[p1++];
	while (p2 <= R)
		help[i++] = arr[p2++];
	for (int j = 0; j < i; j++)                                  //������С�ںŶ�����С�ڵ��ں�
		arr[L+j] = help[j];
	free(help);
	help = NULL;
}

int main()
{
	int arr[n] = { 9,8,7,6,5,4,3,2,1,0 };
	int step = 1;                                               //������ʼ��Ϊ1��
	int L = 0, M = 0, R = 0;                                    //�������±�һ��ʼ��0
	while (step < n)                                            //����������ڵ������鳤�ȣ����÷���鲢����ֱ���˳�ѭ��
	{
		L = 0;
		while (L < n)                                           //���һ�Ի�������:
		{
			if (n - L > step)                                   //˵��������
				M = L + step - 1;
			else                                                //���һ��ֻ������,û�����飬���鲢��ֱ���˳�ѭ��
				break;                                            
			if (n - M - 1 > step)                               //��һ��if���涨M����Խ�磨Խ���±꣩��Mֻ��С�ڵ�������߽�
				R = M + step;
			else
				R = n - 1;
			merge(arr, L, M, R);
			if (R == n - 1)                                     //ȫ�����ؿ����±�Խ����������⼫�����
				break;
			else
				L = R + 1;
		}
		if (step > (n / 2))                                     //ע�������Ǵ��ںŶ����Ǵ��ڵ��ں�
			break;
		else
			step *= 2;
	}
	for (int i = 0; i < n; i++)
		printf("%d ", arr[i]);
	return 0;
}*/