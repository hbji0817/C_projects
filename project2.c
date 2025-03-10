#include <stdio.h>

int main(void){
	
	// ++ = 더하기 1
	/*int a = 10;
	printf("a 는 %d\n", a);
	a++;
	printf("a 는 %d\n", a);
	a++;
	printf("a 는 %d\n", a);
	a++;
	printf("a 는 %d\n", a);*/
	
	
	//int b = 20;
	//printf("b는 %d\n", ++b); //++b = 먼저 더하고 출력
	//printf("b는 %d\n", b++); //b++ = 출력하고 더하기
	//printf("b는 %d\n", b);
	
	/*int i = 1;
	printf("Hello %d\n", i++);
	printf("Hello %d\n", i++);
	printf("Hello %d\n", i++);
	printf("Hello %d\n", i++);
	printf("Hello %d\n", i++);
	printf("Hello %d\n", i++);
	printf("Hello %d\n", i++);
	printf("Hello %d\n", i++);
	printf("Hello %d\n", i++);*/
	
	//반복문
	//for (선언; 조건; 증감) {  }
	/*
	for (int i = 1; i <= 10; i++)
	{
		printf("Hello %d\n",i);
	}
	*/
	
	//while (조건) {  }
	/*
	int i = 1;
	while(i <=10) {
		printf("Hello %d\n", i++);
	}
	*/
	
	//do {  } while (조건):
	
	/*
	int i = 1;
	do {
		printf("Hello %d\n", i++)
	} while(i<=10);
	*/
	
	//2중 반복문
	/*
	
	for (int i = 1; i <= 3; i++)
	{
		printf("첫번째 반복문 : %d\n",i);
		
		for (int j = 1; j <= 5 ; j++)
		{
			printf("     두번째 반복문 : %d\n",j);
		}
			
	}
	
	*/
	
	//구구단 자작
	//2*1 = 2
	//2*2 = 4
	
	
	for (int i = 1; i <=9 ;i++)
	{
		printf("%d단\n",i);
		
		for (int j = 1 ; j <= 9 ; j++)
		{	
			int X = i * j;
			printf("%d * %d = %d \n", i, j, X);
			
		}
		
	}
	
	//구구단 답안
	
	for (int i = 1; i <=9 ;i++)
	{
		printf("%d단\n",i);
		
		for (int j = 1 ; j <= 9 ; j++)
		{	
			printf("%d * %d = %d \n", i, j, i*j);
			
		}
		
	}
	
	
	
	
	
	
	
	
	
	return 0;
	
}
