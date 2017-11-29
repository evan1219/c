#include<stdio.h>
#include<stdlib.h>
void area(void);
void ex6_4()
{
	printf("please input a number");
	area();

}
void area(void)
{
	int i = -1, a;
	scanf_s("%d", &a);
	if (a < 0)
		printf("%d", a*i);
	else
		printf("a");
}