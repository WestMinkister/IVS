#include <stdio.h>
/* 서식지정자 : %d, %f, %.3lf, %c, %s, "F"--> 큰따옴표는 안됨. 그러면 문자"열"로 인식함.*/

int main(void) {
	int num1 = 10;
	int num2 = 11;
	printf("두 수의 합 %d\n", num1 + num2);
	// printf("두 수의 평균 %lf\n", (num1 + num2) / 2); // --> C언어는 이러면 안됨.
	// 정수형(4byte)과 정수형(4byte) 사칙연산 결과 = 4byte
	printf("두 수의 평균 %lf\n", (num1 + num2) / 2.0); // --> 계산 인자 중 하나를 무조건 소수(기본 double)로 넣어야 한다.

}