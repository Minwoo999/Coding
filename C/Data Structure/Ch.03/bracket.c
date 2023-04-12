// 1

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
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

int check_matching(char expr[])
{
  int i = 0;
  char ch;
  Element prev;

  init_stack();
  while (expr[i] != '\0')
  {
    ch = expr[i++];
    if (ch == '[' || ch == '(' || ch == '{')
      push(ch);
    else if (ch == ']' || ch == ')' || ch == '}')
    {
      if (is_empty())
        return 2;
      prev = pop();
      if ((ch == ']' && prev != '[') ||
          (ch == ')' && prev != '(') ||
          (ch == '}' && prev != '{'))
        return 3;
    }
  }
  if (is_empty())
    return 1;
  else
    return 0;
}

void main()
{
  char expr[4][80] = {"{A[i+1]=0;}", "if((i=0) && (j==0)", "A[i+1]=0;", "A[i] = f)(;"};

  int errCode, i;

  for (i = 0; i < 4; i++)
  {
    errCode = check_matching(expr[i]);
    if (errCode == 0)
      printf(" ���� : %s\n", expr[i]);
    else
      printf(" ���� : %s (����%d ����)\n", expr[i], errCode);
  }
}