#include<stdio.h>
#include<stdlib.h>
double squAdd(double, double, double);
void printstar2();
void ex6_5()
{
	double num1, num2, num3, sum;
	printf("���{���b�p��T�ӥߤ�M\n\n");
	printf("�п�J�T�ӯB�I��:");
	scanf_s("%lf %lf %lf",&num1,&num2,&num3);
	sum = squAdd(num1, num2, num3);
	printstar2();
	printf("%lf���ߤ�M%lf���ߤ�M%lf���ߤ謰%lf\n", num1, num2,num3, sum);
	printstar2();
}
double squAdd(double a,double b,double c)
{
	double ans;
	ans = a*a*a + b*b*b + c*c*c;
	return ans;
}
void printstar2()
{
	int i;
	for (i = 1; i <= 30; i++)
		printf("*");
	printf("\n");
}