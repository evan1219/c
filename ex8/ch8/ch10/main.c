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
	printf("1. �d��3a\n");
	printf("2. �d��3b\n");
	printf("3. pra1\n");
	printf("4. �d��4a\n");
	printf("5. �d��4b\n");
	printf("6. �d��4c\n");
	printf("7. �d��4d\n");
	printf("�п�J�n���檺�{��");
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