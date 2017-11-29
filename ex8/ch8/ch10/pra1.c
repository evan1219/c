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
		printf("請輸入產品名稱:");
		scanf("%s", arr[i].product);
		
		printf("請輸入產品價格:");
		scanf("%lf", &arr[i].price);
		
		printf("請輸入產品數量:");
		scanf("%d", &arr[i].quantity);
	}
	printf("<<訂單列表>>\n");
	for (j = 1; j <= 5; j++)
	{
		printf("產品名稱:%s  ",arr[j].product);
		printf("價格:%.1f  ",arr[j].price);
		printf("數量:%d  ",arr[j].quantity);
		total = arr[j].price*arr[j].quantity;
		printf("總價:%.1f  ",total);
		printf("\n");
	}
}