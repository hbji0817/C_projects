
#include <stdio.h>

int main(void) {
  int a = 2; 
  int b = 4; 
  int c = 3;
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
