//��ʵ��ջ�������ܵ�����£�ʵ�ֺ������ҵ�ջ�е���Сֵ��ʱ�临�Ӷ�ΪO(1)
//����������ʵ��ջ
/*#include <stdio.h>
#define n 5

int size = 0;
int mark = 0;

void push(int stack[],int help[],int val)
{
	if (size != n)
	{
		stack[mark] = val;
		if (mark == 0)
			help[0] = val;
		else if (mark != 0)
		{
			if (val > help[mark - 1])
				help[mark] = help[mark - 1];
			else if (val <= help[mark - 1])
				help[mark] = val;
		}
		mark++;
		size++;
	}
	else if (size == n)
		printf("ջ���ˣ������ټ��ˣ�\n");
}

int minstack(int help[])
{
	if (size != 0)
		return help[mark - 1];
	else if (size == 0)
		printf("��ջ���Ҳ�����Сջ��\n");
	return 0;
}

void print(int stack[], int help[])
{
	if (size != 0)
	{
		int i;
		for (i = 0; i < mark; i++)
			printf("%d ", stack[i]);
		printf("\n");
		for (i = 0; i < mark; i++)
			printf("%d ", help[i]);
		printf("\n");
	}
	else if (size == 0)
		printf("��ջ��\n");
}

int poll(int stack[], int help[])
{
	int num;
	if (size != 0)
	{
		num = stack[mark - 1];
		if (mark != 0)
			mark--;
		else if (mark == 0)
			mark = 0;
		size--;
	}
	else if (size == 0)
		printf("��ջ�������ٵ����ˣ�\n");

	return num;
}

int main()
{
	int stack[n] = { 0 }, help[n] = { 0 };
	push(stack, help, 1);
	push(stack, help, 2);
	push(stack, help, 3);
	print(stack, help);
	printf("%d\n", minstack(help));
	printf("%d\n", poll(stack, help));
	
	return 0;
}*/