#include<stdio.h>
#include<stdlib.h>
int squAdd1(int, int);
void printstar1();
void function_3c()
{
	int num1, num2, sum;
	printf("此程式在計算兩整數的平方和\n\n");
	printf("請輸入兩個整數:");
	scanf_s("%d %d", &num1, &num2);
	sum = squAdd1(num1, num2);
	printstar1();
	printf("%d的平方和%d的平方為%d\n",num1,num2,sum);
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
