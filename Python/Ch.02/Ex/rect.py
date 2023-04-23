import turtle

t = turtle.Turtle()
t.shape("turtle")

size = int(input("사각형의 크기는 얼마로 할까요? "))

t.forward(size)
t.right(90)
t.forward(size)
t.right(90)
t.forward(size)
t.right(90)
t.forward(size)

turtle.mainloop
turtle.bye()
