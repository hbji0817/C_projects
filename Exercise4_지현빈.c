#include <stdio.h>

int main(void) {
  int num1;
  int num2;

  printf("숫자 2개 입력 : ");
  scanf("%d %d", &num1, &num2);

  printf("AND 연산결과 : %d\n", num1 & num2);
  printf("OR 연산결과 : %d\n", num1 | num2);
  printf("XOR 연산결과 : %d\n", num1 ^ num2);
  printf("NOT 연산결과 : %d\n", ~num1);
  printf("NOT 연산결과 : %d\n", ~num2);

  return 0;
}
