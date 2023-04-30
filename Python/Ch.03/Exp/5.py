x, y, z = eval(input("3개의 정수를 입력하시오 : "))

if x > y:
    if y > z:
        print("제일 작은 정수는", z, "입니다.")
    else:
        print("제일 작은 정수는", y, "입니다.")
else:
    if x > z:
        print("제일 작은 정수는", z, "입니다.")
    else:
        print("제일 작은 정수는", x, "입니다.")
