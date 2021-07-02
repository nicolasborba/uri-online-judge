#include <stdio.h>

int main()
{

  double salary;
  double totalSold;
  char firstName[20];
  scanf(" %s", firstName);
  scanf("%lf", &salary);
  scanf("%lf", &totalSold);
  double total = salary + (0.15 * totalSold);
  printf("TOTAL = R$ %.2f\n", total);

  return 0;
}