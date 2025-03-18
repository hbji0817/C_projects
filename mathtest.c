#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int getRandomNumber(int level);
void showQuestion(int level, int num1, int num2);
void success();
void fail();

int main(void) {
  // 문이 5개 있고, 각문 마다 점점 어려운 문제 출제 (랜덤방식으로)
  // 맞히면 통과 틀리면 실패

  srand(time(NULL));
  int count = 0; //맞힌 개수 카운트
  for (int i = 1; i <= 7; i++) {
    int num1 = getRandomNumber(i);
    int num2 = getRandomNumber(i);
    // printf("%d x %d = ", num1, num2);
    showQuestion(i, num1, num2);

    int answer = -1;

    scanf("%d", &answer);
    if (answer == -1) {
      printf("프로그램을 종료합니다.\n");
      exit(0);//프로그램 종료
      
    } else if (answer == num1 * num2) {
      // 성공
      success();
      count++;
    }

    else {
      // 실패
      fail();
    }
  }

  printf("%d개를 맞히셨습니다.\n", count);

  return 0;
}




int getRandomNumber(int level) { return rand() % (level * 7) + 1; }

void showQuestion(int level, int num1, int num2) {
  printf("\n\n\n############ %d번째 비밀번호 ############\n", level);
  printf("\n\t%d x %d = ", num1, num2);
  printf("\n\n########################################\n");
  printf("\n비밀번호를 입력하세요 (종료 : -1) >> ");
}

void success()
{
  printf("\n >> 정답입니다 \n");
}
void fail()
{
  printf("\n >> 오답입니다 \n");
}