#include<stdio.h>
#include<stdlib.h>
void debug2()
{
	double d;
	double *p = &d;
	double **pp = &p;
	printf("�п�J�@double��:");
	scanf("%lf", &d);
	printf("a=%.2f,*p=%.2f,and **pp=%.2f\n", d, *p, **pp);
}