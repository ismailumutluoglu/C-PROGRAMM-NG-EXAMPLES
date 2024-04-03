// sınavda bu tarz çıkabilir dikkatli ol !!!...

#include <stdio.h>
  
void fun(int n) 
{ 
    if (n > 0)
    { 
        fun(n - 1); // fun(--n) --n n - 1 n n--
        printf("%d ", n); 
        fun(n - 1); // fun(--n)
    } 
} 
  
int main() 
{ 
    fun(4); 
    return 0; 
}