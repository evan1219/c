#include <stdio.h>
#include <stdlib.h>
//void upper(void);
//void lower(void);
char Charconvert(char);
char ch;
void pra1()
{
	printf("Input:");
	ch=getche();
	printf("\n");

	if (isalnum(ch))
	{
		int i = Charconvert(ch);
		printf("%c", i);
	}
	else
		printf("輸入的不是英文");
}
char Charconvert(ch)
{
	return (ch > 91) ? ch - 32 : ch + 32;
}
