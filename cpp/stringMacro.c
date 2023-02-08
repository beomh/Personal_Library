/*
문자열 내에서 매크로의 매개변수 치환이 발생하게 만들기 : # 연산자
매크로 함수의 전달인자를 다른 대상(전달인자, 숫자, 문자, 문자열 등)과 이어줄 때 사용하는 매크로 연산자: ## 연산자
*/
#include <stdio.h>
#define STRING_JOB(A, B) #A "의 직업은 " #B "입니다."
#define STNUM(Y, S, P) Y ## S ## P

int main(void) {
	printf("%s\n", STRING_JOB(이동춘, 나무꾼));
	printf("%s\n", STRING_JOB(한상순, 사냥꾼));

	printf("%d\n", STNUM(10, 65, 075));
	return 0;
}