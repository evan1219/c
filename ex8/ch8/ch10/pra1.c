/* ex-1c.c */
#include <stdio.h>
#include <stdlib.h>
struct order
{
	char product[20];
	double price;
	int quantity;
};
struct order arr[5];
void pra1()
{
	int i,j;
	double total;
	for (i = 1; i <= 5; i++)
	{
		printf("�п�J���~�W��:");
		scanf("%s", arr[i].product);
		
		printf("�п�J���~����:");
		scanf("%lf", &arr[i].price);
		
		printf("�п�J���~�ƶq:");
		scanf("%d", &arr[i].quantity);
	}
	printf("<<�q��C��>>\n");
	for (j = 1; j <= 5; j++)
	{
		printf("���~�W��:%s  ",arr[j].product);
		printf("����:%.1f  ",arr[j].price);
		printf("�ƶq:%d  ",arr[j].quantity);
		total = arr[j].price*arr[j].quantity;
		printf("�`��:%.1f  ",total);
		printf("\n");
	}
}