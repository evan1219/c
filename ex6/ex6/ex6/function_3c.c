#include<stdio.h>
#include<stdlib.h>
int squAdd1(int, int);
void printstar1();
void function_3c()
{
	int num1, num2, sum;
	printf("���{���b�p����ƪ�����M\n\n");
	printf("�п�J��Ӿ��:");
	scanf_s("%d %d", &num1, &num2);
	sum = squAdd1(num1, num2);
	printstar1();
	printf("%d������M%d�����謰%d\n",num1,num2,sum);
	printstar1();
}
int squAdd1(int a, int b)
{
	int ans;
	ans = a*a + b*b;
	return ans;
}
void printstar1()
{
	int i;
	for (i = 1; i <= 30; i++)
		printf("*");
	printf("\n");
}
