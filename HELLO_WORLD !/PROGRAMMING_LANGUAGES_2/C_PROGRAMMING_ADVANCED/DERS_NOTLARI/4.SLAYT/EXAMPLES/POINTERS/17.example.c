#include <stdio.h>

int main()
{
    char my_letters[5] = {'a','b','c','d','e'} ; 
    printf("my_letters[0] in adresi = %p\n",&my_letters[0]);
    printf("myletterin adresi my latters[0] in adresi ile aynidir : %c\n",*(my_letters));

    printf("my_letters[1] in adresi = %p\n",&my_letters[1]);
    printf("myletterin adresi my latters[0] in adresi ile aynidir : %c\n",*(my_letters+1));

    printf("my_letters[2] in adresi = %p\n",&my_letters[2]);
    printf("myletterin adresi my latters[0] in adresi ile aynidir : %c\n",*(my_letters+2));

    printf("my_letters[3] in adresi = %p\n",&my_letters[3]);
    printf("myletterin adresi my latters[0] in adresi ile aynidir : %c\n",*(my_letters+3));

    printf("my_letters[4] in adresi = %p\n",&my_letters[4]);
    printf("myletterin adresi my latters[0] in adresi ile aynidir : %c\n",*(my_letters+4));
    return 0 ; 
}