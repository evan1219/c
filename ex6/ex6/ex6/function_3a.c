#include<stdio.h>
#include<stdlib.h>
int square1(int);
void function_3a()
{
	int num, ans;
	printf("計算某一整數的平方\n\n");
	printf("請輸入一整數:");
	scanf_s("%d", &num);
	ans = square1(num);
	printf("%d 的平方是%d\n", num, ans);
}
int square1(n)
{
	int total;
	total = n*n;
	return total;
}