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

int main()
{
    printf("Hey, Little Ross!");
    test();
    return 0;
}