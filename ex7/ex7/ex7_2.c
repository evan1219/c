#include <stdio.h>
#include <stdlib.h>
void ex7_2(void)
{
	int *ptr, num = 20;
	ptr = &num; 
	printf("num=%d, &num=%p\n", num, &num);
	printf("*ptr=%d, ptr=%p, &ptr=%p\n", *ptr, ptr, &ptr);
}