#include <conio.h>
#include <stdio.h>
void main()
{
int d[7]={3,1,4,3,4,7,8};
int n=7,i=0,j=1,k;
while((n-1)!=i)
{
while(j<=(n-1))
 {
 if(d[i]==d[j])
 {
 for(k=j;k<n-1;k++)
 {
 d[k]=d[k+1];
 }
 n--;
 }
 else
 j++;
 }
i++;
j=i+1;
}
for(i=0;i<n;i++);
{
printf("%d",d[i]);
}
getch();
}
