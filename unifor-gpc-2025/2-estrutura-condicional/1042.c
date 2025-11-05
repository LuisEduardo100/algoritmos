#include <stdio.h>

int main() {
  int a, b, c;
  int x, y, z, temp;
  scanf("%d %d %d", &a, &b, &c);

  x = a;
  y = b;
  z = c;

  if (x > y) {
    temp = x;
    x = y;
    y = temp;
  }

  if (x > z) {
    temp = z;
    z = x;
    x = temp;
  }

  if (y > z) {
    temp = y;
    y = z;
    z = temp;
  }

  printf("%d\n%d\n%d\n\n", x, y, z);
  printf("%d\n%d\n%d\n", a, b, c);

  return 0;
}