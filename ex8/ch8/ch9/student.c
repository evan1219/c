#include <stdio.h>
#include <stdlib.h>
void student()
{
	struct student
	{
		char name[20];
		int score;
	};
	struct student std = {"�ǥ�1",59};
	printf("�п�J�ǥͩm�W:%s\n",std.name);
	printf("�п�J�ǥͦ��Z:%d\n",std.score);
}
