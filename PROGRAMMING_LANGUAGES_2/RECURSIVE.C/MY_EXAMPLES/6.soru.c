// C Programlama Dili Recursive Bölme İşlemi (Çıkartma İşlemi ile) Örneği)

#include <stdio.h>

int bolme_islemi(int a , int b , int i) ;
int main()
{
    int a = 21 , b = 2 , i = 0 ; 

    printf("%d",bolme_islemi(a,b,i));
    return 0 ; 
}

int bolme_islemi(int a , int b , int i)
{
    a = a - b ;

    if(a >= 0)
    {
        return bolme_islemi(a,b,i+1);  
    }
        
    
    return i ; 
}