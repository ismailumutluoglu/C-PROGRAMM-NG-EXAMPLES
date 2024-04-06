// buyuk sayilarda hangisine bakılacak ona mutlaka bak ... 


#include <stdio.h>
int main(){
    double i,j,sum,mult,sum2,mult2 ; 
    sum=0;
    mult=1;
    sum2=0;
    mult2=1;
    
    for(i=1;i<=99;i++){
        if(i%2==0){
            sum+=i;
            mult*=i;
        }
    }
    for(j=1;j<=99;j++){
        if(j%2 !=0){
        sum2+=j;
        mult2*=j;
        }
        
    }
    printf("cift sayilarin toplami : %lf carpim: %lf\n",sum,mult);
    printf("tek sayilarin toplami  :  %lf carpim: %lf",sum2,mult2);
    return 0 ; 
}