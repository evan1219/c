#include<stdio.h>
#include<stdlib.h>

#define SIZE 8
#define MSG "舧羬"
#define ONE 1
#define TWO ONE+ONE
#define PI 3.14159
#define BEGIN {
#define END }
#define TAB "\t"
#define ABS(n) (n<0 ? -n:n)
#define EVEN(n) (n%2==0 ? "案计":"计")
#define MAX(x,y) ((x>y)? x:y)
#define MIN(x,y) ((x<y)? x:y)


ex7_1(void)
BEGIN
		int num1, num2;
		printf("叫块2俱计");
		scanf_s("%d %d", &num1, &num2);
		printf("%d %d ゑ耕琌: %d", num1, num2, MAX(num1, num2));
END