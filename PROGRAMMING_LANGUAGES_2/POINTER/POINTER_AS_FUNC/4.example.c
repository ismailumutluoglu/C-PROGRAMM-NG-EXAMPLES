#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *p;
    int i = 0 ; 
    p = (char*)malloc(sizeof(char));
    do
    {
        printf("harf giriniz : \n");
        scanf("%c",(p+i));
        if(*(p+i) == 13)
            break;
        else
            printf("*\n");
            i++;
            p = realloc(p,(i+1)*sizeof(char));
    }while(1);
    printf("\n");
    for(int k = 0 ; k < i ; k++)
    {
        printf("%c",*(p+k));
    }
    free(p);
    return 0 ; 
}