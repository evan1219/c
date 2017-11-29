#include <stdio.h>
#include <stdlib.h>
struct work
{
	char name[20];
	int hours;
	int pay;
	int total_pay;
};
void calculate(struct work *);
void ex_2b()
{
	struct work service;
	service.pay = 120;
	printf("請輸入您的姓名: ");
	gets(service.name);
	printf("\n請輸入工作時數: ");
	scanf("%d", &service.hours);
	calculate(&service);
	printf("您總共的薪資是 $%d\n",service.total_pay);
}
void calculate(struct work *ptr)
{
	ptr->total_pay = ptr->hours *ptr->pay;
}
