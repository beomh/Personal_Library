#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#define ADD(a, b, c) a+b+c
#define MUL(a, b, c) a*b*c
#define PI 3.14
#define AREA(rad) (rad)*(rad)*(PI)
#define MAX(a, b) (a>b) ? (a) : (b)

int main(void) {
	int result;

	result = MAX(3, 7);
	printf("%d", result);
	return 0;
}