// 3. Write a program in C to print the Fibonacci Series using recursion. >
// Test Data :
// Input number of terms for the Series (< 20) : 10
// Expected Output:

//  Input number of terms for the Series (< 20) : 10                                
//  The Series are :                                                                
//  1  1  2  3  5  8  13  21  34  55  

#include <stdio.h>

int Fibonacci_Numbers(int a);

int main()
{
    int n = 10 ; 
    printf("%d",Fibonacci_Numbers(n));
    return 0 ; 
}

int Fibonacci_Numbers(int a)
{   
    if(a == 1 || a == 0 )
    {
        return a ;
    }
    else
    {   
        return Fibonacci_Numbers(a-1) + Fibonacci_Numbers(a-2);
    }
}