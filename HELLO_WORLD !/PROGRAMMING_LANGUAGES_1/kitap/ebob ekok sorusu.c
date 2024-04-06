#include <stdio.h>
int main(){
    int i,a,b,small,ebob,ekok;
    printf("iki adet sayi giriniz:");
    scanf("%d%d",&a,&b);
    if(a<b){
        small=a;
    }
    else{
        small=b;
    }
    for(i=1;i<=small;i++){
        if(a%i==0 && b%i==0){
            ebob=i;
        }
    }
    printf("Girilen sayilarin eboblari : %d\n",ebob);
    ekok=(a*b)/ebob;
    printf("Girilen sayilarin ekoklari : %d",ekok);
    return 0 ; 
   
}