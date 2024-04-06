#include <stdio.h>
int main(){
    int sayi ; 
    printf("bir sayi giriniz:");
    scanf("%d",&sayi);
    if(sayi==0){
        printf("nötr sayidir");
    }
    else if(sayi>0){
      printf("pozitif");
    }
    else{
        printf("negatif");
    }
    return 0 ; 
}