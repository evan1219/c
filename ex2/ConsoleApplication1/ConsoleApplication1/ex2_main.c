#include<stdio.h>
#include<stdlib.h>
void ex2_1();
void ex2_2();
void ex2_3();
void ex2_4();
void ex2_5();
void ex2_6();
void ex2_7();
void ex2_8();
void ex2_9();
void ex2_HW1();
void ex2_HW2();
void ex2_HW3();
void ex2_HW4();
void ex2_HW5();
void ex2_HW6_1();
void ex2_HW6_2();
void ex2_HW6_3();
void ex2_HW6_4();
void ex2_HW6_5();
void main()
{
	int x;
	_Bool flag = 1;

	while (flag) {
		printf("1.  ����ǦC�P�榡�X������\n");
		printf("2.  �l�ƹB��l\n");
		printf("3.  ���W�P����B��l\n");
		printf("4.  �޿�B��l\n");
		printf("5.  �_�� if �ԭz���m��\n");
		printf("6.  if-else-if �ԭz������\n");
		printf("7.  if �P else ���t����D\n");
		printf("8.  switch �ԭz���d��\n");
		printf("9.  �H�_��while�j���g�E�E���k��\n");
		printf("10. 0830_HW1\n");
		printf("11. 0830_HW2\n");
		printf("12. 0830_HW2\n");
		printf("13. 0830_HW4\n");
		printf("14. 0830_HW5\n");
		printf("15. 0830_HW6_1\n");
		printf("16. 0830_HW6_2\n");
		printf("17. 0830_HW6_3\n");
		printf("18. 0830_HW6_4\n");
		printf("19. 0830_HW6_5\n");
		printf("----------------------------------------------------\n");
		printf("��ܽҰ����q�Υ\��:");
		scanf_s("%d", &x);
		switch (x)
		{
		case 1:
			ex2_1();
			break;
		case 2:
			ex2_2();
			break;
		case 3:
			ex2_3();
			break;
		case 4:
			ex2_4();
			break;
		case 5:
			ex2_5();
			break;
		case 6:
			ex2_6();
			break;
		case 7:
			ex2_7();
			break;
		case 8:
			ex2_8();
			break;
		case 9:
			ex2_9();
			break;
		case 10:
			ex2_HW1();
			break;
		case 11:
			ex2_HW2();
			break;
		case 12:
			ex2_HW3();
			break;
		case 13:
			ex2_HW4();
			break;
		case 14:
			ex2_HW5();
			break;
		case 15:
			ex2_HW6_1();
			break;
		case 16:
			ex2_HW6_2();
			break;
		case 17:
			ex2_HW6_3();
			break;
		case 18:
			ex2_HW6_4();
			break;
		case 19:
			ex2_HW6_5();
			break;
		case 0:
			flag = 0;
			break;
		default:
			break;
		}
	}
	system("pause");
	system("cls");
}