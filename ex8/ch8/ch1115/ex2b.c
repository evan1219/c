/* ex_2b.c */
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
void ex2b()
{
	char ch;
	printf("�п�J�@�Ӧr��: ");
	ch = getche();
	if (isalpha(ch))
		printf("\n%c ���^��r��\n", ch);
	else if (isdigit(ch))
		printf("\n%c ���Ʀr\n", ch);
	else
		printf("\n%c ���O�@�^��r���μƦr\n", ch);

}
