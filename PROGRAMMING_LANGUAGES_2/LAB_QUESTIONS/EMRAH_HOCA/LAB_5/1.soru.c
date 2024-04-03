#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i ;
    int *ptr;
    ptr = (int*)malloc(5*sizeof(int));
    for(i = 0; i< 5; i++)
    {
        *(ptr+i) = i;
    }
    // ptr[0] = 0 
    // ptr[1] = 2
    // ptr[2] = 3
    // ptr[3] = 3
    // ptr[4] = 4
    printf("%d\n",*ptr++); 
    printf("%d\n",(*ptr)++);
    printf("%d\n",*ptr);
    printf("%d\n",*++ptr);
    printf("%d\n",++*ptr);

    return 0 ; 
}