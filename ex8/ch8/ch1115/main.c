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
		printf("1. �d��1a\n");
		printf("2. �d��1b\n");
		printf("3. �d��1c\n");
		printf("4. �d��1d\n");
		printf("5. �d��2a\n");
		printf("6. �d��2b\n");
		printf("7. �d��2c\n");
		printf("8. �d��2d\n");
		printf("9. �d��3a\n");
		printf("10.pra1 \n");
		printf("�п�J�n���檺�{��:   ");
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