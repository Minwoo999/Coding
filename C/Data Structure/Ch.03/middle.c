// 3��

#include <stdio.h>
#include <stdlib.h>
#define MAX_STACK_SIZE 100 // ���� ��� ������ ���� �迭�� ũ��
typedef int Element;       // ���� ����� �ڷ��� ����

Element data[MAX_STACK_SIZE]; // ���� ���� ����� �迭
int top;                      // ���� ������ top

// ���� ��Ȳ ó���� ���� ����, �޼��� ��� �� ���α׷� ����.
void error(char str[])
{
  printf("%s\n", str);
  exit(1);
}

// ������ �ֿ� ���� : ����
void init_stack() { top = -1; }
int is_empty() { return top == -1; }
int is_full() { return top == MAX_STACK_SIZE - 1; }
int size() { return top + 1; }

void push(Element e)
{
  if (is_full())
    error("���� ��ȭ ����");
  data[++top] = e;
}
Element pop()
{
  if (is_empty())
    error("���� ���� ����");
  return data[top--];
}
Element peek()
{
  if (is_empty())
    error("���� ���� ����");
  return data[top];
}

int precedence(char op)
{
  switch (op)
  {
  case '+':
  case '-':
    return 1;
  case '*':
  case '/':
    return 2;
  case '(':
  case ')':
    return 0;
  }
  return -1;
}

void infix_to_postfix(char expr[])
{
  int i = 0;
  char c, op;

  init_stack();
  while (expr[i] != '\0')
  {
    c = expr[i++];
    if ((c >= '0' && c <= '9'))
    {
      printf("%c", c);
    }
    else if (c == '(')
      push(c);
    else if (c == ')')
    {
      op = pop();
      if (op == '(')
        break;
      else
        printf("%c", op);
    }
  }
  else if (c == '+' || c == '-' || c == '*' || c == '/')
  {
    while (is_empty() == 0)
    {
      op = peek();
      if (precedence(c) <= precedence(op))
      {
        printf("%c", op);
        pop();
      }
      else
        break;
    }
    push(c);
  }
}
while (!is_empty() == 0)
{
  op = pop();
  printf("%c", op);
}

void main()
{
  char expr[2][80] = {"8 / 2 - 3 + (3 * 2)", "1 / 2 * 4 * (1 / 4)"};

  printf("��������: %s ==> ��������:", expr[0]);
  infix_to_postfix(expr[0];)

      printf("��������: %s ==> ��������:", expr[1]);
  infix_to_postfix(expr[1];)
}
