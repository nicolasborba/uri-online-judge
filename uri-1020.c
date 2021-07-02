#include <stdio.h>

int main()
{
  int daysSinceBirth;
  scanf("%d", &daysSinceBirth);
  int years = daysSinceBirth / 365;
  int months = (daysSinceBirth - (years * 365)) / 30;
  int days = daysSinceBirth - (years * 365) - (months * 30);
  printf("%d ano(s)\n", years);
  printf("%d mes(es)\n", months);
  printf("%d dia(s)\n", days);

  return 0;
}