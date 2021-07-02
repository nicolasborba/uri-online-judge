#include <stdio.h>

int main()
{
  int employeeNumber;
  int workedHours;
  double incomeHour;
  scanf("%d", &employeeNumber);
  scanf("%d", &workedHours);
  scanf("%lf", &incomeHour);
  double salary = workedHours * incomeHour;
  printf("NUMBER = %d\n", employeeNumber);
  printf("SALARY = U$ %.2f\n", salary);

  return 0;
}