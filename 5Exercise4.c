#include <stdio.h>

int main() {
    int menu, discount = 0;  // 사용자가 입력할 메뉴 번호, 할인 적용 여부 (0=미적용, 1=적용)

    while (1) {  // 무한 반복: 올바른 입력을 받을 때까지 반복
        scanf("%d", &menu);  // 사용자 입력 받기

        if (menu == 245) {  // 할인 코드 245 입력 시
            printf("특별 할인이 적용되었습니다. 주문을 계속 진행해 주세요. 다시 메뉴를 선택하세요.\n");
            discount = 1;  // 할인 적용 여부를 1로 변경
            continue;  // 다음 메뉴 입력을 받기 위해 루프 계속 진행
        }

        int price = 0;  // 선택된 메뉴의 가격을 저장할 변수
        switch (menu) {  // 메뉴 번호에 따라 가격을 결정
            case 1:
                price = 15000;
                printf("피자 가격: ");
                break;
            case 2:
                price = 12000;
                printf("파스타 가격: ");
                break;
            case 3:
                price = 8000;
                printf("햄버거 가격: ");
                break;
            case 4:
                price = 7000;
                printf("샐러드 가격: ");
                break;
            case 5:
                price = 6000;
                printf("밥버거 가격: ");
                break;
            default:  // 1~5 이외의 값이 입력된 경우
                printf("잘못된 입력입니다.\n");
                continue;  // 다시 입력을 받기 위해 루프 계속 진행
        }

        if (discount) {  // 할인 코드가 적용된 경우
            price = price * 0.9;  // 10% 할인 적용
        }

        printf("%d원\n", price);  // 최종 가격 출력
        break;  // 정상적인 주문 완료 후 프로그램 종료
    }

    return 0;  // 프로그램 정상 종료
}