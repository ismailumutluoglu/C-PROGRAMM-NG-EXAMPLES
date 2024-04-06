#include <stdio.h>
#include <math.h>
int main(){
    int a,b,c,delta,x1,x2;
    printf("ikinci dereceden bir denklemin katsayilarini giriniz:");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);

    delta=b*b-4*a*c;
    if(delta>0)
    {
        x1=(-b+sqrt(delta))/2*a;
        x2=(-b-sqrt(delta))/2*a;
        printf("girilen denklemin kokleri : %d,%d",x1,x2);
    }
    else if(delta==0)
    {   
        x1=x2=-b/2*a;
        printf("denklemin koku : %d",x1);
    }
    else{
        printf("reel kok yoktur");
    }
    return 0;
}