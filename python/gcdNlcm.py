# 유클리드 호제법
# 최대공약수 최소공배수 구하기

def GCD(x, y):
    while(y):   # y가 0이 아닌 동안 (x%y!=0)
        x, y = y, x%y
    return x

print(GCD(10, 12))

def LCM(x, y):
    return (x * y) / GCD(x, y)

print(LCM(10, 12))