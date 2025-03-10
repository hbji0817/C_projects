#include <stdio.h>

int main(void){
	
	
	
	
	/*
	
	*
	**
	***
	****
	*****
	******
	*/
	
	//반쪽 트리 자작
	
	/*
	int a;
	printf("트리의 높이는?\n");
	scanf("%d\n", &a); 
	for(int i=1;i <= a; i++){
		
		for(int j=1;j <= i; j++){
			printf("*");
		}
		printf("\n");
	}
	
	return 0;
	
	*/
	
	//트리 자작
	
	/*
	6층 트리 
	
	     *     515
	    ***    434
	   *****   353
	  *******  272
	 ********* 191
	***********0110
	
	*/
	/*
	
	int a;
	printf("트리의 높이는?\n");
	scanf("%d\n", &a);
	
	for(int i = 1 ; i <= a ; i++) {
		
		for(int j = 1 ; j <= a - i; j++) {
			printf(" ");
			
		}
		for(int k = 1 ; k <= i*2-1; k++) {
			printf("*");
			
		}
		for(int l = 1 ; l <= a - i; l++) {
			printf(" ");
			
		}
		printf("\n");
		
	}
	
	
	return 0;
	*/
	
	
	//피라미드 자작
	
	/*
	
	      *     1
	    *****    5
	  *********   7
	*************  9
	*/
	int a;
	printf("피라미드의 높이는?\n");
	scanf("%d", &a);
	//높이 입력
	
	
	for(int i = 1 ; i <= a ; i++) 
	{
		
		for(int j = 1 ; j <= a - i; j++) 
		{
			
			printf("  ");		
		//앞부분 띄어쓰기
		}
		
		printf("*");		
		 
		if (i > 1)
		{
			for(int k = 1 ; k <= i-1; k++)
			{
			printf("****");			
		
			}	
			
		}		
		printf("\n");
		
	}	
	
	return 0;			
}
	
