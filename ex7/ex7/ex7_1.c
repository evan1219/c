#include<stdio.h>
#include<stdlib.h>

#define SIZE 8
#define MSG "歡迎光臨"
#define ONE 1
#define TWO ONE+ONE
#define PI 3.14159
#define BEGIN {
#define END }
#define TAB "\t"
#define ABS(n) (n<0 ? -n:n)
#define EVEN(n) (n%2==0 ? "偶數":"奇數")
#define MAX(x,y) ((x>y)? x:y)
#define MIN(x,y) ((x<y)? x:y)


ex7_1(void)
BEGIN
		int num1, num2;
		printf("請輸入2個整數");
		scanf_s("%d %d", &num1, &num2);
		printf("%d %d 比較大的是: %d", num1, num2, MAX(num1, num2));
END