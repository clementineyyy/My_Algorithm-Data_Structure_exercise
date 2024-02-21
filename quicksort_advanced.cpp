/*//非递归而是迭代方法写快排
#include <stdio.h>
#include <stdlib.h>
#define n 10

struct job                     //把每一次快排当成一次小任务，放进栈里面
{
	int L;
	int R;
};

struct LNode
{
	struct job cur;
	struct LNode* next;
};

struct LNode* stackpush(struct LNode* head,int L,int R)
{
	struct LNode* pre = (struct LNode*)malloc(sizeof(struct LNode));
	if (pre != NULL)
	{
		pre->cur.L = L;
		pre->cur.R = R;
	}
	if (head == NULL)
	{
		pre->next = NULL;
		head = pre;
	}
	else
	{
		pre->next = head;
		head = pre;
	}
	return head;
}

bool isEmpty(struct LNode* head)
{
	return head == NULL;
}

struct LNode* pop(struct LNode* head,struct job* res)                 //换头了，要返回头节点!!!!!!
{
	*res = head->cur;
	struct LNode* cur = head;
	head = head->next;
	free(cur);
	cur = NULL;
	return head;
}

void swap(int arr[], int i, int j)
{
	int t = 0;
	t = arr[i];
	arr[i] = arr[j];
	arr[j] = t;
}

struct job partition(int arr[], int L, int R)
{
	int less = L - 1, more = R;                            //这里是R不是R+1，这样下面交换过后大于区域第一个数是等于区域的数
	int i = L;
	int num = L + rand() % (R-L+1);                 //随机取数而不是直接取最后一个数
	swap(arr, num, R);                         //随机取数要和最后一个数交换
	while (i < more)                          //遍历下标i和大于区域有关，不是一股脑遍历到数组结束，不是小于等于是小于
		if (arr[i] < arr[R])                     //交换过后就是和最后一个数比较，下标是R
			swap(arr, ++less, i++);            //小于区域边界先加加
		else if (arr[i] == arr[R])
			i++;
		else if (arr[i] > arr[R])
			swap(arr, --more, i);              //大于区域边界先减减
	swap(arr, more, R);                        //上面的过程中最后一个数都没动过位置，把它放到等于区域
	struct job res;
	res.L = less;                            //不是小于区域是小于区域加一（看你怎么理解）等于区域的前一个
	res.R = more+1;
	return res;
}

int size = 0;

int main()
{
	int arr[n] = { 9,8,7,6,5,4,3,2,1,0 };
	int i = 0;
	struct LNode* head = NULL;
	struct job s;
	s.L = 0;
	s.R = n - 1;
	head = stackpush(head, s.L, s.R);
	size++;
	while (size!=0)
	{
		head= pop(head,&s);
		size--;
		struct job t=partition(arr, s.L, s.R);
		if (t.L > s.L)
		{
			head = stackpush(head, s.L, t.L);
			size++;
		}
		if (t.R < s.R)
		{
			head = stackpush(head, t.R, s.R);
			size++;
		}
	}
	for (int i = 0; i < n; i++)
		printf("%d ",arr[i]);                             //别手误导致报错：中间的分割逗号
	return 0;
}*/