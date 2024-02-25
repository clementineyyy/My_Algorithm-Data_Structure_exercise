//用栈结构实现队列：用两个栈来回倒换,注意两条规则：1.每次必须把push栈里的所有元素都弹到pop栈里，不能有剩余；2.必须在pop栈全部空了之后才可以从push栈里弹新的元素进来
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
		printf("队列满了，不能再加了！\n");
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