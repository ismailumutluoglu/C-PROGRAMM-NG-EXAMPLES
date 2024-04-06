#include <stdio.h>
#include <stdlib.h>
int control_strings(char *ptr1,char *ptr2,int len1,int len2);
int main()
{
    char str1[50],str2[50];
    char *copy_str1,*copy_str2;
    printf("birinci kelimeyi giriniz : ");
    scanf("%s",str1);
    printf("ikinci kelimeyi giriniz : ");
    scanf("%s",str2);
    int len1=0,len2=0;
    while(str1[len1] != '\0')
    {
        len1++;
    }
    while(str2[len2] != '\0')
    {
        len2++;
    }
    copy_str1 = (char*)malloc((len1+1)*sizeof(char));
    copy_str2 = (char*)malloc((len2+1)*sizeof(char));
    if(copy_str1==NULL)
    {
        printf("HAFİZADA YETERLİ ALAN YOKTUR");
        return 0 ; 
    }
    if(copy_str2 == NULL)
    {
        printf("HAFİZADA YETERLİ ALAN YOKTUR");
    }
    int i ;
    for( i = 0 ; str1[i] != '\0'; i++)
    {
        copy_str1[i]= str1[i];
    }
    copy_str1[i] = '\0';
    for(int i = 0 ; str2[i] != '\0';i++)
    {
        copy_str2[i]= str2[i];
    }
    copy_str2[i] = '\0' ; 
    int check = control_strings(copy_str1,copy_str2,len1,len2);
    if(check== 0)
        printf("no");
    else
        printf("yes");
    free(copy_str1);
    free(copy_str2);
    return 0 ; 
}
int control_strings(char *ptr1,char *ptr2,int len1,int len2)
{
    int i,j,flag;
    flag = 1;
    for(i = 0 ;ptr1[i] != '\0' ; i++) 
    {
        if(ptr1[i] !=ptr2[i])
        {
        flag = 0 ; 
        return 0;
        }
    }
    return 1 ;
}