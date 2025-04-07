#include <stdio.h> //표준 입출력 라이브러리 사용

int main() { //메인 함수 선언
    int D, W; //변수 선언
    scanf("%d %d", &D, &W);  // 3월 D일, w요일 입력
    
    // 22일 후 계산
    int new_D = D + 22; //22일 후 일
    int new_M = 3; //22일 후 월

    if (new_D > 31) {  // 4월로 넘어가는 경우
        new_D -= 31; //날짜 빼기
        new_M += 1; //1달 올리기
    }

    // 요일 계산
    int new_W = (W + 22) % 7; //
    printf("%d월 %d일 ", new_M, new_D); //22일 뒤 날짜 출력
    if (new_W == 0) printf("월요일\n"); //0 = 월요일
    else if (new_W == 1) printf("화요일\n"); //1 = 화요일
    else if (new_W == 2) printf("수요일\n"); //2 = 수요일
    else if (new_W == 3) printf("목요일\n"); //3 = 목요일
    else if (new_W == 4) printf("금요일\n"); //4 = 금요일
    else if (new_W == 5) printf("토요일\n"); //5 = 토요일
    else if (new_W == 6) printf("일요일\n"); //6 = 일요일
    
    // 벚꽃놀이 가능 여부
    if (new_W == 6 || new_W == 0)  // 토요일(6) 또는 일요일(0)
        printf(":)\n"); //:) 출력
    else //평일이면
        printf(":(\n"); //:( 출력

    return 0; //프로그램 종료
}
	
	