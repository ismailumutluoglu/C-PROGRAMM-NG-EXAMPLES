 // Girilen Sayıya Kadar Olan Tüm Asal Sayıları Ekrana Yazdırma
#include <stdio.h>
int main(){
    int N,i,j,k;
    printf("sayi gir : ");
    scanf("%d",&N);
    for(i=1;i<=N;i++){
        k=0;
        for(j=1;j<=i;j++){                             
            if(i%j==0){
                k++;
            }
        }
        if(k==2){
        printf("%d\t",i);
        }
    }
    return 0 ;
}