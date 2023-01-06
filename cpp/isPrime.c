#include <stdio.h>
#include <math.h>

/*
소수 10개 출력하는 프로그램 -> 제곱근까지만 나눠지는지 확인하면 된다.
특정 범위 내에서 소수를 출력하는 프로그램은 에라토스테네스의 체 사용하자.
*/

int isPrime(int num){
    int i;
    int t = (int)(sqrt((double)(num)));

    for(i=2; i <= t; i++){
        if(num % i == 0)
            return 0;
    }
    return 1;
}

int main(void){
    int cnt = 0;
    int target = 2;

    while(cnt < 10){
        if(isPrime(target)==1){
            printf("%d ", target);
            cnt++;
        }
        target++;
    }
    printf("\n");
    return 0;
}