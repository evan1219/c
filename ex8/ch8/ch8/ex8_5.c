#include<stdio.h>
#include<stdlib.h>
ex8_5(void)
{
	char *str[4] = { "CBA","FED","IHG","LKJ" };
	//printf("*str=%p\n", *str);
	printf("**str=%c\n", **str);
	//printf("*(str)+2=%p\n", *(str+2));
	printf("**(str+2)=%c\n", **(str+2));
	//printf("*str+2=%p\n", *str+2);
	printf("*(*str+2)=%c\n", *(*(str+2)+2));
}