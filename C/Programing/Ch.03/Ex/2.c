#include <stdio.h>

int main()
{
  int w, l, area, perimeter;

  printf("가로의 길이? ");
  scanf("%d", &w);

  printf("세로의 길이? ");
  scanf("%d",&l);

perimeter = 2*(w+l);
area = l*w;

printf("직사각형의 넓이 : %d\n 직사각형의 둘레 : %d\n", area, perimeter);

return 0;
}