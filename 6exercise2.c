#include <stdio.h> //표준 입출력 라이브러리 사용

int main() //메인함수 선언
{
	int a, b; //처음 숫자 a, 나중 숫자 b 선언
	scanf("%d %d",&a, &b); //a,b 입력 받기
	
	for(int i = a ; i <= b ; i++) //앞자리 숫자를 a 부터 b까지 반복하는 for문
	{
		for(int j = a ; j<= b ; j++) //뒷자리 숫자를 a 부터 b까지 반복하는 for문
		{
			printf("%d * %d = %d\n",i,j,i*j); //앞자리 i와 뒷자리 j 그리고 둘을 곱한 i*j 출력
		}
		printf("\n"); //각 단이 끝날때마다 문단 바꾸기
	}
	return 0; //함수 종료
}
