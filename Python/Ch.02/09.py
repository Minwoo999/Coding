# 9번

num = int(input("정수 = "))

d1 = num % 10
num = num // 10

d2 = num % 10
num = num // 10

d3 = num % 10
num = num //10

d4 = num % 10
num = num // 10

print(d1 + d2 + d3 + d4)