// // 10. Write a program in C to find the maximum number of characters in a string.

// // Test Data :
// // Input the string : Welcome to w3resource.com.

// // Expected Output :

// // The Highest frequency of character 'e' 
// // appears number of times : 4 

// #include <stdio.h>

// int main()
// {
//     char string[] = "Welcome to w3resource.com.";

//     int i , j ;

//     for(i = 0 ; string[i] != '\0' ; i++)
//     {

//     }
//     return 0 ; 
// }

#include <stdio.h>
#include <string.h>
int main()
{
    char str[] = "w3resource.com";

    int i ,j ;

    for(i=0;str[i] != '\0' ; i++)
    {
        while(str[i] >= '0' && str[i] <= '9')
        {
            for(j=i;j<strlen(str);j++)
            {
                str[j]=str[j+1];
            }
        }
    }
    printf("%s",str);
    return 0 ; 
}