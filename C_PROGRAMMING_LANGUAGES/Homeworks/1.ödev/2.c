#include <stdio.h>
int main(){
    int r;
    float area;
    const float PI=3.14;
    printf("dairenin yaricapini giriniz\n");
    scanf("%d",&r);
    area=PI*r*r;
    printf("dairenin alani : %f",area);
    return 0;
}