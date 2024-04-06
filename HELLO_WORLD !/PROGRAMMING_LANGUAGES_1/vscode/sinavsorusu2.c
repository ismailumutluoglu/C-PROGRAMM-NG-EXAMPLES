// SINAV SORUSU KULLANICI ŞİFRE GERECEK 4 BASAMAKLI OLMAK ZORUNDA
// EGER KULLANICI DOĞRU ŞİFREYİ GİREMEZSE "HATALI GİRİŞ YAZDIR"
// EGER KULLANICI DOGRU ŞİFREYİ GİRERSE "TEBRİKLER SİFRE DOGRU YAZDIR"
// EGER KULLANICI 3. DENEME HAKKINDA ŞİFREYİ BULAMAZSA "HAKKINIZ BİTMİŞTİR" YAZDIR
// ŞİFRENİN DOGRU OLMA KOSULU  BİRLER BASAMAGI TEK BASAMAKLI OLMAK ZORUNDA
//                             BİNLER BASAMAĞI ÇİFT BASAMAKLI OLMAK ZORUNDA

#include <stdio.h>
int main(){
    int ds,num,a,b;
    printf("password:\n");
    scanf("%d",&num);
    ds=1;
    while(ds<=3){
        while(num<999 || num>10000){
        printf("password please be careful : ");
        scanf("%d",&num);
    }
        a=num%10;
        b=num/1000;
        if(a%2==1 && b%2==0){
            ds=5;
        }
        else if(ds==3){
             a=num%10;
        b=num/1000;
        if(a%2==1 && b%2==0){
            ds=5;
        }
        }
        else{
            printf("%d. denemede bulamadin tekrar dene\n",ds);
            scanf("%d",&num);
            ds+=1;      
        }
    }
    if(ds==5){
        printf("buldun");
    }
    else{
        printf("3. denemede bulamadin");
    }
    
    
    return 0 ; 
}