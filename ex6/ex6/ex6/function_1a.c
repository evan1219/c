#include<stdio.h>
#include<stdlib.h>
void output1(void);
void function_1a()
{
	printf("呼叫output函數!!\n");
	output1();
	printf("呼叫結束，over!!\n");
}
void output1(void)
{
	printf("我喜歡iPhone 6s\n");
	printf("也喜歡Apple watch\n");
}