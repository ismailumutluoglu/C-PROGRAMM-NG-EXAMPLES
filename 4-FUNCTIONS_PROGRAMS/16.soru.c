 #include <stdio.h>

 int main()
 {
     char str1[100] = "programming ";
     char str2[] = "is awesome" ;

    int len = 0 ; 

     while(str1[len] != '\0')
     {
         len++;
     }

     for(int i = 0 ; str2[i] != '\0' ; i++)
     {
         str1[len]=str2[i];
         len++;
     }

     str1[len] = '\0';
     puts(str1);
     return 0 ;
 }

// #include <stdio.h>
// int main() {
//   char s1[100] = "programming ", s2[] = "is awesome";
//   int length, j;

//   // store length of s1 in the length variable
//   length = 0;
//   while (s1[length] != '\0') {
//     ++length;
//   }

//   // concatenate s2 to s1
//   for (j = 0; s2[j] != '\0'; ++j, ++length) {
//     s1[length] = s2[j];
//   }

//   // terminating the s1 string
//   s1[length] = '\0';

//   printf("After concatenation: ");
//   puts(s1);

//   return 0;
// }