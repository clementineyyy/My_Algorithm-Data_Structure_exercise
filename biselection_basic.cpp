//���ֲ��ң�����һ�����������������в����Ƿ���������
/*#include <stdio.h>
#define n 10

void biselection(int num,int arr[])
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

int main()
{
	int num = 0, arr[n] = { 0,1,2,3,4,5,6,7,8,9 };
	scanf("%d", &num);
	if (n == 0)                                                    //������鲻����
		printf("the array do not exist\n");
	else if (n == 1)                                               //�������ֻ��һ����
	{
		if (arr[0] == num)
			printf("the number do exist!\n");
		else printf("the number do not exist!\n");
	}
	else if(n>=2)                                                  //���鳤�ȴ���2�Ŷ��ֲ���
		biselection(num, arr);

	return 0;
}*/