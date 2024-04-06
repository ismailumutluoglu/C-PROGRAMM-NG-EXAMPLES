#include <stdio.h>
int main(){
    int vize,final,ort;
    printf("vize notunu giriniz:");
    scanf("%d",&vize);
    printf("final notunu giriniz:");
    scanf("%d",&final);
    ort=vize*4/10+final*6/10;
    if(ort>=60){
        printf("gecti");
    }
    else{
        printf("kaldi");
    }
    return 0 ; 
}