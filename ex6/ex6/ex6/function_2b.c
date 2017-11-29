#include<stdio.h>
#include<stdlib.h>
void test1();
void function_2b()
{
	printf("此程式在測試return的作用\n");
	printf("測試開始!!\n");
	test1();
	printf("測試結束!!\n");
}
void test1(void)
{
	int i, a, b;
	for (i = 1; i <= 10; i++)
	{

		printf("請輸入a和b:");
		scanf_s("%d %d", &a, &b);
		if (b == 0)
			return;
		else
			printf("%d/%d=%d\n", a, b, a / b);
		printf("for迴圈跑了%d次\n\n");
	}
}