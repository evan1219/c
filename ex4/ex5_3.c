#include <stdio.h>
#include <stdlib.h>
ex5_3(void)
{
	int A[2][4][3] = {21,32,65,78,94,76,79,44,65,89,54,73,32,56,89,43,23,32,32,56,78,94,78,54};
	int i, j, k, min, max;
	min = max = A[0][0][0];

	for (i = 0; i < 2; i++)
		for(j=0;j<4;j++)
			for(k=0;k<3;k++)
			{
		if (A[i][j][k] > max)
			max = A[i][j][k];
		if (A[i][j][k] < min)
			min = A[i][j][k];
			}
	printf("The maximmun value of the array element:%d\n", max);
	printf("The maximmun value of the array element:%d\n", min);
}