    #include <stdio.h>
    int main(){
        int guessNumber,Number,ds;
        ds=0;
        printf("SIMDI BIR OYUN OYNAYACAGIZ !!\n");
        printf("tahmin edenen kişinin 3 deneme hakki var bulamazsa kaybeder\n");
        printf(" bir sayi tut   ve o sayiyi ekrana gir bende tahmin edecegim.\n");
        scanf("%d",&Number);
        printf("tahmin ediyorum :\n");
        scanf("%d",&guessNumber);
        ds++;
        printf("sayi bu mu ? \n:");
        while(ds>3){
            if(guessNumber<Number){
                printf("hayir sayi bu degil girdiginiz sayi  girilen sayidan kucuktur tekrar deneyiniz  :) \n");
                scanf("%d",&guessNumber);
                ds++;
            }
            else if(guessNumber>Number){
                printf("hayir girdiginiz sayi akilda tutulan sayidan buyuktur tekrar deneyiniz :) \n");
                scanf("%d",&guessNumber);
                ds++;
            }
            else if(guessNumber==Number){
                printf("tebrikler buldunuz");
                ds=3;
            }
        }
        return 0 ; 
    }