// 17 + 5 toplamını 17 nin üstüne 5 sayarak bulan bir C programı yazınız.
#include <stdio.h>
int main(){
    int i,sonuc;
    sonuc=17;
    for(i=1;i<=5;i++){
      sonuc+=1;
    }
    printf("%d",sonuc);
    return 0 ; 
}
