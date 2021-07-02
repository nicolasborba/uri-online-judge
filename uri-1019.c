#include <stdio.h>

int main()
{
  int n;
  scanf("%d", &n);
  int hours = n / 3600;
  int minutes = (n - (hours * 3600)) / 60;
  int seconds = (n - (hours * 3600) - (minutes * 60));
  printf("%d:%d:%d\n", hours, minutes, seconds);

  return 0;
}