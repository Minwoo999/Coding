x = int(input("첫 번째 수 = "))
y = int(input("두 번째 수 = "))

max = x if x > y else y
min = y if x > y else x

print("큰수 = ", max, "작은수 = ", min)
