#include <stdio.h>
int main(){
    int a,b,c;
    printf("ucgenin kenarlarini giriniz:");
    scanf("%d %d %d",&a,&b,&c);
       if (((a+b>c) && (a-b<c)) && ( (a+c>b) && (a-c<b)) && ((b+c>a) && (b-c<a))){
            printf("ucgen cizilebilir\n");
            if(a==b && b==c ){
                printf("eskenar ucgen");
            }
            else if(a!=b && b!=c && a!=c){
                    printf("cesit kenar ucgen");
            }
            else{
                printf("ikizkenar ucgen");
            }
       }
       else {
        printf("ucgen cizilemez");
       }
       return 0 ; 
}