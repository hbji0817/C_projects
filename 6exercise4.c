#include <stdio.h> //표준 입출력 라이브러리 사용

int main() //메인함수 선언
{
	int m; //나비 넥타이의 길이 m 선언
	scanf("%d",&m); // m 입력
	
	for(int i = 1; i <= m ; i++) //나비넥타이 윗부분을 만들기 위한 반복 가운데 줄까지 m번 반복
	{
		for(int j = 1 ; j <= i ; j++) // i에 따라 길이가 변하는 * 출력
		{
			printf("*"); // * 출력
		}
		for(int k = 1 ; k <= 2*m-2*i ; k++) //중간 빈 부분 공백 출력
		{
			printf(" "); //공백 출력
		}
		for(int l = 1 ; l <= i ; l++) //i에 따라 길이가 변하는 반대편 * 출력
		{
			printf("*"); // * 출력
		}
		printf("\n"); //줄 바꾸기
	}
	for(int i = m-1; i >= 1 ; i--) //나비넥타이 아랫부분을 만들기 위한 반복 가운데데줄 빼고 m-1번 반복
	{
		for(int j = 1 ; j <= i ; j++) //i에 따라 길이가 변하는 * 출력
		{
			printf("*"); // * 출력
		}
		for(int k = 1 ; k <= 2*m-2*i ; k++) //중간 빈 부분 공백 출력
		{
			printf(" "); //공백 출력
		}
		for(int l = 1 ; l <= i ; l++) //i에 따라 길이가 변하는 반대편 * 출력
		{
			printf("*"); // * 출력
		}
		printf("\n"); //줄 바꾸기
	}
	return 0; //함수 종료
}
