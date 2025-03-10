#include <stdio.h>

//scanf = 키보드 입력을 받아서 저장

int main(void)
{
	/*int input;
	printf("값을 입력하세요");
	scanf(("%d", &input);
	printf("입력값 : %d\n", input);
	
	return 0;
	*/
	
	/*int one, two, three;
	printf("3개의 정수를 입력하세요 : ");
	scanf("%d, %d, %d", &one, &two, &three);
	printf("첫번째 값 : %d\n", one);
	printf("두번째 값 : %d\n",two);
	printf("세번째 값 : %d\n",three);
	return 0;
	*/
	
	// 문자(한 글자) , 문자열(한글자 이상의 여러 글자)
	/*char c = 'A';
	printf("%c\n", c); */
	
	char str[256];
	scanf("%s", str, sizeof(str));
	printf("%s\n",str);
	
	
	
	
	return 0;
}
