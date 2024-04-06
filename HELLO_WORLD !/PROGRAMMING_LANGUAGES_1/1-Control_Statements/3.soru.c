#include <stdio.h>
int main()
{
    float midterm,final,result;
    int student_No
    printf ("please enter your student number");
    scanf("%d",&student_No);

    printf("please enter your midterm exam result");
    scanf("%f",&midterm);

    printf("please enter your final exam result");
    scanf("%f",&final);

    result=midterm*0.4+final*0.6;
    printf("your avarage is = %.2f",result);

    if(result>=50)
    {
        printf(" %f YESS you pas",student_No);
    }
    else{
        printf("%d NOO you dont pass",student_No);
    }
    return 0;
}