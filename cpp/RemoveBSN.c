/*
RemoveBSN함수는 char * fgets(char * s, int len, FILE * stream) 함수로 문자열을 입력받을 때
개행 문자가 함께 입력된 것을 제거해주는 함수이다.
strlen 함수는 전달된 문자열의 길이를 반환해주는데, 개행 문자는 포함, 널 문자는 제외한다.
*/

#include <stdio.h>
#include <string.h>

void RemoveBSN(char str[]) {
  int len = strlen(str);
  str[len - 1] = 0;
}

int main(void) {
  char str[100];

  puts("문자열 입력: ");
  fgets(str, sizeof(str), stdin);
  printf("길이: %lu, 내용: %s \n", strlen(str), str);

  RemoveBSN(str);
  printf("길이: %lu, 내용: %s \n", strlen(str), str);

  return 0;
}