//faktöriyel
#include <stdio.h>
int main(){
    int F,i,n;
    F=1;
    printf("bir sayi gir:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        F=F*i;
    }
    printf("%d",F);
    return 0 ; 
}