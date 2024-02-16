#include <stdio.h>
int main()
{
    int index,choise;
    double myArray[10],myValue; 
    
    do{
        printf("-1 e basarsan uygulama biter\n");
        printf("bir seçim yapiniz");
        scanf("%d",&choise);

        if(choise==-1) 
        break;

        if(choise !=-1 && choise !=2)
        {
           printf("dalga mi geciyorsun duzgun gir");
           continue ;
        }
        printf("dizinin indexini giriniz");
        scanf("%d",&index);
        if(index<0 || index>9)
        {
            printf("index 0 ile 9 arasindao olmali");
            continue ;
        }

    }while(choise!=-1);
     
    return 0;
}