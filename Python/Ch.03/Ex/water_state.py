temp = input("섭씨면 c 화씨면 f 입력 : ")
c_temp = float(input("물의 온도를 입력하시오 : "))

if temp == "f":
    c_temp = (c_temp - 32) * 5 / 9

if c_temp <= 0:
    print("물의 상태는 얼음입니다.")
elif c_temp > 0 and c_temp < 100:
    print("물의 상태는 액체입니다.")
else:
    print("물의 상태는 기체입니다.")
1
