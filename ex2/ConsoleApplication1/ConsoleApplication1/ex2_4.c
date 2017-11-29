#include <stdio.h>
#include <stdlib.h>
void ex2_4()
{
	int score;
	printf("Please input a score:");
	scanf_s("%d", &score);
	if ((score<0) || (score>100))
		printf("input error!!\n");
	if ((score<60) && (score>49))
		printf("make up exams!!\n");
}