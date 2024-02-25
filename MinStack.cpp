//在实现栈基础功能的情况下，实现函数：找到栈中的最小值且时间复杂度为O(1)
//这里用数组实现栈
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
		printf("栈满了，不能再加了！\n");
}

int minstack(int help[])
{
	if (size != 0)
		return help[mark - 1];
	else if (size == 0)
		printf("空栈，找不到最小栈！\n");
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
		printf("空栈！\n");
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
		printf("空栈，不能再弹出了！\n");

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