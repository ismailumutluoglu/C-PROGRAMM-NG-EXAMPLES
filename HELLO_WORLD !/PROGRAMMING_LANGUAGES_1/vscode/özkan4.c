// Girilen üç nottan en az iki tanesi 60 veya üzeri ise ekrana “Geçti” yazan, diğer durumlarda ise “Kaldı” yazan kod
#include <stdio.h>
int main(){
    int not1,not2,not3;
    printf("notlari giriniz:");
    scanf("%d %d %d",&not1,&not2,&not3);
    if(not1>60 && not2>60 || not1>60 &&not3>60 || not2>60 &&not3>60){
        printf("pass");
    }
    else{
        printf("DAAT");
    }
     return 0 ; 
}