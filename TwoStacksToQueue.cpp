//��ջ�ṹʵ�ֶ��У�������ջ���ص���,ע����������1.ÿ�α����pushջ�������Ԫ�ض�����popջ�������ʣ�ࣻ2.������popջȫ������֮��ſ��Դ�pushջ�ﵯ�µ�Ԫ�ؽ���
/*#include <stdio.h>
#define n 5

int pushsize = 0;
int popsize = 0;

void push(int pushstack[], int val)
{
	if (pushsize != n)
	{
		pushstack[pushsize] = val;
		pushsize++;
	}
	else if (pushsize == n)
		printf("�������ˣ������ټ��ˣ�\n");
}

void turn(int pushstack[], int popstack[])
{
	while (pushsize > 0)
		popstack[popsize++] = pushstack[--pushsize];
}

void print(int arr[],int size)
{
	int i;
	for (i = 0; i < size; i++)
		printf("%d ", arr[i]);
	printf("\n");
}

int pop(int pushstack[],int popstack[])
{
	int num;
	if (popsize != 0)
		num = popstack[--popsize];
	else if (popsize == 0)
	{
		turn(pushstack, popstack);
		pop(pushstack, popstack);
	}

	return num;
}

int main()
{
	int pushstack[n], popstack[n];
	push(pushstack, 1);
	push(pushstack, 2);
	push(pushstack, 3);
	push(pushstack, 4);
	push(pushstack, 5);
	push(pushstack, 6);
	print(pushstack, pushsize);
	turn(pushstack, popstack);
	print(pushstack, pushsize);
	print(popstack, popsize);
	printf("%d\n", pop(pushstack,popstack));
	printf("%d\n", pop(pushstack, popstack));

	return 0;
}*/