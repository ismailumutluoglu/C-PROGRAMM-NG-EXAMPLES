// 3- Kullanıcının gönderdiği kelime içerisinde kaç tane sesli harf olduğunu bulan fonksiyonu yazınız.  
#include <stdio.h>
void sesliHarf(char dizi[]);
int main()
{
    char str[] = "ismail" ; 
    sesliHarf(str);
    return 0 ; 
}
void sesliHarf(char dizi[])
{
    int i = 0 , sesliHarf = 0 ; 

     while(dizi[i] != '\0')
    {
        if(dizi[i] == 'a' ||dizi[i] =='e'|| dizi[i] =='i' ||dizi[i] == 'o' ||dizi[i] == 'u' || dizi[i] =='A' || dizi[i] =='E' || dizi[i] =='I' || dizi[i] =='O' || dizi[i] =='U')
        {
            sesliHarf++;
        }
        i++;
    }
    printf("%d",sesliHarf);
}   