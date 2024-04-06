#include <stdio.h>
int main(){
    int x,i;
    printf("bir sayi gir:");
    scanf("%d",&x);
    while(x>10 || x<0){
        printf("lutfen 1 ile 10 arasinda gir");
        scanf("%d",&x);
    }

    for(i=1;i<=10;i++){
        printf("%d x %d = %d \n",x,i,x*i);
    }
    return 0 ; 
}