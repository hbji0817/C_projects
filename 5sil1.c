#include <stdio.h>

int main()
{
    int num;
    scanf("%d", &num);
    
    if (3 <= num && num <= 5) 
    {
        printf("봄");
    }
    else if (6 <= num && num <= 8) 
    {
        printf("여름");
    }
    else if (9 <= num && num <= 11) 
    {
        printf("가을");
    }
    else if (num == 12 || (1 <= num && num <= 2)) 
    {
        printf("겨울");
    }
    else 
    {
        printf("잘못된 입력입니다");
    }

    return 0;
}