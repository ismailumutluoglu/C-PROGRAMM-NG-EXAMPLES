#include <stdio.h>
void print_star(int row);
int main()
{
    int row ; 
    printf("satir sayisini giriniz : ");
    scanf("%d",&row);

    print_star(row);
}
void print_star(int row)
{
    if(row > 0 )
    {
        print_star(--row);
    }
    for(int i = 0 ; i < row ; i++)
    {
        printf("*");
    }
    printf("\n");
}