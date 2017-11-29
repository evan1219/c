#include<stdio.h>
#include<stdlib.h>
void ex8_1();
void ex8_2();
void ex8_3();
void ex8_4();
void ex8_5();
void debug();
void debug2();
void debug3();
void HW();
int main(void)
{
	while (1)
	{
		int x;
		printf("1. 陣列名稱的值即陣列的位址\n");
		printf("2. 指標的算數運算\n");
		printf("3. 雙重指標\n");
		printf("4. debug\n");
		printf("5. debug2\n");
		printf("6. debug3\n");
		printf("7. 指標陣列與二維陣列\n");
		printf("8. 指標陣列與二維陣列\n");
		printf("9. HW\n");
		printf("-----------------------\n");
		printf("請輸入要執行的程式:");
		scanf("%d", &x);
		switch (x)
		{
		case 1:
			ex8_1();
			break;
		case 2:
			ex8_2();
			break;
		case 3:
			ex8_3();
			break;
		case 4:
			debug();
			break;
		case 5:
			debug2();
			break;
		case 6:
			debug3();
			break;
		case 7:
			ex8_4();
			break;
		case 8:
			ex8_5();
			break;
		case 9:
			HW();
			break;
		case 10:
			break;
		case 11:
			break;
		default:
			break;
		}
		system("pause");
		system("cls");
	}
}