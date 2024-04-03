// 2. Write a program in C to calculate the sum of numbers from 1 to n using recursion.
// Test Data :
// Input the last number of the range starting from 1 : 5
// Expected Output:

// The sum of numbers from 1 to 5 : 
// 15

#include <stdio.h>
int sum_numbers(int a );
int main()
{
    int n = 5 ; 
    printf("%d",sum_numbers(n));
    return 0 ; 
}

int sum_numbers(int a )
{
    if(a > 0)
    {
       return  a + sum_numbers(a-1) ;
    }

    return 0 ; 
}
