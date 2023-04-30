import turtle

side = int(input("한 변의 길이 : "))

t = turtle.Turtle()
t.shape("turtle")

t.forward(side)
t.left(120)
t.forward(side)
t.left(120)
t.forward(side)

turtle.mainloop
turtle.bye()
