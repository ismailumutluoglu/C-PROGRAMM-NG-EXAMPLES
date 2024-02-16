// RASTGELE SAYİ TAHMİN OYUNU
// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>

// int main()
// {
//      srand(time(NULL));

//     int guessNumber,randomNumber,score,i;
//     score = 100;
//     i = 0 ;
//     guessNumber = 0 ; 

//     randomNumber = rand() % 100 + 1 ;

//     printf("1-100 arasinda Bir sayi tuttum tahmin et !  ");
    

//     while(guessNumber != -1)
//     {
//         printf("\ntahmininizi giriniz : ");
//         scanf("%d",&guessNumber);
//         i++;

//         if(guessNumber == -1)
//         {
//             break;
//         }
//         else
//         {
//             if(guessNumber < 1 || guessNumber > 100)
//             {
//                 printf("1-100 arasinda sayi tuttum be kardeşim doğru duzgun bir sayi tahmin et !");
//                 continue;
//             }
//         }
//         if(guessNumber==randomNumber)
//         {
//             printf("tebrikler tahmin ettiğim sayiyi %d.denemede buldun puanin = %d",i,score);
//             return 0 ; 
//         }
//         else
//         {
//             if(guessNumber>randomNumber)
//             {
//                 printf("ZOOORT daha küçük bir sayi tuttum  ");
//                 score = score - 10 ;
//             }
//             else
//             {
//                 printf("Daha büyük bir sayi tuttum zzzoooortt  ");
//                 score = score - 10 ;
//             }  
//             if(score<0)
//         {
//             printf("sayiyi bulamadin deneme hakkin bitti puanin = 0");
//             break;
//         }
//         } 
//     }
//     return 0 ; 
// }

// #include <stdio.h>

// int main()
// {
//     int matris[5][8] ; 

//     int i , j ;

//     for(i=0;i<5;i++)
//     {
//         for(j=0;j<8;j++)
//         {
//             printf("%d. ogrencinin %d. notunu giriniz  giriniz ",i+1,j+1);
//             scanf("%d",&matris[i][j]);
//         }
//     }    

//     for(i=0;i<5;i++)
//     {
//         for(j=0;j<8;j++)
//         {
//             printf("%d ",matris[i][j]);
//         }
//         printf("\n");
//     }
//     return 0 ; 
// }

// #include <stdio.h>

// int main()
// {
//     int dizi[100];
//     int matris[100][100];

//     int i ,j ,x, n,satir,sutun;

//     printf("dizi kac elemandan olusacak giriniz : ");
//     scanf("%d",&n);

//     for(x=0;x<n;x++)
//     {
//         printf("dizinin %d . elemanini giriniz : ",x+1);
//         scanf("%d",&dizi[x]);
//     }

//     printf("matrisin satir sayisini giriniz : ");
//     scanf("%d",&satir);

//     printf("matrisin sutun sayisini giriniz : ");
//     scanf("%d",&sutun);

//     if(x%satir==0 && x%sutun ==0)
//     {
//         x = 0 ; 
//         for(i=0;i<satir;i++)
//         {
//             for(j=0;j<sutun;j++)
//             {
//                 matris[i][j] = dizi[x];
//                 x++;
//             }
//         }

//         for(i=0;i<satir;i++)
//         {
//             for(j=0;j<sutun;j++)
//             {
//                 printf("%d ",matris[i][j]);
//             }
//             printf("\n");
//         }
//     }
//     else
//     {
//         printf("dizinin eleman sayisi matrisin satir ve sutun sayisina tam bolunmelidir");
//     }
//     return 0 ; 
// }

// #include <stdio.h>

// int main()
// {
//     int array[4][4];
//     int i , j,flag;
//     flag = 1 ;

//     for(i=0;i<4;i++)
//     {
//         for(j=0;j<4;j++)
//         {
//             scanf("%d",&array[i][j]);
            
//         }
//     }
    
