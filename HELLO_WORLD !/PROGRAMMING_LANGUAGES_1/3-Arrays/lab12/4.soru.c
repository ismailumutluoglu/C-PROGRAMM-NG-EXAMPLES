#include <stdio.h>

int main()
{
    int A[6]={1,3,5,7,9},temp,i,j,new_number;

    printf("yeni bir sayi gir");
    scanf("%d",&new_number);

    A[5]=new_number;

     for( i = 0; i < 6 ;i++)
     {
         for(j = i;j < 6;j++)
        {
             if(i != j)
             {
                 if(A[i] > A[j])
                {
                    temp=A[i];
                    A[i]=A[j];
                    A[j]=temp;   
                }
                
             }
        }
     }

    for(i = 0;i < 6;i++)
    {
        printf("%d\t",A[i]);
    }

    // // for(int i = 0;i < 5;i++)
    // // {
    // //     printf("dizinin elemanlarini giriniz");
    // //     scanf("%d",&A[i]);
    // // }


    // for( i = 0; i < 5 ;i++)
    // {
    //     for(j = i;j < 5;j++)
    //     {
    //         if(i!=j)
    //         {
    //             if(A[i]>A[j])
    //             {
    //                  temp=A[i];
    //                  A[i]=A[j];
    //                  A[j]=temp;   
    //             }
                
    //         }
    //     }
    // }

    // printf("yeni bir sayi giriniz");
    // scanf("%d",&new_number);

    // A[5]=new_number;
    
    return 0;
}