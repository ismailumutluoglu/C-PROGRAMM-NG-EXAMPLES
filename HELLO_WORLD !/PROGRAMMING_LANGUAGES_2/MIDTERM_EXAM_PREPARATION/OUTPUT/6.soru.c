#include <stdio.h>
#define LIMIT 1600
void fun2(int n);
int main()
{
    fun2(50);
    return 0 ; 
}
void fun2(int n)
{
  if (n > LIMIT)
    return;

  printf("%d ", n);
  fun2(2*n);
  printf("%d ", n);
}