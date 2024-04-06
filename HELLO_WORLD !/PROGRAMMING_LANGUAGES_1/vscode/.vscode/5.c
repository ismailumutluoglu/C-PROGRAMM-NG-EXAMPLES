// if elsede sirasiyla

#include <stdio.h>
int main(){
    float kitapsayisi,fiyat;
    float indirim;
    printf("1 adet kitabin kac tl oldugunu yaziniz\n");
    scanf("%f",&fiyat); //10
    printf("kac adet kitap alacaginizi giriniz ");
    scanf("%f",&kitapsayisi); //5
    if(kitapsayisi<=10){
         indirim=kitapsayisi*(fiyat*0.95);  
         printf("%f",indirim);   
    }
    else if(kitapsayisi<=20){
         printf("B");
    }
    else if(kitapsayisi<=40){
        
        
    }
    else if( kitapsayisi<=70){
       
    }
    else{
        
    }
    return 0;
}