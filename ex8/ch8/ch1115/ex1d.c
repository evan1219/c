/* ex_1d.c */
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
void ex1d()
{
	/* ��ܿ�X�ϥ�getchar( ) */
	char option;
	do {
		printf("\n");
		printf("1) iPod nano\n");
		printf("2) iPhone \n");
		printf("3) iMac\n");
		printf("�п�ܱz�n���ӫ~(1..3)�� q ���� : ");
		option = getchar();  /* �ϥ�getche( )�ӱ����ﶵ */
		//while (getchar() != '\n')
		//	;
		switch (option)  /* switch�ԭz */
		{
		case '1': printf("\n�z��ܪ��ӫ~�O iPod nano\n");
			break;
		case '2': printf("\n�z��ܪ��ӫ~�O iPhone\n");
			break;
		case '3': printf("\n�z��ܪ��ӫ~�O iMac\n");
			break;
		case 'q':  exit(0);
		default: printf("\n�S���o�˰ӫ~�A�Э��s��J !!!\n");
		}
	} while (option != 'q');
}