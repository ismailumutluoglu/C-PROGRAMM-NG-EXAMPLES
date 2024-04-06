#include <stdio.h>

int main()
{
    int Array[10];
    float sum = 0;

    for(int i = 0; i < 10; ++i)
    {
        printf("%d. elemani giriniz : ",i+1);
        scanf("%d",&Array[i]);
        printf("\n");
    }

    for(int i = 0; i < 10; ++i)
    {
        sum += Array[i];
    }

    printf("avarage is %.2f",sum/10);
    return 0;
}