#include <stdio.h>
#include <stdlib.h>
#include "c.h"
void ex5_1();
void ex7_3d();
void ex7_3e();
void ex5_2();
void ex5_debug();
void ex5_�m��();
void ex5_3();
void ex7_4a();
void ex7_4b();
void ex7_4c();
void main()
{

	int input;
	_Bool flag =1;

	while (flag){
		printf("1. ex5_1\n");
		printf("2. ex7_3d \n");
		printf("3. ex7_3e \n");
		printf("4. �r���P�r�ꤧ���\n");
		printf("5. debug�m��\n");
		printf("6. ex5_�m��\n");
		printf("7. �T���}�C�D�̤j�̤p��\n");
		printf("8. ex7_4a\n");
		printf("9. ex7_4b\n");
		printf("10.ex7_4c\n");
		printf("11.ex7_4d\n");
		printf("----------------------------------------------------\n");
		printf("�п�J�n���檺�d��?  1 ~10, ��'0' �h��������!   ?    ");
		scanf_s("%d", &input);

		switch (input)
		{
		case 1:
			ex5_1();
			break;
		case 2:
			ex7_3d();
			break;
		case 3:
			ex7_3e();
			break;
		case 4:
			ex5_2();
			break;
		case 5:
			ex5_debug();
			break;
		case 6:
			ex5_�m��();
			break;
		case 7:
			ex5_3();
			break;
		case 8:
			ex7_4a();
			break;
		case 9:
			ex7_4b();
			break;
		case 10:
			ex7_4c();
			break;
		case 11:
			ex7_4d();
			break;
		case 0:
			flag = 0;
			break;
		default:
			break;
		}

		system("pause");

	}




}