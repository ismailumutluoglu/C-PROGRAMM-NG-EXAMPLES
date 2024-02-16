    #include <stdio.h>
    int main()
    {
        int i,num,sum,F,remainder,j,n;

        printf("n sayisini giriniz");
        scanf("%d",&n);

        for(i=1;i<=n;i++)
        {  
            num=i;
            sum=0;

            while(num>0)
            {
                remainder=num%10;
                num=num/10;
                F=1;
                for(j=1;j<=remainder;j++)
                {
                    F=F*j;
                }
                sum+=F;
            }
            if(sum==i)
            {
                printf("%d\n",i);
            }
        }
        return 0;
    }