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