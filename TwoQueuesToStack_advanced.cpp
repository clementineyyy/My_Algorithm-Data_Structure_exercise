//������ʱ��ֱ�Ӹı������������ˣ��������۵Ļ��˷ѳ���,�̶�����Ļ�ע�ⲻ���ں����иı��β�ָ���ָ�򣡣���
/*#include <stdio.h>
#define n 5

int pushsize = 0;
int popsize = 0;

void push(int pushqueue[],int val)
{
	if (pushsize != n)
		pushqueue[pushsize++] = val;
	else if (pushsize == n)
		printf("ջ���ˣ������ټ��ˣ�\n");
}

void turn(int pushqueue[], int popqueue[])
{
	if (pushsize != 0)
		for (; popsize < pushsize - 1; popsize++)
			popqueue[popsize] = pushqueue[popsize];
	else if (pushsize == 0)
		printf("ջ���ˣ����ܵ����ˣ�\n");
}

int pop(int* pushqueue, int* popqueue)               //������ͼ�ں����иı��βε�ָ�����ı�ʵ�ε�ָ�򣡣�����
{
	turn(pushqueue, popqueue);
	int num = pushqueue[pushsize - 1];
	pushsize = 0;
	for (; pushsize < popsize; pushsize++)
		pushqueue[pushsize] = popqueue[pushsize];
	popsize = 0;

	return num;
}

void print(int arr[], int size)
{
	for (int i = 0; i < size; i++)
		printf("%d ", arr[i]);
	printf("\n");
}

int main()
{
	int pushqueue[n] = { 0 }, popqueue[n] = { 0 };
	push(pushqueue, 1);
	push(pushqueue, 2);
	push(pushqueue, 3);
	push(pushqueue, 4);
	push(pushqueue, 5);
	push(pushqueue, 6);
	print(pushqueue, pushsize);
	print(popqueue, popsize);
	if (pushsize != 0)
		printf("%d\n", pop(pushqueue, popqueue));
	print(pushqueue, pushsize);
	print(popqueue, popsize);
	if (pushsize != 0)
		printf("%d\n", pop(pushqueue, popqueue));
	print(pushqueue, pushsize);
	print(popqueue, popsize);
	push(pushqueue, 7);
	print(pushqueue, pushsize);
	print(popqueue, popsize);
	if (pushsize != 0)
		printf("%d\n", pop(pushqueue, popqueue));
	print(pushqueue, pushsize);
	print(popqueue, popsize);

	return 0;
}*/