#include <stdio.h> //표준 입출력 라이브러리 사용

int main() // 메인 함수 선언
{
	int date, num; //변수 선언
	scanf("%d %d",&date, &num); //변수에 값 입력 받기
	
	if(date % 2 ==0) //날짜에서 짝수 홀수 분류 (짝수 일때)
	{
		if(num % 1000 == 0) //1000, 2000, 3000같이 매 1000번째 응모한 사람일때
			printf("당첨"); //당첨 출력
		else //아닐때
			printf("꽝"); //꽝 출력
	}
	else // 홀수 일때
	{
		if(num % 1000 == 999) //매 999번째 응모한 사람일때
			printf("당첨"); //당첨 출력
		else //아닐때
			printf("꽝"); //꽝 출력
	}
	return 0; //프로그램 종료
}
