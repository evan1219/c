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
	printf("�п�J�z���m�W: ");
	gets(service.name);
	printf("\n�п�J�u�@�ɼ�: ");
	scanf("%d", &service.hours);
	calculate(&service);
	printf("�z�`�@���~��O $%d\n",service.total_pay);
}
void calculate(struct work *ptr)
{
	ptr->total_pay = ptr->hours *ptr->pay;
}
