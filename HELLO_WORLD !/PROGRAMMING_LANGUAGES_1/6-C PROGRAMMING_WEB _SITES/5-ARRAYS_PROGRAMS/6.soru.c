

 #include <stdio.h>
 int main()
 {
     int Array[5] = {65,17,89,29,64} ;

     int i,j,temp; 

    for(i = 0 ; i < 5; i++)
    {
        for(j = i ; j < 5 ; j++)
        {
                 if(Array[i] < Array[j])
                {
                temp = Array[i];
                Array[i]=Array[j];
                Array[j] = temp ;
                }
      }
    }

     for(i = 0; i < 5; i++)
    {
        printf("%d  ",Array[i]);
    }
     return 0;
 }


