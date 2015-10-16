/*
* File: fibonacci.c
* Programmer: Zander Møysal
* Date: 13.10.2015
*
* Prints fibonacci numbers
* 1, 1, 3, 5, 8, 13 etc..
*/
#include <stdio.h>

int main(int argc, char **argv)
{
    int prev_1,
        prev_2,
        fib_num;
    
    prev_1 = 1;
    prev_2 = 1;
    
    printf("%d, %d, ", prev_1, prev_2);
    fib_num = prev_1 + prev_2;
    
    do
    {
        prev_2 = prev_1;
        prev_1 = fib_num;
        fib_num = prev_1 + prev_2;
        printf("%d, ", fib_num);
    }
    while (fib_num < 100);
    printf("\n");
}
