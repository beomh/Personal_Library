/*문자로 표시된 숫자들 정수로 바꾸기*/
#include <stdio.h>
#include <string.h>

int ConvToInt(char c) {
  static int diff = 1 - '1';
  return c + diff;
}

int main(void) {
  char str[20];
  int i, len;
  int sum = 0;

  fputs("문자열 입력: ", stdout);
  fgets(str, sizeof(str), stdin);
  len = strlen(str);

  for (i = 0; i < len; i++) {
    if (str[i] >= '0' && str[i] <= '9') {
      sum += ConvToInt(str[i]);
    }
  }

  printf("숫자 총 합: %d\n", sum);
  return 0;
}