#include <stdio.h>
#include <stdlib.h>
void ex2_5()
{
	int score;
	printf(" Please input a score: ");
	scanf_s("%d", &score);
	if (score < 60)
	{
		if (score >= 50)
			printf(" make up exams \n");
		else
			printf("Fail\n");
	}
	else
		printf("Pass\n");
}