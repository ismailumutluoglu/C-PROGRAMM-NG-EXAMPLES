#include <stdio.h>

int main()
{
    char word[40];
    int i,k = 0,j;

    puts("bir kelime giriniz");
    scanf("%s",word);

    j = 0;

    while(word[j]!='\0')
    {
        j++;
    }

    for(i = 0 ; i < j ;i++)
    {
        if(word[i]=='a' || word[i]=='e' || word[i]=='i' || word[i]=='o' ||  word[i]=='u'|| word[i]=='A'|| word[i]=='E' || word[i]=='I' || word[i]=='O')
        {
            k++;
        }
    }
    printf("%d",k);
    return 0;
}