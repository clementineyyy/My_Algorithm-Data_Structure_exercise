//�����������⣺���������аѴ���num��������ߣ�����num�������м䣬����num�������ұߣ�ʱ�临�Ӷ�O(N),�ռ临�Ӷ�O(1)
/*#include <stdio.h>
#define n 8

void swap(int arr[], int i, int j)
{
	int t = 0;
	t = arr[i];
	arr[i] = arr[j];
	arr[j] = t;
}

int main()
{
	int arr[n] = { 3, 5, 6, 7, 4, 3, 5, 8 }, num = 5;
	int i = 0, less = i - 1, more = n;      //���ֳ���������less����С������more��������������������м�б��ŵ�������
	while (i < more)                        //һ�������±�ʹ��������غϣ�����ѭ��,����������ʹ��������غ�
	{
		if (arr[i] < num)
			swap(arr, i++, ++less);
		else if (arr[i] == num)
			i++;
		else                                //������Ԫ�ش���num������Ԫ�غʹ��������ǰһ��������������λ�������������������������±겻��
			swap(arr, i, --more);
	}
	for (i = 0; i < n; i++)
		printf("%d ", arr[i]);
	printf("\n");

	return 0;
}*/