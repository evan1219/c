#include<stdlib.h>
#include<stdio.h>
void calculate();

void ex6_2()
{
	printf("Please input a integer:");
	calculate();

}
void calculate(void)
{
	int a;
	scanf_s("%d", &a);
	if (a >= 60)	
		printf("pass\n");
	else
		printf("down\n");
}
