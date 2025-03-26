#include <stdio.h>

int main()
{
    int number1, number2;
    double division;
    
    printf("Enter a number: ");
    scanf("%d", &number1);
    printf("Enter another number: ");
    scanf("%d", &number2);
    
    division = (double)number1/number2;
    
    printf("You entered %d and %d. \n", number1, number2);
    printf("%d / %d = %f\n", number1, number2, division);
    

    return 0;
}
