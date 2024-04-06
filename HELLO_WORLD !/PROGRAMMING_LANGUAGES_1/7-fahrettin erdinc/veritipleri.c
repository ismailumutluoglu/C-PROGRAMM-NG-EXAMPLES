#include <stdio.h>

int main()
{
     //unsigned demek sadece  + değerler alır demektir . 
    unsigned char a ; //0-255 arasinda  bir deger kullandırticaksak bunu kullanmak bellek yönetimi bakımından önemlidir . çünkü 1 byte(8bit) yer kaplar.

    char b ;//char veri tipi -128 , 127 arası tam sayı değerleri alır . 
    //ASCII kod karşılığı için bellek yönetimi açısından char kullanmak en mantıklı yöntemdir . 

    unsigned short a ; //2 byte yani 16 bit yer kaplar 0 - 65535 aralığını işin varsa bunu kullanmak bellek için iyi . 
    short b ; //bellekte 2 byee 16 bit yer kaplar -32768 - +32767

    unsigned int a ; //32 bit yer kaplar 4 byte 0-4294967296
    int b ; //32 bit yani 4 byte yer kaplar -2147483648 - +2147483647   -2 milyar ile +2  milyar arası

    unsigned long a ; //8byte 64 bitlik yer kaplar  4 milyardan daha büyük sayilar için
    signed long b ; // 64 bit yani 8 byte yer kaplar 4 milyardan daha büyük sayilar için -4 milyar ile +4 milyar

    float a ; //ondalıklı 32 bit 4byte yer kaplar
    double a; //64 bit 8byte yer kaplar float veri tipinden daha büyük veya daha küçük sayilari ifade etmek için kullanılır.

    char a  ; //stringler için kullanılır

    return 0 ; 
}