#include<stdio.h>
#include<stdlib.h>
void debug3()
{
	char x = 100;
	char *p = &x;
	char **pp = &p;
	printf("a=%c,*p=%c,and**pp=%c\n", x, *p, **pp);
	printf("%c\n%c\n%c\n", sizeof(x), sizeof(*p), sizeof(**pp));
}