#include <stdio.h>
#include <stdlib.h>
void square()
{
	struct square
	{
		int length;
		int totallength;
		int area;
	}squ;
	//struct triangle tri;
	printf("�п�J����Ϊ����: ");
	scanf("%d", &squ.length);
	squ.totallength = squ.length * 4;
	squ.area = squ.length*squ.length;
	printf("����Ϊ������:%d\n", squ.length);
	printf("����Ϊ��P����:%d\n", squ.totallength);
	printf("����Ϊ����n��: %d\n", squ.area);
}
