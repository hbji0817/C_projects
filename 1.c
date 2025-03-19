#include <stdio.h>

int main(void) {
  int num;
  printf("하나의 정수 X 입력 : ");
  scanf("%d", &num);

  printf("X값 : %d\n", num);
  printf("X의 음수값 : %d\n", -num);

  return 0;
}
