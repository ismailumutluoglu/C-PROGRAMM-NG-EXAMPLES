// VOİD POİNTERLAR
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    void* ptr;
    ptr = (char*)malloc(10*sizeof(char));
    if(ptr==NULL)
    {
        printf("YETERLI ALAN TAHSIS EDILEMEMISTIR");
        return 1 ;
    }
    strcpy((char*)ptr,"ismail");
    printf("%s",ptr);
    ptr = (int*)malloc(sizeof(int));
    *(int*)ptr = 5 ; 
    printf("\n%d",*(int*)ptr);
    return 0 ; 
}