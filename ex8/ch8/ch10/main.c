#include<stdio.h>
#include<stdlib.h>
void ex10_1();
void ex10_2();
void ex10_3();
void ex10_4();
void ex10_5();
void ex10_6();
//void ex_2b();
//void square();
//void student();
void pra1();
int main(void)
{
	while (1)
	{
	printf("1. ½d¨Ò3a\n");
	printf("2. ½d¨Ò3b\n");
	printf("3. pra1\n");
	printf("4. ½d¨Ò4a\n");
	printf("5. ½d¨Ò4b\n");
	printf("6. ½d¨Ò4c\n");
	printf("7. ½d¨Ò4d\n");
	printf("½Ð¿é¤J­n°õ¦æªºµ{¦¡");
	int x;
	scanf("%d", &x);
		switch (x)
		{
		case 1:
			ex10_1();
			break;
		case 2:
			ex10_2();
			break;
		case 3:
			pra1();
			break;
		case 4:
			ex10_3();
			break;
		case 5:
			ex10_4();
			break;
		case 6:
			ex10_5();
			break;
		case 7:
			ex10_6();
			break;
		default:
			break;
		}
		system("pause");
		system("cls");
	}
}