#include <stdio.h>
int main()
{
    int number,F,i;
    F=1;
    printf("sayi gir");
    scanf("%d",&number);

    if(number >=5 && number<=10)
    {
        number=number*number;
        printf("%d",number);
    }
     if(number<5)
    {
        
        for(i=1;i<=number;i++)
        {
            F=F*i;
            
        }
        printf("%d",F);
    }
    if(number>10)
    {
        number=number/2-1;
        printf("%d",number);
    }
        return 0 ;
}