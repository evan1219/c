/* ex_2a.c */
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
void ex2a()
{
	char ch;
	printf("�п�J�@�Ӧr��: ");
	ch = getche();
	if (isalpha(ch))
		printf("\n%c �O�@�^��r���μƦr\n", ch);
	else
		printf("\n%c���O�@�^��r���μƦr\n", ch);
}
