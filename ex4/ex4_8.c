#include <stdio.h>
#include <stdlib.h>
ex4_8(void)
{
	int num[2][3];
	int index1, index2;
	for (index1 = 0; index1 < 2; index1++)
		for (index2 = 0; index2 < 3; index2++)
		{
			printf("�п�J&num[%d][%d]�����:", index1, index2);
			scanf("%d", &num[index1][index2]);
		}
	printf("���G���}�C����Ʀp�U\n");
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