// && ||
// && = 같다 (조건문에서)
// || = 다르다

//랜덤
/*
#include <time.h>
#include <stdlib.h>
#include <stdio.h>

//가위바위보 자작

int main(void)
{
	
	
	srand(time(NULL)); // 난수 초기화, 다시 실행했을때 다른값이 나오게 함****
	//int num = rand() %3; //012 셋중에 하나를 뽑음
	//int num = rand() %3 +1; //이거는 123 중에 뽑음
	
	printf("난수 초기화화이전..\n");
	for(int i = 0; i < 10; i++)
	{
		printf("%d ", rand() % 10);
	}
	

	
	
	//가위바위보
	// 0=가위, 1=바위, 2=보
	
	
	
	srand(time(NULL));
	
	int number;
	int player;
	
	printf("가위바위보\n");
	scanf("%d\n",&player);
	if(player == "가위")
	{
		number = 0;
	}
	else if(player == "바위")
	{
		number = 1;
	}
	else if(player == "보")
	{
		number = 2;
	}
	
	
	int i = rand() %3;
	
	if (i == 0)
	{
		
		printf("가위\n");
		if(number == 0)
		{
			printf("무승부");
		}
		if(number == 1)
		{
			printf("승리");
		}
		if(number == 2)
		{
			printf("패배");
		}
	}
		
	else if (i == 1)
	{
		
		printf("바위\n");
		if(number == 0)
		{
			printf("패배");
		}
		if(number == 1)
		{
			printf("무승부");
		}
		if(number == 2)
		{
			printf("승리");
		}
	}
	
	else if (i == 2)
	{
		
		printf("보\n");
		if(number == 0)
		{
			printf("승리");
		}
		if(number == 1)
		{
			printf("패배");
		}
		if(number == 2)
		{
			printf("무승부");
		}
	}
	
	return 0;
}


*/
	
/* 오답정리

	승리, 패배, 무승부같은 2글자 이상의 문자열을 사용할때는 strcmp라는 함수를 사용해야함 
	그리고 한글자 문자는 char, playerinput이라는 함수를 사용해야하고
	
	따라서 둘을 이용하지 않고 만드는 방법은 입력을 숫자로 받고 숫자로 처리는 방법임
	
	
	strcmp 함수 개념 정리
	
	str 변수들을 scanf로 입력 후 두개를 비교하는 함수
	동일하면 0을 출력 앞에 있는게 사전순으로 더 크면(뒤에 있으면) 양의 정수 작으면(앞에 있으면) 음의 정수 출력(아스키 코드의 차이를 출력하는 거임)
	
	
*/
	
//답안지
	
	
#include <stdio.h>
#include <stdlib.h>//여기에 rand함수 들어있음
#include <time.h>//랜덤값 초기화 용도

int main(void) {
    int player, computer;
    char replay;//영어 한글자라 char 씀

    srand(time(NULL)); // 난수 초기화, 여기 time을 쓸려고 위에 time.h 헤더파일을 부른 거임
    
    //do{} while() 반복문, while안에 조건을 만족할때 동안 반복, 한바퀴 돌때마다 확인

    do {
        // 사용자 입력 받기 (0: 가위, 1: 바위, 2: 보)
        printf("\n가위(0), 바위(1), 보(2) 중 선택하세요: ");//숫자로 입력받음
        scanf("%d", &player);

        // 입력 검증 (0, 1, 2만 허용)
        if (player < 0 || player > 2) {
            printf("잘못된 입력입니다. 0, 1, 2 중에서 선택해주세요.\n");//틀린것도체크, 단 숫자만 인식가능해서 숫자만 조건에 넣음
            continue;//여기서 루프 다시 시작하게 함
        }

        // 컴퓨터 랜덤 선택
        computer = rand() % 3; //여기서 컴퓨터의 가위바위보 정함
        printf("컴퓨터: %s\n", (computer == 0) ? "가위" : (computer == 1) ? "바위" : "보");
        //?는 조건 연산자(삼향연산자)이다. 앞에 ()안의 조건이 성립하면 바로 뒤에 있는거로 실행, 아니면 :다음으로 넘어가기, 여러 개 중복으로 쓸 수 있고 if else 구문을 단축하는데 사용한다고 한다.
        
        // 결과 판별
        if (player == computer) {
            printf("무승부\n");
        } 
        else if ((player == 0 && computer == 2) || 
                   (player == 1 && computer == 0) || 
                   (player == 2 && computer == 1)) //이 부분도, 승리 조건을 연속으로 한번에 표시함, ||는 이거나(or)의 의미임
        {
            printf("승리\n");
        } 
        else //else if 쓸 때도 else 쓸 수 있다는 걸 처음 알았다
        {
            printf("패배\n");
        }
        

        // 다시 시작 여부 확인
        printf("다시 하시겠습니까? (y/n): "); //다시시작 여부
        scanf(" %c", &replay);

    } while (replay == 'y' || replay == 'Y');// 이거를 통해서 y 말고 아무거나 치면 종료되게 됨

    printf("게임 종료\n");
    return 0;
}
	
		
		
		
		
	
	
	
	


