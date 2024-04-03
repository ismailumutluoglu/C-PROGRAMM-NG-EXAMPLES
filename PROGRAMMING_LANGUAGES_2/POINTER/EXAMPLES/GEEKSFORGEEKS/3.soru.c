#include <stdio.h>
void change_numbers(int *a,int* b);
int main()
{
    int a,b;
    a=5;
    b=8;
    printf("%d,%d\n",a,b);
    change_numbers(&a,&b);
    printf("%d,%d\n",a,b);
    return 0 ; 
}
void change_numbers(int *a,int* b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}