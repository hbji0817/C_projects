#include <stdio.h>

int main()
{
	int num,a,b;
	printf("원(1) 삼각형(2) 사각형(3)\n");
	scanf("%d",&num);
	
	switch (num)
	{
	case 1:
		printf("원의 반지름 : ");
		scanf("%d",&a);
		printf("%dπ",a*a);
		break;
	case 2:
		printf("삼각형의 밑변 : ");
		scanf("%d",&a);
		printf("삼각형의 높이 : ");
		scanf("%d",&b);
		printf("%lf",a*b/2.0);
		break;
	case 3:
		printf("사각형의 가로 : ");
		scanf("%d",&a);
		printf("사각형의 세로 : ");
		scanf("%d",&b);
		printf("%lf",(double)a*b);
		break;
	default:
		printf("잘못된 입력입니다\n");
	}
		
	
	return 0;
}
	
		
		
