// 3. Full Pyramid Pattern of Numbers
// A full pyramid pattern of numbers is similar to an equilateral triangle.

// Pyramid Example: 

//          1           1 4 
//        2 2 2         2 3
//      3 3 3 3 3       3 2
//    4 4 4 4 4 4 4     4 1
//  5 5 5 5 5 5 5 5 5   5 0

 #include <stdio.h>

 int main()
 {
       for(int i = 1;i <= 5;i++)
     {
         for(int k = 1;k <= 2*(5-i);k++)
         {
             printf(" ");
        }

         for(int j =1;j <= 2*i-1;j++)
         {
            printf("%d ",i);
         }
         printf("\n");
     }
      return 0;
}
