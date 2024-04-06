// Soru 5: (Klavyeden girilen bir metnin içerisinde her harfin tekrar sayısını bularak 
// ekrana yazdıran programın c kodunu yazınız. Örnek ekran çıktısı yanda verilmiştir. 
// Kelimenin tüm harflerinin büyük olduğunu varsayınız. ASCII değeri A=65)

#include <stdio.h>
void tekrar_sayisi(char* str);
int main()
{
    char str[50] ; 
    printf("string bir ifade giriniz : ");
    gets(str); // programlama
    tekrar_sayisi(str);
    return 0 ; 
}
void tekrar_sayisi(char* str)
{
    int flag , control ; 
    for(int i = 0 ; *(str +i) != '\0' ; i++)
    {
        control = 1 ; 
        flag = 0 ; 
        for(int j = 0 ; *(str + j) != '\0' ; j++)
        {
            if(i != j)
            {
                if(*(str + i ) == *(str + j))
                {
                control++;
                }
            }
        }
        for(int k = 0 ; k < i ; k++)
        {
            if(*(str +i) == *(str + k ))
            {
                flag = 1 ; 
            }
        }
        if(flag == 0)
        {
            printf("%c karakteri %d adet vardir\n",*(str + i),control);
        }
    }
}