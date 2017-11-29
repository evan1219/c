#include<stdio.h>
#include<stdlib.h>
void function_1a();
void function_2a();
void function_2b();
void function_3a();
void function_3b();
void function_3c();
void function_4a();
void function_4b();
void function_4c();
void ex6_1();
void ex6_2();
void ex6_3();
void ex6_4();
void ex6_5();
void ex6_6();
void ex6_7();
void main()
{

	int input;
	_Bool flag = 1;
	while (flag){
		printf("1. ex6_1\n");
		printf("2. ex6_2\n");
		printf("3. ex6_3\n");
		printf("4. ex6_4\n");
		printf("5. function_1a\n");
		printf("6. function_2a\n");
		printf("7. function_2b\n");
		printf("8. function_3a\n");
		printf("9. function_3b\n");
		printf("10.function_3c\n");
		printf("11.ex6_5\n");
		printf("12.function_4a\n");
		printf("13.function_4b\n");
		printf("14.function_4c\n");
		printf("15.ex6_6\n");
		printf("16.ex6_7\n");
		printf("----------------------------------------------------\n");
		printf("請輸入要執行的範例?, 按'0' 則結束執行!   ?    ");
		scanf_s("%d", &input);

		switch (input)
		{
		case 1:
			ex6_1();
			break;
		case 2:
			ex6_2();
			break;
		case 3:
			ex6_3();
			break;
		case 4:
			ex6_4();
			break;
		case 5:
			function_1a();
			break;
		case 6:
			function_2a();
			break;
		case 7:
			function_2b();
			break;
		case 8:
			function_3a();
			break;
		case 9:
			function_3b();
			break;
		case 10:
			function_3c();
			break;
		case 11:
			ex6_5();
			break;
		case 12:
			function_4a();
			break;
		case 13:
			function_4b();
			break;
		case 14:
			function_4c();
			break;
		case 15:
			ex6_6();
			break;
		case 16:
			ex6_7();
			break;
		case 0:
			flag = 0;
			break;
		default:
			break;
		}
		system("pause");
		system("cls");
	}
}