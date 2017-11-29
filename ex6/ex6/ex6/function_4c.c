#include<stdlib.h>
#include<stdio.h>
int number = 100;
void output4();
void function_4c()
{
	printf("number is %d\n", number);
	output4();
}
void output4(void)
{
	int number = 200;
	printf("number is %d\n", number);
}