#include <stdio.h>

int main(void) {
  int F;
  int C;

  printf("섭씨온도(C) : ");
  scanf("%d", &C);

  F = (C * 9 / 5) + 32;

  printf("화씨온도(F) : %d\n", F);

  return 0;
}
