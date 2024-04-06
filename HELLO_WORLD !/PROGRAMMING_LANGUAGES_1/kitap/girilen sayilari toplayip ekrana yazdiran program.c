// girilen sayilari topla ve ortalamasini ekrana yazdir . // 0 girilene kadar !!
#include <stdio.h>
int main(){
float number,sum,avarage;
int i;
i=0;
printf("notlari giriniz:");
while(number !=0){
    scanf("%f",&number);
    sum+=number;
    i++;
}
avarage=sum/(i-1);
printf("%f",avarage);
 return 0;
}

