import random

num1 = random.randint(1, 9)
num2 = random.randint(1, 9)
oper = random.randint(1, 4)

if oper == 1:
    out = print(num1, "+", num2, "의 값은?")
    result = num1 + num2
elif oper == 2:
    out = print(num1, "-", num2, "의 값은?")
    result = num1 - num2
elif oper == 3:
    out = print(num1, "*", num2, "의 값은?")
    result = num1 * num2
elif oper == 4:
    out = print(num1, "/", num2, "의 값은?")
    result = num1 / num2

user = float(input())

if user == result:
    print("정답입니다.")
else:
    print("오답입니다.")
