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
	printf("1. �d��1a\n");
	printf("2. �d��1b\n");
	printf("3. �d��1c\n");
	printf("4. �m��_1\n");
	printf("5. �m��_2\n");
	printf("6. �d��2a\n");
	printf("7. �d��2b\n");
	printf("�п�J�n���檺�{��");
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