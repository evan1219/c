#include <stdio.h>
#include <stdlib.h>
void swap(int, int);
ex7_7(void)
{
	int a = 5, b = 20;
	printf("Before swap...");
	printf("a=%d,b=%d\n", a, b);
	printf("%p\n", &a);
	printf("%p\n", &b);
	swap(a, b);
	printf("After swap...");
	printf("a=%d,b=%d\n", a, b);
	printf("%p\n", &a);
	printf("%p\n", &b);
}
void swap(int x, int y) 
{
	int tmp = x;
	x = y;
	y = tmp;
}