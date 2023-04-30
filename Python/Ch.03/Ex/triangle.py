a = int(input("변1의 길이 ?"))
b = int(input("변2의 길이 ?"))
c = int(input("변3의 길이 ?"))

# if a + b > c:
#     if b + c > a:
#         if c + a > b:
#             print("삼각형이 맞습니다.")
#         else:
#             print("삼각형이 아닙니다.")
#     else:
#         print("삼각형이 아닙니다.")
# else:
#     print("삼각형이 아닙니다.")

if (a + b > c) and (b + c > c) and (c + a > b):
    print("올바른 삼각형")
else:
    print("올바르지 않은 삼각형")
