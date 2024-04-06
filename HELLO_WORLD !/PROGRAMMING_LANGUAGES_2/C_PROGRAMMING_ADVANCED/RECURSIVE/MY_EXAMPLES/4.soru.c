// GİRİLEN SAYILARIN BASAMAKLARINI TOPLAYAN RECURSİVE FONKSİYON ÖRNEĞİ
#include <stdio.h>

int basamak(int number);

int main()
{
    int x = 857 ; 
    printf("%d",basamak(x));
    return 0 ; 
}

int basamak(int number)
{
    if(number > 0)
    {
        return number % 10 + basamak(number/10) ; 
    }   
    
    return 0 ; 
}