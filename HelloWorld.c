#include <stdio.h>


int addNumbers(int a, int b)
{
    return a + b;
}


int main()
{   
    int numberOne;
    int numberTwo;
    int age;
    
    printf("How old are you?\n");
    scanf("%d", &age);

    printf("You are %d years old \n", age);

    printf("Add these two numbers: \n");
    scanf("%d %d", &numberOne, &numberTwo);
    printf("The sum is %d \n", addNumbers(numberOne, numberTwo));


    return 0;
}


