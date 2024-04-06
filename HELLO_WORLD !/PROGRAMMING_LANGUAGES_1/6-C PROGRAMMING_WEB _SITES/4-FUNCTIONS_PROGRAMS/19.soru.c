 #include <stdio.h>

 int main()
 {
     char array[30] = "11122112335553";
     int i , j  ;

     i = 0 ; 

     while(array[i] != '\0')
     {
         while(array[i] == array[i+1])
         {
             for(j = i ; array[j] != '\0';j++)
             {
                 array[j] = array[j+1];
             }
         }
         i++;
     }
     puts(array);
     return 0 ; 
 }
