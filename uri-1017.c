#include <stdio.h>

int main()
{
  int hoursSpent;
  int kmHour;
  scanf("%d", &hoursSpent);
  scanf("%d", &kmHour);
  double kmLiter = 12;
  double kmDistance = kmHour * (double)hoursSpent;
  double litersNeeded = kmDistance / kmLiter;
  printf("%.3f\n", litersNeeded);

  return 0;
}