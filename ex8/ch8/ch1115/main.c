#include<stdio.h>
#include<stdlib.h>
void ex1a();
void ex1b();
void ex1c();
void ex1d();
void ex2a();
void ex2b();
void ex2c();
void ex2d();
void ex3a();
void pra1();
int main(void)
{
	while (1)
	{
		printf("1. ½d¨Ò1a\n");
		printf("2. ½d¨Ò1b\n");
		printf("3. ½d¨Ò1c\n");
		printf("4. ½d¨Ò1d\n");
		printf("5. ½d¨Ò2a\n");
		printf("6. ½d¨Ò2b\n");
		printf("7. ½d¨Ò2c\n");
		printf("8. ½d¨Ò2d\n");
		printf("9. ½d¨Ò3a\n");
		printf("10.pra1 \n");
		printf("½Ð¿é¤J­n°õ¦æªºµ{¦¡:   ");
		int x;
		scanf("%d", &x);
		while (getchar() != '\n')
			continue;
		switch (x)
		{
		case 1:
			ex1a();
			break;
		case 2:
			ex1b();
			break;
		case 3:
			ex1c();
			break;
		case 4:
			ex1d();
			break;
		case 5:
			ex2a();
			break;
		case 6:
			ex2b();
			break;
		case 7:
			ex2c();
			break;
		case 8:
			ex2d();
			break;
		case 9:
			ex3a();
			break;
		case 10:
			pra1();
			break;
		default:
			break;
		}
		system("pause");
		system("cls");
	}
}