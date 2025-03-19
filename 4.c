
#include <stdio.h>

int main(void) {
  int a = 2; // coefficient of x²
  int b = 4; // coefficient of x
  int c = 3; // constant term
  int x;
  int y;

  printf("**이차함수**\n\n");

  printf("\n\n이차함수 : 2x^2 + 4x + 3\n\n");

  printf("\nx = ");
  scanf("%d", &x);

  y = a * x * x + b * x + c;

  printf("\ny = %d", y);

  return 0;
}
