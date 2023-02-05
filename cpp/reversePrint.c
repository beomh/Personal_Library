/*
c언어의 힙 영역을 이용하는 동적할당을 이용하는 예시이고,
문자를 단어 단위로 거꾸로 출력하는 알고리즘도 포함한다.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void RemoveBSN(char str[]) {
	int len = strlen(str);
	str[len - 1] = 0;
}

char * StrInput(int len) {
	char * str = (char *)malloc(len);

	fputs("What string do you want to write? ", stdout);
	fgets(str, strlen(str), stdin);
	return str;
}

void PrintReverse(char * str, int strLen) {
	int i, cur_space, prev_space = strLen-1;
	
	for (i = strLen; i >= 0; --i) {
		if (str[i] == ' ') {
			for (cur_space = i + 1; cur_space <= prev_space; ++cur_space) {
				printf("%c", str[cur_space]);
			}
			prev_space = i - 1;
			printf(" ");
		}
		if (i == 0) {
			for (cur_space = i; cur_space <= prev_space; ++cur_space) {
				printf("%c", str[cur_space]);
			}
		}
	}
}

int main(void) {
	int strLen;
	char * str;

	//fputs("문자열 최대 길이 입력: ", stdout);
	printf("문자열 최대 길이 입력: ");
	scanf("%d", &strLen);
	getchar();

	str = StrInput(strLen);
	PrintReverse(str, strLen);
	return 0;
}