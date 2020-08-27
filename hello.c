#include<stdio.h>

int add(int a, int b){
    return a + b;
}

int multiply(int a, int b)
{
    return a * b;
}

int test()
{
    assert(multiply(2, 2) == 4);
    assert(multiply(-3, 2) == 6);
}

int main()
{
<<<<<<< HEAD
    // I'm writing somthing, but havn't finished yet!
    // TODO:
    
=======
>>>>>>> test
    printf("Hey, Little Ross!");
    test();
    return 0;
}