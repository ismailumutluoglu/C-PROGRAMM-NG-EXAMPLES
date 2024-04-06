#include <stdio.h>
int main()
{
    int a,b,i,c,LCM;
    c=1;
    printf("iki adet sayi giriniz:");
    scanf("%d%d",&a,&b);
    for(i=1;i<a;i++)
    if(a%i==0 && b%i==0)
    {
    c=c*i;
    }
    //ebob*ekok=a*b
    LCM=a*b/c;
    printf("ebob = %d\n",c);
    printf("ekok = %d",LCM);
    return 0;
}
