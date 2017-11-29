#include <stdio.h>
#include <stdlib.h>
void student()
{
	struct student
	{
		char name[20];
		int score;
	};
	struct student std = {"學生1",59};
	printf("請輸入學生姓名:%s\n",std.name);
	printf("請輸入學生成績:%d\n",std.score);
}
