#include <stdio.h>

int main() {
  int total_days, years, months, days;
  scanf("%d", &total_days);

  years = total_days / 365;
  months = total_days % 365 / 30;
  days = total_days % 365 - months * 30;

  printf("%d ano(s)\n", years);
  printf("%d mes(es)\n", months);
  printf("%d dia(s)\n", days);

  return 0;
}