#include<stdio.h>
#include<stdlib.h>
void ex_1a();
void ex_1b();
void ex_1c();
void ex_2a();
void ex_2b();
void square();
void student();
int main(void)
{
	while (1)
	{
	printf("1. ½d¨Ò1a\n");
	printf("2. ½d¨Ò1b\n");
	printf("3. ½d¨Ò1c\n");
	printf("4. ½m²ß_1\n");
	printf("5. ½m²ß_2\n");
	printf("6. ½d¨Ò2a\n");
	printf("7. ½d¨Ò2b\n");
	printf("½Ð¿é¤J­n°õ¦æªºµ{¦¡");
	int x;
	scanf("%d", &x);
		switch (x)
		{
		case 1:
			ex_1a();
			break;
		case 2:
			ex_1b();
			break;
		case 3:
			ex_1c();
			break;
		case 4:
			square();
			break;
		case 5:
			student();
			break;
		case 6:
			ex_2a();
			break;
		case 7:
			ex_2b();
			break;
		default:
			break;
		}
		system("pause");
		system("cls");
	}
}