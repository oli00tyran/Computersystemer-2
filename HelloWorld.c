#include <stdio.h>


int addNumbers(int a, int b)
{
    return a + b;
}


int main()
{
    int age;
    
    printf("How old are you?\n");
    scanf("%d", &age);

    printf("You are %d years old", age);
    return 0;
}


