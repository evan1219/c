#include<stdlib.h>
#include<stdio.h>
int input1();
int num;
void ex6_7()
{
	num = input1();
	printf("輸入的變數為:%d\n",num);
}
int input1()
{
	int total;
	printf("Please input a number:");
	scanf_s("%d", &total);
	return total;
}