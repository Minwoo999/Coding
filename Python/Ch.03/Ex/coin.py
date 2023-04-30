import random

print("동던 던지기 게임을 시작합니다.")
coin = random.randrange(2)

if coin == 0:
    print("앞면입니다.")
else:
    print("뒷면입니다.")

print("게임이 종료됐습니다.")
