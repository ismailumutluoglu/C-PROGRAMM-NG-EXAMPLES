#include <stdio.h>
int main()
{
    int choise,r;
    const float PI=3.14;
    float area,perimeter;

    printf("enter radius");
    scanf("%d",&r);

    printf("what do you want to find area or perimeter if your choise is area enter 1 else enter 2");
    scanf("%d",&choise);

    if(choise==1)
    {
        area=PI*r*r;
        printf("%f",area);
    }
    else if(choise==2)
    {
        perimeter=2*PI*r;
        printf("%f",perimeter);
    }
    else
    {
        printf("daaaat");
    }
    return 0;
    }