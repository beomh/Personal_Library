#include <stdio.h>
// #include <stdlib.h>

int main(int argc, char * argv[]){
	char str[50];
	int cnt = 0;
	FILE * fp = fopen("mystory.txt", "rt");
	if (fp == NULL) {
		puts("파일 오픈 실패!");
		return -1;
	}
	// 문자열로 처리하고 있음에 주의해야한다.
	// fgets 함수를 호출하면 문자열 끝에 도달하거나 오류가 발생하면 NULL을 반환한다.
	// fgets 함수는 개행 문자를 만날 때까지 문자열을 읽는다.
	while (fgets(str, sizeof(str), fp) != NULL) {
		fputs(str, stdout);
		printf("%d번째 줄 출력!\n", ++cnt);	// 이 문장을 통해 fgets 함수는 파일을 읽을 때 '\n'문자까지 읽는다는 것을 알 수 있다.
	}

    // feof함수는 파일의 끝에 도달하면 0이 아닌 값 반환
	if (feof(fp) != 0)
		puts("파일 출력 성공");
	else
		puts("파일 출력 실패");

	return 0;
}