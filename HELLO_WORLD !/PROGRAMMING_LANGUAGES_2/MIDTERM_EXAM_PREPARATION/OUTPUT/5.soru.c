#include <stdio.h>
void fun1(int n);
int main()
{
    fun1(5);
    return 0 ; 
}
void fun1(int n)
{
   int i = 0;  
   if (n > 0)
     fun1(n-1);
   for (i = 0; i < n; i++)
   {
        printf(" * ");
   }
   printf("\n");
}