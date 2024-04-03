// reverse string with pointer
#include <stdio.h>
int main()
{
    char str[]="benim adim cafer";
    char* ptr=str;
    int len=sizeof(str)/sizeof(str[0]);
    int i ;
    for(i=0;i<len;i++)
    {
        printf("%c",*(ptr+len-i-1));
    }
    return 0 ;
}   