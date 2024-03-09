/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

char* strcnt(char str1[], char str2[],int* size)
{
	int p1 = 0, p2 = 0, i = 0;
	while (str1[p1] != '\0')
		p1++;
	while (str1[p2] != '\0')
		p2++;
	int length = p1 + p2;
	char* str3 = (char*)malloc(sizeof(char) * length);
	for (p1 = 0; str1[p1] != '\0'; p1++)
		str3[i++] = str1[p1];
	for (p2 = 0; str2[p2] != '\0'; p2++)
		str3[i++] = str2[p2];
	*size = i;
	return str3;
}

int main()
{
	char str1[7] = { "hello " }, str2[7] = { "china!" };
	int size = 0;
	char* str3 = strcnt(str1, str2, &size);
	for (int i = 0; i < size; i++)
		printf("%c", str3[i]);
	
	return 0;
}*/