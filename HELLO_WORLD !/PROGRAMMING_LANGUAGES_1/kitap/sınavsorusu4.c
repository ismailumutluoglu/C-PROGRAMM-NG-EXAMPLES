#include <stdio.h>
int main(){
    int s,n;
    float sum;
    printf("adim sayisini giriniz:");
    scanf("%d",&n);
    sum=1;
    for(s=1;s<n;s++){
        if(s%2==0){
            sum+=(float)1/(s*s+1);
        }
        if(s%2==1){
          sum-=(float)1/(s*s+1);
        }
    }
    printf("%f",sum);
    return 0 ; 

}