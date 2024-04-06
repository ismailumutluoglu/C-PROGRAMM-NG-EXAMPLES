// Girilen N sayısına göre 1’den N ye kadar olan tek sayıların toplamı ve 
//çarpımını, çift sayıların ise 
//karelerinin toplamını bulan kod
#include <stdio.h>
int main(){
    int N ,i,sum1,sum2,mult; 
    sum1=0;
    sum2=0;
    mult=1;
    printf("bir sayi gir . ");
    scanf("%d",&N);
    i=1;
    while(i<=N){
        if(i%2==1){
          sum1+=i;
          mult*=i;
        }
        else if(i%2==0){
            sum2+=i*i;
        }
         i++;
    }
    printf("tek sayilarin toplami : %d \n",sum1);
    printf("tek sayilarin carpimi : %d \n",mult);
    printf("cift sayilarin kareleri toplami : %d",sum2);
    return 0 ; 
}