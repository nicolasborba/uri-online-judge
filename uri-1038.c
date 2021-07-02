#include <stdio.h>

int main()
{
  int code;
  int quantity;
  scanf("%d %d", &code, &quantity);
  double total;
  switch (code)
  {
  case 1:
    total = quantity * 4.0;
    break;
  case 2:
    total = quantity * 4.50;
    break;
  case 3:
    total = quantity * 5.00;
    break;
  case 4:
    total = quantity * 2.00;
    break;
  case 5:
    total = quantity * 1.50;
    break;
  }
  printf("Total: R$ %.2f\n", total);
  return 0;
}