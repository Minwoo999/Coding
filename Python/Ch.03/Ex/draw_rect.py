import turtle

t = turtle.Turtle()
t.shape("turtle")

s = turtle.textinput("", "도형을 입력하시오 : ")

if s == "사각형":
    w = int(turtle.textinput("", "가로 : "))
    h = int(turtle.textinput("", "세로 : "))

    t.forward(w)
    t.left(90)
    t.forward(h)
    t.left(90)
    t.forward(w)
    t.left(90)
    t.forward(h)


elif s == "원":
    r = int(turtle.textinput("", "반지름 : "))
    t.circle(r)

elif s == "삼각형":
    l = int(turtle.textinput("", "한 변의 길이 : "))
    t.forward(l)
    t.left(120)
    t.forward(l)
    t.left(120)
    t.forward(l)


turtle.mainloop()
turtle.bye()
