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


