#include <stdio.h>

void p(int num);

// void function_without_return();
// int function_with_return(void);
// void function_without_params();
// void function_with_params(int a, int b, int c);

// int apple(int total, int ate); // 전체 total개에서 ate개를 먹으면 남은 개수를
// 반환

// int apple(int total, int ate);
int add(int num, int num2);
int sub(int num, int num2);
int mul(int num, int num2);
int div(int num, int num2);

int main(void) {

  // 반환값이 없는 함수
  //	function_without_return();

  // 반환값이 있는 함수
  //	int ret = function_with_return();
  //	p(ret);

  // 전달값이 없는 함수
  //	function_without_params();

  // 전달값이 있는 함수
  //	function_with_params(1, 2, 3);//각각 a,b,c에 1,2,3(전달값)을 전달하는
  // 함수임

  // 전달값도 받고 반환값이 있는 함수
  // int ret = apple(5, 2);
  // 5개의 사과중에서 2개를 먹음, 5가 total변수로, 2가 ate로 전달되는 전달값임
  // 그리고 5개에서 2개를 먹으면 남은 사과의 개수(반환값)를 반환하는 함수임
  // p(ret);
  // printf("사과 %d개 중에서 %d개를 먹으면 %d개가 남음\n", 10, 4, apple(10,
  // 4));
  // 10개 중에 4개를 먹으면 apple이라는 함수를 호출하고, 그 함수는 10과 4를
  // 전달받아서 남은 사과의 개수를 반환하는 함수임

  // 계산기 함수
  int num = 2;
  num = add(num, 3);
  p(num);

  num = sub(num, 1);
  p(num);

  num = mul(num, 3);
  p(num);

  num = div(num, 6);
  p(num);

  return 0;
}

// void function_without_return()
//{
//	printf("반환값이 없는 함수입니다\n");
// }

// int function_with_return(void)
//{
//	printf("반환값이 있는 함수입니다\n");
//	return 10;
// }

// void function_without_params()
//{
//	printf("전달값이 없는 함수입니다");
// }

// void function_with_params(int a, int b, int c)
//{
//	printf("전달값이 있는 함수이며, 전달받은 값은 %d, %d, %d입니다 \n", a,
// b, c);
// }

// int apple(int total, int ate) {
//   printf("전달값과 반환값이 있는 함수입니다\n");
//   return total - ate;
// }

int add(int num, int num2) { return num + num2; }
int sub(int num, int num2) { return num - num2; }
int mul(int num, int num2) { return num * num2; }
int div(int num, int num2) { return num / num2; }

void p(int num) { printf("출력값: %d\n", num); }
