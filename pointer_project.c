#include <stdio.h>
#include <time.h>    
#include <stdlib.h>
#include <unistd.h>

int level;
int arrayFish[6];
int * cursor;

void initData();
void printfFishes();
void decreaseWater(long elapsedTime);
int checkFishAlive();

/*프로젝트 정보

    게임이 어떻게 진행되는가
    먼저 시작하면 출력으로 처음 어항의 물의 양 다 출력(이건 배열을 통해서 6개 만듦)
    그리고 몇번째에 물을 주냐고 묻기

    그리고 입력 받으면 세부사항 실행

    먼저 모든 어항의 물을 증발시킴(난이도에 따라 증발 속도 달라짐)(물 없어지면 넘어가기)
    그리고 입력한 해당 어항에 물 추가

    그리고 다음 진행


    각 기능별 제작 방법

    시간에 따른 물 증발
    clock라이브러리를 이용해 실시간 시간을 이용(초는 너무 느리니까 몇배 추가)
    변수들을 이용해 현재 경과시간, 게임 시작 시간, 이전 경과시간 출력

    cursor은 배열 arrayFish 내부의 값들을 가리키는 포인터임

    그리고 main함수 밖에 있는 애들은 함수로
    initData(): 게임 데이터를 초기화하는 작업
	printfFishes(): 물고기의 상태를 출력하는 작업
	decreaseWater(): 물고기의 물 상태를 감소시키는 작업
	checkFishAlive(): 물고기가 살아있는지 확인하는 작업
    을 수행함

    main 안에다 넣으면 다시 쓰기 번거로우니 밖에다 정의해서 재사용을 편하게 만듦
*/


int main()
{
    long startTime = 0; //게임 시작 시간
    long totalElapsedTime = 0; //총 경과시간
    long prevElapsedTime = 0; //직전경과 시간
    
    int num; //몇 번 어항에 물을 줄것인지, 사용자 입력
    initData();
    
    cursor = arrayFish; // cursor[0]...
    
    startTime = clock(); //현재 시간 밀리세컨드 단위로 반환
    while (1)
    {
        printfFishes();
        printf("몇번 어항에 물을 주시겠어요?");
        scanf("%d", &num);
        
        //입력값 체크
        if(num<1 || num >6)
        {
            printf("\n입력값이 잘못되었습니다\n");
            continue;
        }
        
        
        //총 경과 시간
        totalElapsedTime = (clock() - startTime) / CLOCKS_PER_SEC;
        printf("총 경과시간 : %ld 초\n", totalElapsedTime);
        
        //직전 물 준 시간 (마지막으로 물 준 시간)이후로 흐른 경과시간
        long temp = totalElapsedTime - prevElapsedTime;
        prevElapsedTime = totalElapsedTime;
        
        printf("최근 경과 시간 : %ld 초\n", temp);
        
        //어항의 물을 증발
        decreaseWater(temp);
        
        //사용자가 입력한 어항에 물을 준다
        //1.어항의 물이 0이면 -> 물을 주지 않는다
        if (cursor[num-1] <= 0)
        {
            printf("already dead");
            
        }
        //2. 어항의 물이 0이 아니면 물을 준다. 100을 넘지 않는지 체크
        else if (cursor[num-1] + 1 <= 100)
        {
            //물을준다 
            printf("%d번어항에 물을 줍니다\n\n", num);
            cursor[num-1] += 1; // cursor[num-1] = cursor[num-1] + 1
            
        }
        
        //레벨업을 할건지 확인(20초에 한번씩)
        if(totalElapsedTime / 20 > level - 1)
        {
            //레벨업
            level++; //level : 1 -> level : 2 -> level : 3
            printf("*** 축 레벨업! 기존 %d 레벨에서 %d 레벨로 업그레이드 ***\n", level -1, level);
            
            //최종레벨 : 5
            if (level == 5)
            {
                printf("\n\n축하합니다. 최고레벨을 달성하셨습니다. 게임종료합니다");
                exit(0);
            }
        }
        
        
    }
    
    //모든 물고기가 죽었는지 확인
    if (checkFishAlive() == 0)
    {
        //물고기 모두 죽음
        printf("모든 물고기가 죽음\n");
    }
    else
    {
        //최소 한마리 이상 남아있음
        printf("물고기가 살아있음\n");
    }
    prevElapsedTime = totalElapsedTime;
    
    //10초 -> 15초(5초 : prevElapsedTime -> 15초) -> 25초(10초)
    
    return 0;
}

void initData()
{
    level = 1;
    for(int i = 0; i< 6; i++)
    {
        arrayFish[i] = 100; //어항 물 높이 0~100
    }
}

void printfFishes()
{
    printf("%3d번 %3d번 %3d번 %3d번 %3d번 %3d번\n", 1, 2, 3, 4, 5, 6);
    for(int i = 0; i < 6 ; i++)
    {
        printf(" %4d ", arrayFish[i]);
        
    }
    printf("\n\n");
}

void decreaseWater(long elapsedTime)
{
    for (int i = 0 ; i < 6 ; i++)
    {
        arrayFish[i] -= (level * 3 * (int)elapsedTime); // 3은 난이도 조절을 위한 n입력값이
        if(arrayFish[i] < 0)
        {
            arrayFish[i] = 0;
        }
    }
}

int checkFishAlive()
{
    for(int i = 0;  i< 6 ; i++)
    {
        if(arrayFish[i] > 0)
            return 1;
    }
    return 0;
}


