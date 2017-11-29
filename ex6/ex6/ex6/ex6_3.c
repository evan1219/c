#include<stdio.h>
#include<stdlib.h>
void test(void);

void ex6_3()
{
	printf("請輸入長與寬:");
	test();

}
void test(void)
{
	int a, b;
	scanf_s("%d%d", &a, &b);
	printf("面積:%d\n", a*b);
}
