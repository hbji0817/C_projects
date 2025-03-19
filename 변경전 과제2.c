#include <stdio.h>

int main(void) {
  int num;

  printf("네자리 정수 입력 : ");
  scanf("%d", &num);

  printf("각 자리 숫자의 합 : %d",
         num / 1000 + (num % 1000) / 100 + (num % 100) / 10 + num % 10);
  // %는 나누고 나머지가 나오는 연산자

  return 0;
}
