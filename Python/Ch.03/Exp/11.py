kg = float(input("무게 : "))
m = float(input("키 : "))

bmi = kg / (m * m)
print("당신의 bmi : ", bmi)

if bmi >= 30:
    print("비만입니다.")
elif bmi >= 25 and bmi <= 29.9:
    print("과체중입니다.")
else:
    print("정상입니다.")
