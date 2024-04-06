#include <stdio.h>
int x ;
void auto_depolama_sinifi();
void register_depolama_sinifi();
void extern_depolama_sinifi();
void static_depolama_sinifi();
int main()
{

auto_depolama_sinifi();
register_depolama_sinifi();
static_depolama_sinifi();
extern_depolama_sinifi();

return 0 ; 
}

void auto_depolama_sinifi()
{
    printf("\nAUTO SINIFI CALISTIRILIYOR\n\n");
    auto int a = 32 ; 
    printf("auto olarak tanimlanan a degiskeninin degeri = %d\n",a);
    printf("---------------------");
}
void register_depolama_sinifi()
{
    printf("\n REGISTER SINIFI CALISTIRILIYOR\n\n");
    register char b  = 'G'  ;
    printf("register olarak tanimlanan b degiskeninin degeri = %d\n",b);
    printf("---------------------");
}
void extern_depolama_sinifi()
{
    printf("\nEXTERN SINIFI CALISTIRILIYOR\n\n");
    extern int x;
    printf("extern olarak tanimlanan x degiskeninin degeri = %d\n",x);
    x = 2 ; 
    printf("extern olarak tanimlanan ve modifiyeli olan x degeri = %d",x);
    printf("\n------------------------------------------------------------");
}
void static_depolama_sinifi()
{
    int i = 0 ; 
    printf("\n static sinifi calistiriliyor\n");
    printf("\n DONGU BASLADI");

    for(i = 1 ; i < 5 ; i++)
    {
        static int y = 5 ; 
        
        int p = 10 ; 

        y++; 

        printf("static olarak tanimlanan y = %d\n",y);
        printf("\n static olmayan p nin degeri = %d",p);
    }
    
}