price = int(input("정가를 입력하시오 : "))

if price < 100:
    price *= 0.9

else:
    price *= 0.85
    print("10층에서 사은품을 받아가세요.")

print("할인된 가격은 : ", price, "입니다.")
