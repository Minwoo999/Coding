import math

a = int(input("a를 입력하시오 : "))
b = int(input("b를 입력하시오 : "))
c = int(input("c를 입력하시오 : "))

d = b**2 - 4 * a * c

if d > 0:
    root1 = (-b + math.sqrt(d)) / (2 * a)
    root2 = (-b - math.sqrt(d)) / (2 * a)
    print(root1, root2)

elif d == 0:
    root = -b / 2 * a
    print(root)

else:
    print("근이 없다.")
