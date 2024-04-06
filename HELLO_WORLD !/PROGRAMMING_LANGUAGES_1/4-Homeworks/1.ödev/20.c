#include <stdio.h>
int main(){
    int count,num,i,kalan;
    printf("sayi gir");
    scanf("%d",&num);
    count = 0;
    while(num>0){
        kalan=num%10;
        num=(num-kalan)/10;
        count++;
    }
    printf("%d",count);
    return 0;
}