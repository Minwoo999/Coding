weight = int(input("체중을 입력하시오 : "))
height = int(input("키를 입력하시오 : "))

if weight == (height - 100) * 0.9:
    print("표준체중입니다.")

elif weight < (height - 100) * 0.9:
    print("저체중입니다.")

else:
    print("과체중입니다.")
