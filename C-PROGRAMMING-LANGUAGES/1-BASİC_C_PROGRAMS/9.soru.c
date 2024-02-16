#include <stdio.h>
float fahrenheit_to_celcius(float F)
{
    return (F-32)*5/9;
}
int main()
{
    float F;
    printf("enter a value");
    scanf("%f",&F);
    printf("%f dereceinin celcius cinsinden esiti = %f",F,fahrenheit_to_celcius(F));
    return 0;
}