﻿#include <stdio.h>

int main()
{
	int score;
	scanf("%d",&score);
	
	if(90<= score && score <= 100)
		printf("A");
	else if(80<= score && score <= 89)
		printf("B");
	else if(70<= score && score <= 79)
		printf("C");
	else if(60<= score && score <= 69)
		printf("D");
	else if(score < 60)
		printf("F");
	else
		printf("잘못된 입력입니다");
	return 0;
}