//     for(i=0;i<4;i++)
//     {
//         for(j=0;j<4;j++)
//         {
//             if(array[i][j] != array[j][i])
//             {
//                 flag = 0 ;
//                 break;
//             }
//             else
//             {
//                 continue;
//             }
//         }
//     }

//     if(flag)
//     {
//         printf("simetrik") ; 
//     }
//     else
//     {
//         printf("degil ") ; 
//     }
//         return 0 ; 
// }

// #include <stdio.h>

// int main()
// {
//     int array[5] = {1,2,3,4,5};
//     int i,temp;

//     for(i=0;i<5/2;i++)
//     {
//         temp = array[i];
//         array[i] = array[5-1-i];
//         array[5-1-i] = temp ;
//     }
    
//     for(i=0;i<5;i++)
//     {
//         printf("%d ",array[i]);
//     }
//     return 0 ;
// }
// #include <stdio.h>

// int main()
// {
//     char str[] = "selam";
//     printf("%-40.5s",str);
//     return 0 ; 
// }

// #include <stdio.h>


// void kareAl(int x )
// {
//     int a ;
//     a = x*x;
//     printf("%d\n",a);
// }

// int main()
// {
//     int i ;

//     for(i=1;i<=10;i++)
//     {
//         kareAl(i);
//     }
//     return 0 ; 
// }




// n =   rand() % 100 + 1  ;

// #include <stdio.h>

// int Toplama(int,int);
// int Cikarma(int,int);
// int Carpma(int,int);
// float Bolum(int,int);

// int main()
// {
//     int x , y ;
//     x = 10 ;
//     y = 5 ; 

//     printf("%d\n",Toplama(x,y));
//     printf("%d\n",Cikarma(x,y));
//     printf("%d\n",Carpma(x,y));
//     printf("%.2f\n",Bolum(x,y));
//     return 0 ; 
// }

// int Toplama(int x , int y)
// {
//     int toplam ;
//     return x + y ;
// }

// int Cikarma(int x , int y)
// {
//     int fark ;
//     return x -y ;
// }

// int Carpma(int x , int y)
// {
//     int carpim ;
//     return x*y ;
// }

// float  Bolum(int x , int y)
// {
//     return (float)x/y;
// }

// #include <stdio.h>

//  int UsAlma(int x,int y)
//  {
//     int us = 1 ;
//      for(int i = 0 ; i < y ; ++i)
//      {
//         us = us * x ;
//      }
//      return us ;
//  }
// int main()
// {
//     int x , y ;

//     printf("taban degeri : ") ;
//     scanf("%d",&x) ; 

//     printf("us degeri : ") ;
//     scanf("%d",&y) ;

//     printf("%d",UsAlma(x,y));
//     return 0 ;
// }

// #include <stdio.h>
// #define SIZE 5 

// void yenidenArray(int array[],int size )
// {
//     int i ;

//     for(i=0;i<size;i++)
//     {
//         array[i] = array[i]*2;
//     }
//     for(i=0;i<size;i++)
//     {
//         printf("%d ",array[i]);
//     }
// }

// int main()
// {
//     int array[8] = {1,2,3,4,5,6,7,8};
//     int matrix[2][4] ;
    
//     for(int i=0;i<1;i++)
//     {
//         for(int j=0;j<4;j++)
//         {
//             matrix[i][j] = array[j];
//         }
//     }

//     for(int i=1;i<2;i++)
//     {
//         for(int j=4;j<8;j++)
//         {
//             matrix[i][j-4] = array[j];
//         }
//     }

//     for(int i=0;i<2;i++)
//     {
//         for(int j=0;j<4;j++)
//         {
//             printf("%d ",matrix[i][j]);
//         }
//         printf("\n");
//     }
//     return 0 ;
// }

// #include <stdio.h>
// #define SIZE 5
// void CallingArray(int array,int size)
// {
//     int i ;

//     for(i=0;i<size;i++)
//     {
//         printf("%d ",array[i]);
//     }
// }
// int main()
// {
//     int array[SIZE]={1,2,3,4,5};

//     CallingArray(array,SIZE);

//     return 0 ; 
// }

