/* ex_2c.c */
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
void ex2c()
{
	char ch;
	printf("�п�J�@�Ӧr��: ");
	ch = getche();
	if (isupper(ch))
		printf("\n%c �O�j�g�^��r�� \n", ch);
	else if (islower(ch))
		printf("\n%c �O�p�g�^��r��\n", ch);
	else
		printf("\n%c ���O�^��r��\n", ch);
}
