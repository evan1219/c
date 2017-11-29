#include <stdio.h>
#include <stdlib.h>
void ex_1c()
{
	struct order
	{
		char product[20];
		double price;
		int quantity;
	};
	struct order num1 = { "iPod nano",6700.0, 20 };
	struct order num2;
	double total;
	total = num1.price * num1.quantity;
	printf("請輸入產品名稱: ");
	scanf("%s", &num2.product);
	printf("請輸入產品價格: ");
	scanf("%lf", &num2.price);
	printf("請輸入訂購數量: ");
	scanf("%d", &num2.quantity);
	printf("\n<< 定單列表 >>\n");
	printf("產品名稱: %s\n", num1.product);
	printf("價格: %.1f\n", num1.price);
	printf("數量: %d\n", num1.quantity);
	printf("總共價格: %.1f\n\n", total);
	
	total = num2.price * num2.quantity;
	printf("產品名稱: %s\n", num2.product);
	printf("價格: %.1f\n", num2.price);
	printf("數量: %d\n", num2.quantity);
	printf("總共價格: %.1f\n", total);
}
