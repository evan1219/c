/* ex_2d.c */
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
void ex2d()
{
	char ch;
	printf("�п�J�@�ӭ^��r��: ");
	ch = getche();
	/* ����toupper */
	printf("\n���r�����j�g�O %c\n", toupper(ch));
	/* ����tolower */
	printf("���r�����p�g�O %c\n", tolower(ch));
}
