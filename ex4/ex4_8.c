#include <stdio.h>
#include <stdlib.h>
ex4_8(void)
{
	int num[2][3];
	int index1, index2;
	for (index1 = 0; index1 < 2; index1++)
		for (index2 = 0; index2 < 3; index2++)
		{
			printf("請輸入&num[%d][%d]的資料:", index1, index2);
			scanf("%d", &num[index1][index2]);
		}
	printf("此二維陣列的資料如下\n");
	for (index1 = 0; index1 < 1; index1++)
		for (index2 = 0; index2 < 3; index2++)
		{
			printf("%d  ", num[index1][index2]);
		}
	printf("\n");
	for (index1 = 1; index1 < 2; index1++)
		for (index2 =0; index2 < 3; index2++)
		{
			printf("%d  ", num[index1][index2]);
		}
	printf("\n");
}