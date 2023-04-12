#include <stdio.h>

#define MAX_SIZE 100

int stack[MAX_SIZE];
int top = -1;

void push(int element)
{
  if (top == MAX_SIZE - 1)
  {
    printf("Error: Stack is full\n");
    return;
  }
  stack[++top] = element;
}

int pop()
{
  if (top == -1)
  {
    printf("Error: Stack is empty\n");
    return -1;
  }
  return stack[top--];
}

int size()
{
  return top + 1;
}

int main()
{
  push(1);
  push(2);
  push(3);
  printf("Current size of stack: %d\n", size());

  pop();
  printf("Current size of stack: %d\n", size());

  return 0;
}
