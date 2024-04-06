#include <stdio.h>
int main(){
    int a,b,c,i;
    printf("carpmak istedigin iki sayiyi gir:");
    scanf("%d",&a);
    scanf("%d",&b);
    c=0;
    i=1;
    while(i<=b){
        c+=a;
        i++;
    }
    printf("%d",c);
    return 0 ;
}