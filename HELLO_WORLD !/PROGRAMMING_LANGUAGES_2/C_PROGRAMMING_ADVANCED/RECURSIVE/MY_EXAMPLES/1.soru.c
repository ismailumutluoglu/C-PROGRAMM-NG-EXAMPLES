// C Programlama Dili Recursive Girilen Sayıya Kadar Olan Sayıların Toplamı Örneği
#include <stdio.h>

#include <stdio.h>
#include <stdio.h>

int sum(int x);

int main()
{
    int x = 10; 
    printf("%d",sum(x));
    return 0 ; 
}
int sum(int x)
{
    if(x > 0)
    {
        return x + sum(x-1);
    }
    
    return 0 ; 
}


