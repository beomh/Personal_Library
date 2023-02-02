/*다양한 문자열 관련 함수*/
#include <stdio.h>
#include <string.h>

void RemoveBSN(char str[]) {
  int len = strlen(str);
  str[len - 1] = 0;
}

int main(void) {
  char str1[20];
  char str2[20];
  char str3[40];

  fputs("str1 문자열 입력: ", stdout);
  fgets(str1, sizeof(str1), stdin);
  RemoveBSN(str1);

  fputs("str2 문자열 입력: ", stdout);
  fgets(str2, sizeof(str1), stdin);
  RemoveBSN(str2);

  strcpy(str3, str1);
  strcat(str3, str2);
  puts(str3);

  return 0;
}