#include <stdio.h>
#include <stdlib.h>
void ex10_1()
{
	struct student
	{
		int id;
		char name[10];
		double score;
	};
	struct student classes[5] = {
		{ 10811, "John", 88.0 },
		{ 10812, "Mary", 82.0 },
		{ 10813, "Bob", 76.5 },
		{ 10814, "Helen", 91.0 },
		{ 10815, "Peter", 61.5 } };
	int i;
	printf("   �ǥͦW��p�U \n");
	printf("   ------------\n\n");
	printf("�Ǹ�   �m�W       ����\n");
	for (i = 0; i < 5; i++)
		printf("%d %-10s %5.1f\n",
			classes[i].id,
			classes[i].name,
			classes[i].score);
}
