/*#define _CRT_SECURE_NO_WARNINGS
//��ӡ���������ݵĶ�����32λ
#include <stdio.h>

void print(int num)
{
	int i = 31;
	while (i >=0)
		printf("%d", (num & (1 << i--)) == 0 ? 0 : 1);            //�����ȴӸ�λ��ʼ�ݼ�����Ϊ��ӡ��˳���Ǵ����ң��Ӹ�λ����λ
	printf("\n");
}

int main()
{
	int num = 5;
	print(num);

	return 0;
}*/