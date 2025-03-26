// #include <stdio.h>

// int main()
// {
//     int number1, number2;
//     double division;
    
//     printf("Enter a number: ");
//     scanf("%d", &number1);
//     printf("Enter another number: ");
//     scanf("%d", &number2);
    
//     division = (double)number1/number2;
    
//     printf("You entered %d and %d. \n", number1, number2);
//     printf("%d / %d = %f\n", number1, number2, division);
    

//     return 0;
// }

#include <stdio.h>
#include <math.h>

int main(void)
{
	double a, b, c;
	double alpha;
	double pi = 3.1415926;
	
	printf("한 변의 길이: ");
	scanf("%lf", &b);
	printf("다른 변의 길이: ");
	scanf("%lf", &c);
	printf("사잇값 : ");
	scanf("%lf", &alpha);
	
	
	a = sqrt(b*b + c*c - 2*b*c*cos(pi * alpha / 180.0)); 
	
	printf("남은 변의 길이: %f\n", a);
	
	return 0;
	
}
