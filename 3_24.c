#include <stdio.h>

int main() 
{
    int result;

    result = (100 == 20);
    printf("%d\n", result);
    printf("%d\n", 100 < 20);

    int age, height;
    age = 10;
    height = 110;

    int pass;
    pass = age >= 10 && height >= 100;
    printf("pass or non-pass: %d\n", pass);

    int x, y;
    x = 10;
    y = -1234;
    printf("positive? %d\n", x > 0 && y > 0);

    

    return 0;
}