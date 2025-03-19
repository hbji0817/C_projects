#include <stdio.h>

int main(void) {
  int a;
  int b;

  printf("두 정수 입력 : ");
  scanf("%d %d", &a, &b);

  a += b;

  printf("%d\n", a);

  a -= b;

  printf("%d\n", a);

  a *= b;

  printf("%d\n", a);

  a /=b;

  printf("%d\n", a);

  return 0;
}
