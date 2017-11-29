#include<stdio.h>
#include<stdlib.h>
void ex5_4()
{
	int i, j, k, temp, size;
	int A[6];
	size = sizeof(A) / sizeof(int);
	printf("請輸入6個數字");
	printf(".....Before sorted.....\n");
	for (i = 0; i <= size - 1; i++)
		printf("%d ", A[i]);
	printf("\n");
	for (i = 1; i <= 25; i++)
		printf("-");
	printf("\n");
	/*.........bubble sort.........*/
	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - i - 1; j++)
			if (A[j] >A[j + 1])
			{
				temp = A[j];
				A[j] = A[j + 1];
				A[j + 1] = temp;
			}
		printf("#%d pass:  ", i + 1);
		for (k = 0; k < size; k++)
			printf("%d", A[k]);
		printf("\n");
	}
	for (i = 1; i <= 25; i++)
		printf("-");
	printf("....資料排序後.....");
	for (i = 0; i < size; i++)
		printf("%d",A[i]);
	printf("\n");
}