/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int N = 0, i = 0, j = 0, k = 0, num = 0;
	scanf("%d", &N);
	int two[32] = { 0 };
	int eight[11] = { 0 };
	char six[10];
	printf("%dturn into2:\n", N);
	for (i = 31; i >= 0; i--)                               //����i--���Ӷ����Ƹ�λ�жϵ���λ���洢��j++,�ڶ����������ж��ǰ��Ӹ�λ����λ�洢
		two[j++] = (N & (1 << i)) == 0 ? 0 : 1;             //ע������Ҫ�жϽ����0�������0˵�����������λ����0�������������鸳��0���������0˵�����������λ����1��ע�⵽������Ľ��������1���������������鸳��1
	//printf("%d", j);
	for (i = 0; i <j; i++)                                  //����������Ӹ�λ����λ���������һ�ҵ�1��ǰ��ȫ��0����Ч�������������ô��ʼ��������������е���
		if (two[i] == 1)                                    
			break;
	int size = j - i;
	int* help = (int*)malloc(sizeof(int) * size);          //��һ�����������¼����������Ķ�������ʽ����Ч����Щλ��������˽��ƺ�ʮ�����Ƶ�ת������������б�������Ҫ��ʹ��ԭ����two������
	//printf("%d",size);
	for (; i < j; i++)
	{
		printf("%d", two[i]);
		help[k++] = two[i];
	}
	//printf("\n");
	//for (i = 0; i < k; i++)
		//printf("%d", help[i]);
	printf("\n");
	printf("%dturn into8:\n", N);
	i = size-1;
	//printf("%d\n", i);
	j = 0;
	k = 1;                   //�����Ƶ��˽��Ƶ�ת�����Ǵӵ�λ����λ��������ÿ��������ʮ���Ʊ�ʾ���ǰ˽���һ��λ�ϵ�������k��¼��ǰ�Ѿ����˼���������λ
	while (i>=0)
	{
		if (k==1 && help[i] == 1)
			num += help[i];
		else if (k==2 && help[i] == 1)
			num += 2 * help[i];
		else if(k==3)
		{
			if (help[i] == 1)
				num += 4 * help[i];
			eight[j++] = num;
			num = 0;
		}
		if (i == 0 && k != 3)         //ע�����û����������������λ���������ʱ��Ҫ�ѽ���ŵ��˽��������У���������Ϊ0��
			eight[j++] = num;
		i--;
		if (k == 3)
			k = 1;
		else
			k++;
	}
	for (i = j-1; i>=0; i--)
		printf("%d", eight[i]);
	printf("\n");
	printf("%dturn into16:\n", N);
	i = size - 1;
	j = 0;
	k = 1;                            //�����Ƶ�ʮ�����Ƶ�ת�����Ǵӵ�λ����λ��������ÿ�ĸ�����ʮ���Ʊ�ʾ����ʮ������һ��λ�ϵ�������k��¼��ǰ�Ѿ����˼���������λ
	num = 0;
	while (i >= 0)
	{
		if (k == 1 && help[i] == 1)
			num += help[i];
		else if (k == 2 && help[i] == 1)
			num += 2 * help[i];
		else if (k == 3 && help[i] == 1)
			num += 4 * help[i];
		else if (k==4)
		{
			if (help[i] == 1)
				num += 8 * help[i];
			if (num >= 10)
				six[j++] = num + 55;          //����ʮ������λ��ʾ�к�����ĸ������ʮ��������������ַ����Ͷ��������ͣ�ע�����ASICC��ֵ��ת��
			else
				six[j++] = num + 48;
			num = 0;
		}
		if (i == 0 && k != 4)
			six[j++] = num + 48;             //��������ĸ����ͨ�ļ��������numҲҪ����ת��
		i--;
		if (k == 4)
			k = 1;
		else
			k++;
	}
	for (i = j-1; i >= 0; i--)
		printf("%c", six[i]);

	return 0;
}*/