#include<stdio.h>
#include<stdlib.h>
int square1(int);
void function_3a()
{
	int num, ans;
	printf("�p��Y�@��ƪ�����\n\n");
	printf("�п�J�@���:");
	scanf_s("%d", &num);
	ans = square1(num);
	printf("%d ������O%d\n", num, ans);
}
int square1(n)
{
	int total;
	total = n*n;
	return total;
}