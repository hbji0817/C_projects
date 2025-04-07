#include <stdio.h> //표준 입출력 라이브러리

int main() //메인함수 선언
{
	char math; //사칙연산 기호가 들어갈 변수 선언
	int a,b,c; //변수 선언
	
	scanf("%d %c %d = %d",&a,&math,&b,&c); //틀린 사칙연산 입력
	
	char real_math; //맞는 사칙연산 기호 변수 선언
	if (a + b == c) real_math = '+'; //맞는 기호가 +일때 변수에 + 저장
    else if (a - b == c) real_math = '-'; //맞는 기호가 -일때 변수에 - 저장
    else if (a * b == c) real_math = '*'; //맞는 기호가 *일때 변수에 * 저장
    else if (a != 0 && a / b == c) real_math = '/'; //맞는 기호가 /일때 변수에 / 저장
	
	switch(math)  // 입력된 math의 값을 기준으로 실행할 case 결정
	{
    case '+':  // math가 '+'인 경우
        printf("바보야, +가 아니라 %c겠지!", real_math); // 올바른 연산자를 출력
        break;  // switch문 종료

    case '-':  // math가 '-'인 경우
        printf("바보야, -가 아니라 %c겠지!", real_math); // 올바른 연산자를 출력
        break;  // switch문 종료

    case '*':  // math가 '*'인 경우
        printf("바보야, *가 아니라 %c겠지!", real_math); // 올바른 연산자를 출력
        break;  // switch문 종료

    case '/':  // math가 '/'인 경우
        printf("바보야, /가 아니라 %c겠지!", real_math); // 올바른 연산자를 출력
        break;  // switch문 종료
}

return 0;  // 프로그램 종료
}
