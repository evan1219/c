#include<stdio.h>
#include<stdlib.h>
void printstar(int);
void function_3b()
{
	int num;
	printf("�A�n�h�֬P�P:");
	scanf_s("%d", &num);
	printstar(num);
}
void printstar(int n)
{
	int i;
	for (i = 1; i < n; i++)
		printf("*");
	printf("\n");
}