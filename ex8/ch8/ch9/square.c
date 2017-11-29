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
	printf("請輸入正方形的邊長: ");
	scanf("%d", &squ.length);
	squ.totallength = squ.length * 4;
	squ.area = squ.length*squ.length;
	printf("正方形的邊長為:%d\n", squ.length);
	printf("正方形的周長為:%d\n", squ.totallength);
	printf("正方形的面積為: %d\n", squ.area);
}
