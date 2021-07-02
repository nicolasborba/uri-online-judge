#include <stdio.h>

int main()
{
  double n1;
  double n2;
  double n3;
  double n4;
  double exam;
  double average2;
  scanf("%lf %lf %lf %lf", &n1, &n2, &n3, &n4);
  double average = ((2 * n1) + (3 * n2) + (4 * n3) + n4) / 10;
  printf("Media: %.1f\n", average);
  if (average >= 7)
  {
    printf("Aluno aprovado.\n");
  }
  else if (average < 5)
  {
    printf("Aluno reprovado.\n");
  }
  else
  {
    printf("Aluno em exame.\n");
    scanf("%lf", &exam);
    printf("Nota do exame: %.1f\n", exam);
    average2 = (average + exam) / 2.0;
    if (average2 >= 5.0)
    {
      printf("Aluno aprovado.\n");
    }
    else
    {
      printf("Aluno reprovado.\n");
    }
    printf("Media final: %.1f\n", average2);
  }

  return 0;
}