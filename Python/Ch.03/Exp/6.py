import random

com = random.randint(1, 3)
user = int(input("선택하시오 : (1: 가위 2: 바위 3: 보)"))

if com == user:
    print("비겼습니다")

elif com == 1 and user == 3:
    print("컴퓨터가 이겼음")
elif com == 2 and user == 1:
    print("컴퓨터가 이겼음")
elif com == 3 and user == 2:
    print("컴퓨터가 이겼음")
else:
    print("사용자가 이겼음")
