//用队列实现栈：还是两个队列来回倒，但是留下最后一个元素弹出,然后如果继续放入数，放到新倒的队列中去（pop/push),这样反复
/*#include <stdio.h>
#define n 5

int pushsize = 0;
int popsize = 0;

void push(int pushqueue[],int popqueue[],int val)
{
	if (pushsize == 0 && popsize == 0)
		pushqueue[pushsize++] = val;
	else if (popsize == 0 && pushsize < n)
		pushqueue[pushsize++] = val;
	else if (pushsize == 0 && popsize < n)
		popqueue[popsize++] = val;
	else if (pushsize == n || popsize == n)
		printf("栈满了，不能再加了！\n");
}

int turn(int pushqueue[], int popqueue[])
{
	int num;
	if (pushsize != 0&&popsize==0)
	{
		for (; popsize < pushsize-1; popsize++)
			popqueue[popsize] = pushqueue[popsize];
		num = pushqueue[pushsize - 1];
		pushsize = 0;
	}
	else if (popsize != 0 && pushsize == 0)
	{
		for (; pushsize < popsize - 1; pushsize++)
			pushqueue[pushsize] = popqueue[pushsize];
		num = popqueue[popsize - 1];
		popsize = 0;
	}

	return num;
}

int pop(int pushqueue[], int popqueue[])
{
	int num=turn(pushqueue, popqueue);

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
	push(pushqueue, popqueue, 1);
	push(pushqueue, popqueue, 2);
	push(pushqueue, popqueue, 3);
	push(pushqueue, popqueue, 4);
	push(pushqueue, popqueue, 5);
	push(pushqueue, popqueue, 6);
	print(pushqueue, pushsize);
	print(popqueue, popsize);
	if (pushsize != 0 || popsize != 0)
		printf("%d\n", pop(pushqueue, popqueue));
	print(pushqueue, pushsize);
	print(popqueue, popsize);
	if (pushsize != 0 || popsize != 0)
		printf("%d\n", pop(pushqueue, popqueue));
	print(pushqueue, pushsize);
	print(popqueue, popsize);

	return 0;
}*/