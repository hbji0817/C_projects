#include <stdio.h>

int main(void) {
  int number;

  printf("학번 입력 : "); // 2025 245 116
  scanf("%d", &number);

  printf("입학 년도 : %d\n", number / 1000000);
  printf("학과 코드 : %d\n", number / 1000 % 1000);
  printf("등록 번호 : %d\n", number % 1000);

  return 0;
}
