#include <stdio.h>
char check_polindrom(char str[] , int size ,int copy_size);
int main()
{
    char str[50] ;
    printf("bir metin giriniz : ");
    gets(str);

    int i = 0 ; 
    while(str[i] != '\0')
    {
        i++;
    }
    int copy_size = i ;

    if(check_polindrom(str,i,copy_size)== 1)
        printf("(%s) metini polindromdur . ",str);
        
    else
        printf("(%s) metini polindrom degildir . ",str);
        
    return 0 ; 
}
char check_polindrom(char str[] , int size, int copy_size)
{
    if(size  > copy_size/2 )
    {
        if(str[size-1] == str[copy_size-size])
            return check_polindrom(str,size-1,copy_size);
        else
            return 0 ; 
    }
    else
        return 1 ; 
}
