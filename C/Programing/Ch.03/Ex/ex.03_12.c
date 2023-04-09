/**********************
���α׷��� : <limits.h> �� <float.h> �� �̿��� �����÷ο� �߻�
���α׷� ���� : �����÷ο� �߻���Ű��
������ : ��ο� (201810198)
**********************/

// ex.03_12

#include <stdio.h>
#include <limits.h>
#include <float.h>

int main()
{
  char a = CHAR_MAX;
  char b = CHAR_MAX + 1; // �����÷ο�
  short c = SHRT_MAX;
  short d = SHRT_MAX + 1; // �����÷ο�
  int e = INT_MAX;
  int f = INT_MAX + 1; // �����÷ο�
  float g = FLT_MAX;
  float h = FLT_MAX * 10; // �����÷ο�

  printf("a = %d, b= %d\n", a, b);
  printf("c = %d, d= %d\n", c, d);
  printf("e = %d, f=%d\n", e, f);
  printf("g = %30.25e, h = %30.25e\n", g, h);

  return 0;
}