/* ex_2a.c */
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
void ex2a()
{
	char ch;
	printf("請輸入一個字元: ");
	ch = getche();
	if (isalpha(ch))
		printf("\n%c 是一英文字母或數字\n", ch);
	else
		printf("\n%c不是一英文字母或數字\n", ch);
}
