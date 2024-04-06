// swap elements call by reference
#include <stdio.h>
void swapNumbers(int* p1,int* p2);
int main()
{
    int num1,num2;
    num1=10;
    num2=15;
    printf("previous num1 is %d , num2 is %d",num1,num2);
    swapNumbers(&num1,&num2);
    return 0 ; 
}
void swapNumbers(int* p1,int* p2)
{
    int temp;
    temp = *p1;
    *p1=*p2;
    *p2=temp;
    printf("\nAfter swap num1 is %d , num2 is %d",*p1,*p2);
}