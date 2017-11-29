#include<stdio.h>
#include<stdlib.h>
double squAdd(double, double, double);
void printstar2();
void ex6_5()
{
	double num1, num2, num3, sum;
	printf("此程式在計算三個立方和\n\n");
	printf("請輸入三個浮點數:");
	scanf_s("%lf %lf %lf",&num1,&num2,&num3);
	sum = squAdd(num1, num2, num3);
	printstar2();
	printf("%lf的立方和%lf的立方和%lf的立方為%lf\n", num1, num2,num3, sum);
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