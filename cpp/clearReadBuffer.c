/*
ClearLineFromReadBuffer는 입력 버퍼에 남아있는 데이터를 소멸시키기 위한 함수이다.
-> 문자열을 char * fgets(char * s, int len, FILE * stream) 함수를 이용해서 읽을 때 남아있는
데이터를 비우기 위해서 사용한다.
*/

#include <stdio.h>

void ClearLineFromReadBuffer(){
    while(getchar()!='\n');
}

int main(void){
    char perID[7];
    char name[10];

    fputs("주민번호 앞 6자리 입력: ", stdout);
    fgets(perID, sizeof(perID), stdin);
    ClearLineFromReadBuffer();

    fputs("이름 입력: ", stdout);
    fgets(name, sizeof(name), stdin);
    ClearLineFromReadBuffer();

    printf("주민번호: %s\n", perID);
    printf("이름: %s\n", name);

    return 0;
}