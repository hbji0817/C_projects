#include <stdio.h>

int main(void) {
  int num1;
  int num2;

  printf("숫자 2개 입력 : ");
  scanf(" %d %d", &num1, &num2);

  printf("%d + %d = %d\n", num1, num2, num1 + num2);
  printf("%d - %d = %d\n", num1, num2, num1 - num2);
  printf("%d x %d = %d\n", num1, num2, num1 * num2);
  printf("%d / %d = %f\n", num1, num2, (float)num1 / num2);

  return 0;
}
