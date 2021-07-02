#include <stdio.h>
#include <stdlib.h>

int main()
{
  int a;
  int b;
  int c;
  int maior;
  scanf("%d %d %d", &a, &b, &c);

  maior = ((a + b + abs(a - b))) / 2;
  maior = ((maior + c + abs(maior - c))) / 2;

  if (maior == a)
  {
    printf("%d eh o maior\n", a);
  }
  else if (maior == b)
  {
    printf("%d eh o maior\n", b);
  }
  else
  {
    printf("%d eh o maior\n", c);
  }

  return 0;
}