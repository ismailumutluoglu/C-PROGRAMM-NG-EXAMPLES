#include <stdio.h>
#include <stdlib.h>
// Soru 3: Bir kelimenin harflerini tersten ekrana basan programı pointer kullanarak C dilinde yazınız.  
int main()
{
    char *name = "ismail";
    int size = 0, i; 
    while(name[size]!= '\0')
    {
        size++;
    }
    char *copy_name;
    copy_name = (char*)malloc((size+1)*sizeof(int));
    
    if(copy_name==NULL)
    {
        printf("yeterli alan tahsis edilememistir . ");
        return 0 ; 
    }
    
    for(i=0;i<size;i++)
    {
        copy_name[i] = name[size-i-1];
    }
    copy_name[size] = '\0' ; 
    printf("%s",copy_name);
    free(name);
    return 0 ; 
}
