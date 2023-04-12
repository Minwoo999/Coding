/**********************
프로그램명 : 수식 분석 프로그램
프로그램 내용 : 괄호가 포함된 중위표기 수식을 입력 괄호 검사를 수행하여 오류 여부를 판별한다.
               괄호 오류가 없는 경우에 후위 표기 수식으로 변환하고 수식의 계산 결과값을 출력
실습일 : 2023.04.12
개발자 : 김민우 (201810198)
**********************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STACK_SIZE 100

typedef int deploy;
typedef double nums;

// STACK 1
deploy str[MAX_STACK_SIZE];
int top;

// STACK 2
nums num[MAX_STACK_SIZE];
int topn;

void error(char msg[])
{
  printf("%s", msg);
  exit(1);
}
// STACK 1 ADT
void init_str_stack() { top = -1; }
int str_is_empty() { return top == -1; }
int str_is_full() { return top == MAX_STACK_SIZE - 1; }
int str_size() { return top + 1; }

deploy str_pop()
{
  if (str_is_empty())
    error("str stack is empty");
  return str[top--];
}

deploy str_peek()
{
  if (str_is_empty())
    error("str stack is empty");
  return str[top];
}

void str_push(deploy a)
{
  if (str_is_full())
    error("str stack is full");
  str[++top] = a;
}

// STACK 2 ADT
void init_num_stack() { topn = -1; }
int num_is_empty() { return topn == -1; }
int num_is_full() { return topn == MAX_STACK_SIZE - 1; }
int num_size() { return topn + 1; }

nums num_pop()
{
  if (num_is_empty())
    error("str stack is empty");
  return num[topn--];
}

nums num_peek()
{
  if (num_is_empty())
    error("str stack is empty");
  return num[topn];
}

void num_push(nums a)
{
  if (num_is_full())
    error("str stack is full");
  num[++topn] = a;
}

int check_matching(char expr[])
{
  int i = 0;
  char ch;
  deploy prev;

  init_str_stack();
  while (expr[i] != '\0')
  {
    ch = expr[i++];
    if (ch == '[' || ch == '(' || ch == '{')
      str_push(ch);
    else if (ch == ']' || ch == ')' || ch == '}')
    {
      if (str_is_empty())
        return 2;
      prev = str_pop();
      if ((ch == ']' && prev != '[') ||
          (ch == ')' && prev != '(') ||
          (ch == '}' && prev != '{'))
        return 3;
    }
  }
  if (str_is_empty() == 0)
    return 1;
  else
    return 0;
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
  int i = 0, n = 0;
  char c, op, str[80];

  init_str_stack();
  while (expr[i] != '\0')
  {
    c = expr[i++];
    if ((c >= '0' && c <= '9'))
    {
      str[n++] = c;
    }
    else if (c == '(')
      str_push(c);
    else if (c == ')')
    {
      while (str_is_empty() == 0)
      {
        op = str_pop();
        if (op == '(')
          break;
        else
          str[n++] = op;
      }
    }
    else if (c == '+' || c == '-' || c == '*' || c == '/')
    {
      while (str_is_empty() == 0)
      {
        op = str_peek();
        if (precedence(c) <= precedence(op))
        {
          str[n++] = op;
          str_pop();
        }
        else
          break;
      }
      str_push(c);
    }
  }
  while (str_is_empty() == 0)
    str[n++] = str_pop();
  strcpy(expr, str);
}

double calc_postfix(char expr[])
{
  char c;
  int i = 0;
  double val, val1, val2;

  init_num_stack();
  while (expr[i] != '\0')
  {
    c = expr[i++];
    if (c > '0' && c <= '9')
    {
      val = c - '0';
      num_push(val);
    }
    else if (c == '+' || c == '-' || c == '*' || c == '/')
    {
      val2 = num_pop();
      val1 = num_pop();
      switch (c)
      {
      case '+':
        num_push(val1 + val2);
        break;
      case '-':
        num_push(val1 - val2);
        break;
      case '*':
        num_push(val1 * val2);
        break;
      case '/':
        num_push(val1 / val2);
        break;
      }
    }
  }

  return num_pop();
}

int main()
{
  char expr[80];
  int errCode, i;

  printf("insert infix : ");
  fgets(expr, 100, stdin);

  errCode = check_matching(expr);
  if (errCode == 0)
  {
    infix_to_postfix(expr);
    printf("\npostfix : %s", expr);
    printf("\nresult : %lf", calc_postfix(expr));
  }
  else
    printf("Error. number %d guilty", errCode);

  return 0;
}