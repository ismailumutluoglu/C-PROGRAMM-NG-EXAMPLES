#include <stdio.h>
int main(){
    int a;
    printf("bir mevsim seciniz\n1-ilkbahar\n2-yaz\n3-sonbahar\n4-kis\n");
    scanf("%d",a);
    if(a==1)
    { 
       printf("MART\nNİSAN\nMAYIS");
    }
    else if(a==2)
    {
     printf("HAZİRAN\nTEMMUZ\nAGUSTOS");
    }
    else if(a==3)
    {
     printf("EYLUL\nEKİM\nKASIM");
    }
    else
    {
    printf("ARALIK\nOCAK\nSUBAT");
    }
    return 0;
}