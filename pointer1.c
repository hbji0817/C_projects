


#include <stdio.h>



//선언
void p(int num);


int main(void)
{
	//function
	//계산기
	
	int num = 2;
	p(num);
	
	num = num + 3;
	p(num);
	
	num -= 1;
	p(num);
	
	

	
	return 0;
	
}


//정의
void p(int num)
{
	printf("num 은 %d 입니다\n",num);
}

/* 
void라는 포인터에 대해 배움
void는 자료형이 정해지지 않은 범용 포인터
p는 포인터 변수임!
그저 많이 쓰이는 것 뿐 원하는 아무거나 변수로 지정해도 됨

()안에는 printf 안에 %d에서 쓰일 변수를 적으면 됨

그리고 무조건 앞에 선언을 하고 
아예 나가서 맨 뒤에 얘가 뭘 의미하는지 정의를 적어야함

*/



 
 
 
