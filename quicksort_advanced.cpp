/*//�ǵݹ���ǵ�������д����
#include <stdio.h>
#include <stdlib.h>
#define n 10

struct job                     //��ÿһ�ο��ŵ���һ��С���񣬷Ž�ջ����
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

struct LNode* pop(struct LNode* head,struct job* res)                 //��ͷ�ˣ�Ҫ����ͷ�ڵ�!!!!!!
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
	int less = L - 1, more = R;                            //������R����R+1���������潻��������������һ�����ǵ����������
	int i = L;
	int num = L + rand() % (R-L+1);                 //���ȡ��������ֱ��ȡ���һ����
	swap(arr, num, R);                         //���ȡ��Ҫ�����һ��������
	while (i < more)                          //�����±�i�ʹ��������йأ�����һ���Ա������������������С�ڵ�����С��
		if (arr[i] < arr[R])                     //����������Ǻ����һ�����Ƚϣ��±���R
			swap(arr, ++less, i++);            //С������߽��ȼӼ�
		else if (arr[i] == arr[R])
			i++;
		else if (arr[i] > arr[R])
			swap(arr, --more, i);              //��������߽��ȼ���
	swap(arr, more, R);                        //����Ĺ��������һ������û����λ�ã������ŵ���������
	struct job res;
	res.L = less;                            //����С��������С�������һ��������ô��⣩���������ǰһ��
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
		printf("%d ",arr[i]);                             //�������±����м�ķָ��
	return 0;
}*/