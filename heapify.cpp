//Ҫ������û��������е��������ɾ���������������Ȼʹ������һ�������
/*#include <stdio.h>
#define n 8

int heapsize = n;


void swap(int arr[], int i, int j)
{
	int t = 0;
	t = arr[i];
	arr[i] = arr[j];
	arr[j] = t;
}


void heapinsert(int arr[], int index)
{
	while (arr[index] > arr[(index - 1) / 2])                     //ע������ķ����Ǵ��ں�
	{
		swap(arr, index, (index - 1) / 2);
		index = (index - 1) / 2;
	}
}


void heapify(int arr[], int index)                               //��Ϊ�Ƚϣ����Ǹ���㣬���Һ��ӽ����������һ����󣬰����ķŵ����ϣ�ֻ��Ҫ�任��������һ֧������������Ȼ�Ǵ����
{
	while (index * 2 + 1 < heapsize)                                 //˵����һ���к���,��������
	{
		int largest = (index * 2 + 2) < heapsize&&arr[index * 2 + 1] < arr[index * 2 + 2] ? index * 2 + 2 : index * 2 + 1;      //˵����һ�����Һ��Ӷ������ӱ��Һ��Ӵ��𣬿����Һ���,�������ȱȽ���û���Һ���
		largest = arr[largest] > arr[index] ? largest : index;              //�ȽϵĲ����±�����±���ָ�������ݴ�С
		if (largest == index)
			break;                                                  //һ���������Ȼ���ڽϴ���ӽڵ㣬���˳�ѭ�������������������ٱȽ����������
		swap(arr, largest, index);
		index = largest;                                            //indexҪ�ܵ���һ���������Ƚ����Һ��Ӵ�С
	}
}



int main()
{
	int arr[n] = { 3,5,6,7,4,3,5,8 }, i;
	for (i = 0; i < heapsize; i++)
		heapinsert(arr, i);                       //heapinsert��Ҫѭ������Ϊģ���û�һ��һ�������ݣ����Ǵӵ�ǰ�¼�������ݵ�λ�ÿ�ʼ���Ϻ͸����Ƚ�
	for (i = 0; i < heapsize; i++)
		printf("%d ", arr[i]);
	printf("\n");
	printf("%d\n", arr[0]);
	swap(arr, 0, heapsize - 1);
	heapsize--;
	heapify(arr, 0);                              //heapify�Ͳ���ѭ���ˣ�ֱ�Ӵ���ϵĽ�㿪ʼ���¿�
	for (i = 0; i < heapsize; i++)
		printf("%d ", arr[i]);
	printf("\n");

	return 0;
}*/