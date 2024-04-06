#include <stdio.h>
void find_Number(int array[],int size);
int main()
{
    int dizi[6] = {1,1,1,1,2,3} ; 
    find_Number(dizi,6);
    return 0 ; 
}
void find_Number(int array[],int size)
{
    int count ; 
    int flag ;
    for(int i = 0 ; i < size ; i++)
    {
        flag = 0 ; 
        count = 0 ; 
        for(int j = 0 ; j < size ; j++)
        {
            if(array[i] == array[j])
                count++;
        }

        for(int k = 0 ; k < i ; k++)
        {
            if(array[i] == array[k])
                flag = 1 ; 
        }

        if(flag == 0)
            printf("%d sayisi %d defa vardir. \n",array[i],count);
    }
}
