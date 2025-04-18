#include <stdio.h> //표준 입출력 라이브러리 사용

int main() //메인함수 선언
{
	int n, m; //피라미드 높이 n, 쓰이는 숫자의 최댓값 m 선언
	int num=0; //입력되는 숫자 num 선언
	
	
	scanf("%d %d",&n,&m); //n, m 입력 받기
	
	for(int i = 1 ; i <= n ; i++)  //피라미드 높이 만큼 반복
	{
		
		for(int j = 1 ; j <= n - i; j++) //띄어쓰기 n-1번 출력
		{
			printf(" "); //띄어쓰기기출력
		}
		for(int k = 1 ; k <= i*2-1; k++) //숫자 num출력 ,2i-1개
		{
			if(num != m+1) // m까지출력하고 
			{
				printf("%d",num); //num값 출력
				num += 1; //num값 하나 올리기
			}
			else //넘으면 다시 초기화
			{
				printf("0"); //넘었으니 다음은 0 출력
				num = 1; //0출력했으니 num을 1로 설정
			}
				
		}
		printf("\n"); //줄 바꾸기
		
	}
	return 0; //함수 종료
}

