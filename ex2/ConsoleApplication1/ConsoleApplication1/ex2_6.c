#include <stdio.h>
#include <stdlib.h>
void ex2_6()
{
	int score;
	printf("Your score:");
	scanf_s("%d", &score);
	if (score >= 80)
		printf("%d is A\n", score);
	else if (score >= 70)
		printf("%d is B\n", score);
	else if (score >= 60)
		printf("%d is C\n", score);
	else
		printf("Failed!!\n");
}