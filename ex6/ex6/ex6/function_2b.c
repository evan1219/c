#include<stdio.h>
#include<stdlib.h>
void test1();
void function_2b()
{
	printf("���{���b����return���@��\n");
	printf("���ն}�l!!\n");
	test1();
	printf("���յ���!!\n");
}
void test1(void)
{
	int i, a, b;
	for (i = 1; i <= 10; i++)
	{

		printf("�п�Ja�Mb:");
		scanf_s("%d %d", &a, &b);
		if (b == 0)
			return;
		else
			printf("%d/%d=%d\n", a, b, a / b);
		printf("for�j��]�F%d��\n\n");
	}
}