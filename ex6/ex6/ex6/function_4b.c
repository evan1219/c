#include<stdlib.h>
#include<stdio.h>
void input(void);
void output3(void);
void function_4b()
{
	printf("���{���b���ե����ܼ�\n");
	input();
	output3();
}
int array[5];
void input(void)
{
	int index;
	for (index = 0; index < 5; index++)
	{
		printf("�п�J#%d���: ",index+1);
		scanf_s("%d", &array[index]);
	}
}
void output3(void)
{
	int index;
	printf("\n");
	for (index = 0; index < 5; index++)
		printf("array[%d] is %d\n", index, array[index]);
}