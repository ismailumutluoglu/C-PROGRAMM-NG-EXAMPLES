//400 ile 500 rasında 7 tam bolunebilen sayıların toplamını bulan kod

#include <stdio.h>
int main(){
    int i,toplam ;
    toplam=0;
    for(i=400;i<=500;i++){
        if(i%7==0){
            toplam+=i;
        }
    }
    printf("%d",toplam);
    return 0 ;
}