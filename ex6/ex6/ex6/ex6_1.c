#include<stdio.h>
#include<stdlib.h>
void dash(void);
void output(void);
void ex6_1()
{
	printf("�I�soutput���!!\n");
	dash();
	output();
	dash();
	printf("�I�s�����Aover!!\n");

}
void output(void)
{
	printf("�ڳ��wiPhone6s\n");
	printf("�]���wApple watch\n");
}
void dash(void)
{
	for (int a = 1; a <= 50; a++)
	{
		printf("-");
	}
	printf("\n");

}