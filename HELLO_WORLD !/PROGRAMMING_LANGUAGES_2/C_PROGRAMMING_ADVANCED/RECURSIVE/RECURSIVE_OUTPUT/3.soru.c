#include <stdio.h>
#define LIMIT 1000
void fun2(int n);

int main()
{
    fun2(100);
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