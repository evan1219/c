#include<stdio.h>
#include<stdlib.h>
void dash(void);
void output(void);
void ex6_1()
{
	printf("呼叫output函數!!\n");
	dash();
	output();
	dash();
	printf("呼叫結束，over!!\n");

}
void output(void)
{
	printf("我喜歡iPhone6s\n");
	printf("也喜歡Apple watch\n");
}
void dash(void)
{
	for (int a = 1; a <= 50; a++)
	{
		printf("-");
	}
	printf("\n");

}