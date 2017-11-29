/* file name: ex-4a.c */
#include <stdio.h>
#include <stdlib.h>
void ex10_3()
{
	/* 宣告結構型態 */
	struct student
	{
		char name[20];
		int score; 
	};
	struct student *ptr;  
	ptr = (struct student *) malloc(sizeof(struct student));
	getchar();
	printf("請輸入學生的姓名: ");
	gets(ptr->name);
	
	//scanf("%s", ptr->name);
	printf("請輸入學生的成績: ");
	scanf("%d", &ptr->score);
	printf("\n學生的姓名是 %s\n", ptr->name);
	printf("成績為 %d\n", ptr->score);
}
