#include <stdio.h>
int main(){
    int i,max_number,min_number,number;
    printf("bir sayi giriniz:");
    scanf("%d",&number);
    max_number=number;
    min_number=number;
    for(i=1;i<=9;i++){
        scanf("%d",&number);
        if(number>max_number){
            max_number=number;
        }
        if(number<min_number){
           min_number=number;
        }
    }
    printf("girdiginiz sayilar arasindan en buyugu : %d\n",max_number);
    printf("girdiginiz sayilar arasindan en kucugu : %d",min_number);

    return 0;

}