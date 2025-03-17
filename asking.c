#include <stdio.h>

int main(void){
	//프로젝트
	//경찰관이 범죄자의 정보를 입수 (조서작성)
	//이름? 나이? 몸무게? 키? 범죄명?
	char name[20];
	printf("이름이 뭐에요?");
	scanf("%s",&name);
	
	//char = 문자형 변수 선언
	
	int age;
	printf("몇살이에요?");
	scanf("%d", &age);
	
	//int = 정수형 변수 선언
	
	float weight;
	printf("몸무게는 몇 kg이에요?");
	scanf("%f",&weight);
	
	//float = 실수형 변수 선언
	
	double height;
	printf("키는 몇 센치미터에요?");
	scanf("%lf", &height);
	
	//double = 실수형 변수 선언, 소수점이하 5자리까지 가능 %lf = 1자리, %.1lf = 소수점 1자리
	
	char what[20];
	printf("무슨 일을 하세요?");
	scanf("%s",what);
	
	
	
	//내용 출력
	
	printf("\n\n———  정보  ———\n\n");
	printf("이름  : %s \n", name);
	printf("나이  : %d \n", age);
	printf("몸무게: %.2f \n",weight);
	printf("키    : %.2lf \n", height);
	printf("직업  : %s \n", what);
	
	
	
	
	
	return 0;
	
}
