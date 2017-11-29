#include<stdlib.h>
#include<stdio.h>
int number;
void output2(void);
void function_4a()
{
	printf("Please enter a number:  ");
	scanf_s("%d", &number);
	output2();
}
void output2(void)
{
	printf("Number is %d\n", number);
}