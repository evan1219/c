#include<stdio.h>
#include<stdlib.h>
void ex7_1();
void ex7_2();
void ex7_3();
void ex7_4();
void ex7_5();
void ex7_6();
void ex7_7();
void ex7_8();
void ex7_9();
void ex7_10();
void ex7_11();
int main(void)
{
	while (1)
	{
		int x;
		printf("1. define\n");
		printf("2. 指標變數的使用範例\n");
		printf("3. 指標變數所佔的位元組\n");
		printf("4. 指標操作的練習\n");
		printf("5. 當指標指向錯誤的型態時\n");
		printf("6. 傳遞指標到函數\n");
		printf("7. 變數值的互換\n");
		printf("8. 變數值的互換\n");
		printf("9. 傳回多個數值的函數\n");
		printf("10.陣列名稱的值即陣列的位址\n");
		printf("11指標的算數運算\n.");
		printf("-----------------------\n");
		printf("請輸入要執行的程式:");
		scanf_s("%d", &x);
		switch (x)
		{
		case 1:
			ex7_1();
			break;
		case 2:
			ex7_2();
			break;
		case 3:
			ex7_3();
			break;
		case 4:
			ex7_4();
			break;
		case 5:
			ex7_5();
			break;
		case 6:
			ex7_6();
			break;
		case 7:
			ex7_7();
			break;
		case 8:
			ex7_8();
			break;
		case 9:
			ex7_9();
			break;
		case 10:
			ex7_10();
			break;
		case 11:
			ex7_11();
			break;
		default:
			break;
		}
		system("pause");
		system("cls");
	}
}