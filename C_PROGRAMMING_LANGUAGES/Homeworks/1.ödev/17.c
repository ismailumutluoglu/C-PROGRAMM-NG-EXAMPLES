#include <stdio.h>
int main(){
    int i, n;
    float S;
    printf("kac adim olacak ");
    scanf("%d",&n);
    S=0;
    for(i=2;i<=n;i+=2){
        S=S+1/(float)i;
    }
    printf("%f",S);
    return 0;
}