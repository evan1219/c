#include<stdlib.h>
#include<stdio.h>
int input1();
int num;
void ex6_7()
{
	num = input1();
	printf("��J���ܼƬ�:%d\n",num);
}
int input1()
{
	int total;
	printf("Please input a number:");
	scanf_s("%d", &total);
	return total;
}