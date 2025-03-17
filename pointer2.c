#include <stdio.h>

void p(int num);

//void function_without_return();
//int function_with_return(void);
//void function_without_params();
void function_with_params(int a, int b, int c);

//int apple(int total, int ate);

int main(void){
	
	//반환값이 없는 함수
//	function_without_return();
	
	
	//반환값이 있는 함수
//	int ret = function_with_return();
//	p(ret);
	
	//전달값이 없는 함수
//	function_without_params();
	
	//전달값이 있는 함수
	function_with_params(1, 2, 3);
	
	
	return 0;

}

//void function_without_return()
//{
//	printf("반환값이 없는 함수입니다\n");
//}

//int function_with_return(void)
//{
//	printf("반환값이 있는 함수입니다\n");
//	return 10;	            
//}

//void function_without_params()
//{
//	printf("전달값이 없는 함수입니다");
//}

void function_with_params(int a, int b, int c)
{
	printf("전달값이 있는 함수이며, 전달받은 값은 %d, %d, %d입니다 \n", a, b, c);
}

void p(int num)
{
	printf("출력값: %d\n", num);
}
