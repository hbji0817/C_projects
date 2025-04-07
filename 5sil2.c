#include <stdio.h>

int main()
{
	int x,y;
	scanf("%d %d",&x,&y);
	if(x>0 && y>0)
		printf("제 1 사분면");
	else if(x>0 && y<0)
		printf("제 4 사분면");
	else if(x<0 && y>0)
		printf("제 2 사분면");
	else if(x<0 && y<0)
		printf("제 3 사분면");
	else 
		printf("잘못된 입력입니다");
	
	return 0;
}
