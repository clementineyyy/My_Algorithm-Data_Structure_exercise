//倒换的时候直接改变数组名就行了，分类讨论的话浪费程序,固定数组的话注意不能在函数中改变形参指针的指向！！！
/*#include <stdio.h>
#define n 5

int pushsize = 0;
int popsize = 0;

void push(int pushqueue[],int val)
{
	if (pushsize != n)
		pushqueue[pushsize++] = val;
	else if (pushsize == n)
		printf("栈满了，不能再加了！\n");
}

void turn(int pushqueue[], int popqueue[])
{
	if (pushsize != 0)
		for (; popsize < pushsize - 1; popsize++)
			popqueue[popsize] = pushqueue[popsize];
	else if (pushsize == 0)
		printf("栈空了，不能弹出了！\n");
}

int pop(int* pushqueue, int* popqueue)               //不能试图在函数中改变形参的指向来改变实参的指向！！！！
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