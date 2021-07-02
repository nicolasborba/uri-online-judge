#include <stdio.h>

int main()
{
  int a;
  int b;
  int c;
  int d;
  scanf("%d", &a);
  scanf("%d", &b);
  scanf("%d", &c);
  scanf("%d", &d);
  int diferenca = (a * b - c * d);
  printf("DIFERENCA = %d\n", diferenca);

  return 0;
}