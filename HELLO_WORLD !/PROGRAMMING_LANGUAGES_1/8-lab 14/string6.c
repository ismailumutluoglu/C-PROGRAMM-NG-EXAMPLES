//w3resource.com wresourcecom

#include <stdio.h>

void change(char array[]);
int main()
{
    char str[] = "w3resource.com" ; 
    change(str);
    return 0 ; 
}
void change(char array[])
{
    for(int i = 0 ; array[i] != '\0' ; i++)
    {
        while(!(array[i] >='a' && array[i] <= 'z'))
        {
            for(int j = i  ; array[j] != '\0' ; j++) 
            {
                array[j] = array[j+1] ;
            }
        }
    }

    printf("%s",array);
}