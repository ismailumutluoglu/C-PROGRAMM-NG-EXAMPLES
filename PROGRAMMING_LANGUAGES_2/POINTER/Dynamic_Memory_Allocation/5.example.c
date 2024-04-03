#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    void *name;
    name = (char*)malloc(20*sizeof(char));
    strcpy((char*)name,"ismail");
    printf("%s\n",name);
    return 0 ;
}