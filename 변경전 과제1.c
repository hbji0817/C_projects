#include <stdio.h>

int main(void) {
  int num;

  printf("하나의 정수 입력 : ");
  scanf("%d", &num);

  printf("비트 반전 결과 : %d\n", ~num);

  printf("둘의 합 : %d", num + ~num);

  return 0;
}
