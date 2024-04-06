#include <stdio.h>
int main(){
    int i,n,r,f1,f2,f3,k;
    printf("sayi gir : ");
    scanf("%d",&n);
    printf("sayi gir : ");
    scanf("%d",&r);
    f1=1;
    f2=1;
    f3=1;
    for(i=1;i<=n;i++){
      f1=f1*i;
      if(i<=r){
        f2=f2*i;
      }
      if(i<=n-r){
        f3=f3*i;
      }
    }
    k=f1/(f2*f3);
      printf("%d",k);
      return 0;
}