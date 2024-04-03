#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char *name="ismail";
    int len = strlen(*name);
    int i;  
    name = (char*)malloc(len*sizeof(char));

    if(name==NULL)
    {
        printf("yeterli alan yoktur !\n");
        return 0 ; 
    }

    for(i=0;i<10;i++)
    {
        printf("%d. ogrencinin adini giriniz : ",i+1);
        scanf("%s",name);
        len = strlen(name);
        name=(char*)realloc(name,len*sizeof(char));
    }
    
    for(int k = 0 ; k < i ; k++)
    {
        printf("%c",*(ptr+i));
    }
    free(ptr);
    return 0 ; 
}