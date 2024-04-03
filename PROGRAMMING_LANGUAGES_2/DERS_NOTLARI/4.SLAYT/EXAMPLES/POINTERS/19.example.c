#include <stdio.h>
void my_array(int* numbers);
int main()
{
    int numbers[6] = {1,2,3,4,5,6}; 
    printf("ONCE\n");
    printf("--------------------------");
    for(int i = 0 ; i < 6 ; i++)
    {
        printf("\nnumbers[%d] = %d",i,numbers[i]);
    }
    printf("\nSONRA\n");
    printf("-------------------------");
    my_array(numbers) ; 
    return 0 ; 
}
void my_array(int* numbers)
{
    int j ; 
    for( j = 0 ; j < 6 ; j++)
    {
            *(numbers+j) = *(numbers+j)*3 ;
    }
    for(int i = 0 ; i < 6 ; i++)
    {
        printf("\nnumbers[%d] = %d",i,numbers[i]);
    }
}