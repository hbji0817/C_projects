#include <stdio.h>

int main(void){
	
	//break / continue
	//1번부터 30번까지 있는 반에서 1번에서 5번까지 조별 발표
	
	int a;
	
	printf("몇 번까지 발표하나요\n");
	scanf("%d\n", &a);
	
	for (int i = 1 ; i <= 30;i++){
		if (i >a){
			printf("나머지는 집으로");
			break;
		}
		printf ("%d번 학생은 발표 준비하세요\n", i);
		
	}
	
	
	return 0;
	
}