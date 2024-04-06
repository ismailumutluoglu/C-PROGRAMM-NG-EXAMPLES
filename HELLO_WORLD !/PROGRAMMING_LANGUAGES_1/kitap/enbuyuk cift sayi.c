#include <stdio.h>
int main(){
    int n,max,i,sayi;
    printf("kac adet sayi girilecegini giriniz:");
    scanf("%d",&n);
    printf("sayi gir");
    scanf("%d",&sayi);
    max=sayi;
    for(i=1;i<n;i++){
    printf("sayi gir.");
    scanf("%d",&sayi);
    if(sayi%2==0 && sayi>max) {
        max=sayi;
    }
    }
    if(max%2==0){
        printf("girilen sayilar arasindan en buyuk cift olan sayi : %d",max);
    }
    else{
        printf("cift sayi girilmemistir");
    }
    
    return 0 ; 
}