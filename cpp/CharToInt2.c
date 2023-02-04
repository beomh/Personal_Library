/*문자로 표시된 숫자들 정수로 바꾸기*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void RemoveBSN(char str[]) {
  int len = strlen(str);
  str[len - 1] = 0;
}

int GetSpaceIdx(char str[]){
  int len, i;

  len = strlen(str);
  for(i=0;i<len;++i){
    if(str[i] == ' ')
      return i;
  }
  return -1;  // 공백 문자가 존재하지 않는 경우
}

int CompName(char str1[], char str2[]){
  int sIdx1 = GetSpaceIdx(str1);
  int sIdx2 = GetSpaceIdx(str2);

  if(sIdx1 != sIdx2)
    return 0;
  else
    return !strncmp(str1, str2, sIdx1);
}

int CompAge(char str1[], char str2[]){
  int sIdx1 = GetSpaceIdx(str1);
  int sIdx2 = GetSpaceIdx(str2);

  int age1 = atoi(&str1[sIdx1+1]);
  int age2 = atoi(&str2[sIdx2+1]);

  if(age1==age2)
    return 1;
  else
    return 0;
}

int main(void) {
  char str1[50];
  char str2[50];
  int space;

  fputs("이름과 나이를 입력하세요.", stdout);
  fgets(str1, sizeof(str1), stdin);
  RemoveBSN(str1);
  fputs("이름과 나이를 입력하세요.", stdout);
  fgets(str2, sizeof(str2), stdin);
  RemoveBSN(str2);

  if(CompName(str1, str2))
    fputs("이름이 동일합니다.\n", stdout);
  else
    fputs("이름이 동일하지 않습니다.\n", stdout);
  
  if(CompAge(str1, str2))
    fputs("나이가 동일합니다.\n", stdout);
  else
    fputs("나이가 동일하지 않습니다.\n", stdout);
  return 0;
}