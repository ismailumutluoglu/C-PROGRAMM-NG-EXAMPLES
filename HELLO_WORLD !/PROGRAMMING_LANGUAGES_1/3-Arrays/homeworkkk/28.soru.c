//girilen yilin artik yıl olup olmadıgını bulan program
#include <stdio.h>
int main()
{
    int year;

    printf("enter a year");
    scanf("%d",&year);

    if(year%4==0)
    
        printf("yes");
    
    else
        printf("no");
    
    return 0;
}