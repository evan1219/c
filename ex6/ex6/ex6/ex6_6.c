#include<stdlib.h>
#include<stdio.h>
int num;
void cube();
void ex6_6()
{
	printf("please input a number:");
	scanf_s("%d", &num);
	cube();
}
void cube(void)
{
	printf("%d ���T���謰:%d", num, num*num*num);
}