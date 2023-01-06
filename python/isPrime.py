from math import sqrt

"""
소수 10개 출력하는 프로그램 -> 제곱근까지만 나눠지는지 확인하면 된다.
특정 범위 내에서 소수를 출력하는 프로그램은 에라토스테네스의 체 사용하자.
"""

def isPrime(num):
    for i in range(2, int(sqrt(num))+1):
        if num % i == 0:
            return False
    return True

if __name__ == "__main__":
    cnt = 0
    target = 2

    while cnt < 10:
        if isPrime(target) == True:
            print(target, end=' ')
            cnt+=1
        target+=1
    print('')