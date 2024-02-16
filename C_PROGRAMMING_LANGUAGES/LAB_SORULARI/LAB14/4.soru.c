// 4.Klavyeden girilen bir cümledeki sesli harfleri * (yıldız) karakteri ile değiştirerek ekrana yazan 
// bir C programı yazınız. 
// Örnek: Hemserim Memleket Nere? BU DUNYA BENIM MEMLEKET 
// > H*ms*r*m M*ml*k*t N*r*? B* D*NY* B*N*M M*ML*K*T 

#include <stdio.h>
void yildiz(char dizi[]);
int main()
{
    char str[100] ; 

    printf("bir cümle giriniz :");
    gets(str);

    yildiz(str);

    return 0 ; 
}   
void yildiz(char dizi[])
{
    int i = 0 ; 

    while(dizi[i] != '\0')
    {
        if(dizi[i] == 'a' ||dizi[i] =='e'|| dizi[i] =='i' ||dizi[i] == 'o' ||dizi[i] == 'u' || dizi[i] =='A' || dizi[i] =='E' || dizi[i] =='I' || dizi[i] =='O' || dizi[i] =='U')
        {
            dizi[i] = '*';
        }
        i++;
    }
    printf("%s",dizi);
}