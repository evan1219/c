#include<stdio.h>
#include<stdlib.h>
void HW()
{
	char *str[13] = { "ab","cd","ef","gh","ij","kl","mn","op","qr","st","uv","wx","yz"};
	for (int i=0;i<13;i++)
		for (int j = 0; j < 2; j++)
		{
			printf("%c  ", *(*(str + i) + j));
		}
}