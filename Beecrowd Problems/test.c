#include <stdio.h>
int main()
{
  double salary, sale, total;
  char name;
  scanf("%s %lf %lf", &name, &salary, &sale);

  total = salary+sale*.15;
  printf("TOTAL = R$ %.2lf\n", total);
  return 0;
}
