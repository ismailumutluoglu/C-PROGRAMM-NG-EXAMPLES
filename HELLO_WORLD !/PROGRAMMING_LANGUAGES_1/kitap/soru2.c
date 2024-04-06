#include <stdio.h>
int main(){
    int sayi,birler,onlar;
    printf("iki basamakli bir sayi giriniz:");
    scanf("%d",&sayi);
    while(sayi<10 || sayi>99){
        printf("yanlis girdiniz tekrar dene");
        scanf("%d",&sayi);
    }
    birler=sayi%10;
    onlar=sayi/10;
    printf("girilen sayinin onlar basamagi : %d\n",onlar);
    printf("girilen sayinin birler basamagi : %d",birler);
    return 0 ; 
    
    
}