#include <stdio.h>

int main() {
  float const fuel_expense = 12.0;
  int time, avg_speed;
  scanf("%d %d", &time, &avg_speed);
  printf("%.3f\n", (avg_speed * time)/fuel_expense);

  return 0;
}