#include <stdio.h>

int   CheckYear(int year)
{
    if(year%4==0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int year = 2008 ;

    if(CheckYear(year))
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
    return 0;
}