// 1. Write a program in C to print the first 50 natural numbers using recursion.
// Expected Output:

//  The natural numbers are : 1  2  3
//   4  5  6  7  8  9  10  11  12  13
//   14  15  16  17  18  19  20  21  
// 22  23  24  25  26  27  28  29  30
//   31  32  33  34  35  36  37  38  
// 39  40  41  42  43  44  45  46  47
//   48  49  50

#include <stdio.h>

int NaturalNumbers(int a);

int main()
{
    int n = 1 ; 

    NaturalNumbers(n);
    return 0 ; 
}

int NaturalNumbers(int a)
{
    if(a <= 50)
    {
        printf("%d ",a);
        return NaturalNumbers(a+1) ;
    }
    return 0 ; 
}
