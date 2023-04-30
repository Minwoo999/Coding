num = int(input("정수를 입력하시오 : "))

if num % 3 == 0 and num % 5 == 0:
    print("15의배수")
elif num % 5 == 0:
    print("5의배수")
elif num % 3 == 0:
    print("3의 배수")
else:
    print("잘못된 값")
