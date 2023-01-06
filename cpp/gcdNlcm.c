#include <stdio.h>

/*
유클리드 호제법을 이용한 풀이
두 수의 나머지를 구하고 더 작은 수와 반복적으로 나머지를 구하면서 나머지가 0이 될 때까지 반복한다.
*/

// (1) 유클리드 호제법
int getGCD(int num1, int num2){
    int mod = num1 % num2;

    while(mod != 0){
        num1 = num2;
        num2 = mod;
        mod = num1 % num2;
    }

    return num2;
}

// (2) 재귀 함수형
int gcd2(int a, int b)
{ 
	if (a % b == 0) 
    	return b;
	else 
    	return gcd2(b, a % b);
}

// (3) 삼항 연산자 축약형
int gcd3(int a, int b)
{ 
	return (a % b == 0 ? b : gcd3(b, a % b));
} 

// (4) 최소 공배수 계산
int lcm(int a, int b)
{
    return a * b / gcd(a, b);
}

int main(void){
    int gcd;
    int num1, num2;

    printf("두 개의 정수 입력: ");
    scanf("%d %d", &num1, &num2);

    gcd = getGCD(num1, num2);

    printf("두 수의 최대공약수: %d\n", gcd);
    return 0;
}