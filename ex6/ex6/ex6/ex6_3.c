#include<stdio.h>
#include<stdlib.h>
void test(void);

void ex6_3()
{
	printf("�п�J���P�e:");
	test();

}
void test(void)
{
	int a, b;
	scanf_s("%d%d", &a, &b);
	printf("���n:%d\n", a*b);
}
