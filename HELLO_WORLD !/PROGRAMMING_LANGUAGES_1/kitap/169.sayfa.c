// klavyeden eleman sayisi girilen bir kümenin belirtilen kombinasyonlarını bulan programs

#include <stdio.h>
int main(){
    int N,m,x,a,b,F,G,i,j,k;
    printf("bir sayi gir :");
    scanf("%d",&a);
    scanf("%d",&b);
    F=1; 
    G=1;
    N=1;
    for(j=1;j<=a;j++)
    {    
        G=G*j;
    }
   
     for(i=1;i<=b;i++)
    {   
        F=F*i;
    } 
    x=a-b;
    for(k=1;k<=x;k++)
    {
        N=N*k;
    }
    m=G/(F*N);
    printf("sonuc:%d",m);
    return 0 ; 
}