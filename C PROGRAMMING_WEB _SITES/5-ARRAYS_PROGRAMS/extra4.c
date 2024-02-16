// Eleman değerleri verilmiş 7 elemanlı bir sayı dizisinde
// tekrarlanan sayıların ilk yazılanı dışında kalanları kaldırarak
// başa doğru öteleyen programın algoritma ve akış diyagramını
// çiziniz.

 #include <stdio.h>

 int main()
 {
     int Array[7] = {1,1,2,2,3,3,4};
    int i,j,flag;
    

    for(i=0;i<7;i++)
    {
        flag = 1;
        if(i!=j)
        {
            for(j=0;j<7;j++)
            {
                if(Array[i]==Array[j])
                flag = 0;
            }
            if(flag)
            {
                printf("%d",Array[i]);
            }
            else
            {
                continue ;
            }
        }
        
    }

     return 0;
 }


