#include <stdio.h>
void fun2(int **pointer);
int main()
{
    int a = 10 ;
    int* p = &a;
    fun2(&p); 
    return 0 ; 
}
void fun2(int **pointer) 
{
    printf("%d\n",*pointer);//adress
    int b = 8 ; 
    *pointer = &b ; 
    printf("%d\n",**pointer); //8
}

