#include <stdio.h>
#include <string.h>

int main()
{
  int money;
  int cells;
  int notas[7] = {100, 50, 20, 10, 5, 2, 1};
  scanf("%d", &money);
  printf("%d\n", money);
  for (int i = 0; i < 7; i++)
  {
    cells = money / notas[i];
    printf("%d nota(s) de R$ %d,00\n", cells, notas[i]);
    money = money % notas[i];
  }

  return 0;
}