/*#define _CRT_SECURE_NO_WARNINGS
//ʵ��λͼ��ʹ���������͵�ÿһλ����ʾ���ݵĴ��ڣ���ʵ����ɾ��ȹ��ܣ��ȹ�ϣ���
//�ص���λ��������ʹ�ã�λ����ע�����ȼ������ţ�
#include <stdio.h>
#include <stdlib.h>

 long* BitMap(int maxval)
{
	 int size = (maxval + 64) >> 6;                             //����һ��λͼ����������Ϊ�����ͣ�64�ֽڣ��õ����ٳ���������Ĵ�С,����64��Ϊ����ȡ�����൱����������1
	 long* bits = (long*)malloc(sizeof(long) * size);           //��Ϊ�������̶���С������ʹ�ö�̬����ռ亯��

	 return bits;
}

 void add(long bits[], int val)
 {
	 bits[val >> 6] |= (1L << (val & 63));                       //����1����Ҫ����long������Ĭ��1�����ͣ�ֻ��32�ֽڣ��������ƶ����63�ֽڣ�long�ͣ�����Ϊ������0-63,��ȷ�����ĸ�������ȷ����һλ,���������ǻ�����
 }

 void del(long bits[], int val)
 {
	 bits[val >> 6] &= ~(1L << (val & 63));                      //�κ�����0���϶���0��0ȡ����1��1��������λ��
 }

 bool contains(long bits[], int val)
 {
	 return (bits[val >> 6] & (1L << (val % 63))) != 0;          //ֻ��1��1���������1������������0����1����˵�����ڣ���������0��˵��������
 }

int main()
{
	int maxval = 100;
	long* bits = BitMap(maxval);
	add(bits, 1);
	add(bits, 2);
	add(bits, 3);
	del(bits, 1);
	if (contains(bits, 1))
		printf("yes\n");
	else
		printf("no\n");
	if (contains(bits, 2))
		printf("yes\n");
	else
		printf("no\n");

	return 0;
}*/