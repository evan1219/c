/* file name: ex-4a.c */
#include <stdio.h>
#include <stdlib.h>
void ex10_3()
{
	/* �ŧi���c���A */
	struct student
	{
		char name[20];
		int score; 
	};
	struct student *ptr;  
	ptr = (struct student *) malloc(sizeof(struct student));
	getchar();
	printf("�п�J�ǥͪ��m�W: ");
	gets(ptr->name);
	
	//scanf("%s", ptr->name);
	printf("�п�J�ǥͪ����Z: ");
	scanf("%d", &ptr->score);
	printf("\n�ǥͪ��m�W�O %s\n", ptr->name);
	printf("���Z�� %d\n", ptr->score);
}
