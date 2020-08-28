#include<stdio.h>

int add(int a, int b){
    return a + b;
}

int multiply(int a, int b)
{
    return a * b;
}

int divide(int a, int b)
{
    return a / b;
}

int test()
{
    assert(multiply(2, 2) == 4);
    assert(multiply(-3, 2) == 6);
}

// This is the main function, the program starts here.
int main()
{
    // I'm writing somthing, but havn't finished yet!
    // TODO:
    
    printf("Hey, Little Ross!");
    test();
    return 0;
}