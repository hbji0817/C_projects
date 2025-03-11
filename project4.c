//if else 문

#include <stdio.h>

int main(void)
{
	//버스를 탄다고 할 때 학생 성인 구분/ 성인= 20이상, 어린이 구분/12이하
	int age;
	printf("몇살이신가요?\n");
	scanf("%d\n", &age);
	
	
	if (age >= 20)
		printf("성인입니다");
	
	else if(age > 12 && age <= 20)
		printf("학생입니다");	
	else if(age <= 12 && age >0)
		printf("어린이입니다");
	
	return 0;
}