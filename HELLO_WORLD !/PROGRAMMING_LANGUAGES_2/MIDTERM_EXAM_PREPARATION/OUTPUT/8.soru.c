#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i ;
    int *ptr;
    ptr = (int*)malloc(5*sizeof(int));
    if(ptr == NULL)
    {
        printf("yeterli bellek alani tahsis edilememistir . ");
        return 0 ; 
    }
    for(i = 0; i< 5; i++)
    {
        *(ptr+i) = i;
    }
    printf("%d\n",*ptr++); 
    printf("%d\n",(*ptr)++);
    printf("%d\n",*ptr);
    printf("%d\n",*++ptr);
    printf("%d\n",++*ptr);
    return 0 ; 
}