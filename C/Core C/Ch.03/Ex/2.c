#include <stdio.h>

int main()
{
  int w, l, area, perimeter;

  printf("������ ����? ");
  scanf("%d", &w);

  printf("������ ����? ");
  scanf("%d",&l);

perimeter = 2*(w+l);
area = l*w;

printf("���簢���� ���� : %d\n ���簢���� �ѷ� : %d\n", area, perimeter);

return 0;
}