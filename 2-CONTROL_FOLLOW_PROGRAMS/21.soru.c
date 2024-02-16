// C Program to Find All Factors of a Natural Number

int main()
{
    int number,i;

    printf("enter a number");
    scanf("%d",&number);

    for(i=1;i<=number;i++)
    {
        if(number%i==0)
        {
            printf("%d ",i);
        }
    }
    return 0;
}