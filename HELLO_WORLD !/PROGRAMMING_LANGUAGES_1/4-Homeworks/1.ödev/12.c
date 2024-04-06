#include <stdio.h>
int main(){
    int i,sum;
    sum=0;
    for(i=0;i<=100;i+=5){
        sum+=i;
    }
    printf("%d",sum);
    return 0;
}