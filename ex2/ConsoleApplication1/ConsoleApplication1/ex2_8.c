#include <stdio.h>
#include <stdlib.h>
void ex2_8()
{
	float a, b;
	char oper;
	printf("Please input the expression:(ex:3+2):");
	scanf_s("%d %c %d", &a, &oper, &b);
	switch (oper)
	{
	case '+':
		printf("%d+%d=%d\n", a, b, a + b);
		break;
	case '-':
		printf("%d-%d=%d\n", a, b, a - b); 
		break;
	case '*':
		printf("%d*%d=%d\n", a, b, a*b); 
		break;
	case '/':
		printf("%d/%d=%.3f\n", a, b, a / b); 
		break;
	default:
		printf("input error!!\n");
	}
}