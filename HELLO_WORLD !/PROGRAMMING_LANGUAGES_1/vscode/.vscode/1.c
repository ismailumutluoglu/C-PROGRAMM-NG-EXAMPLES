#include <stdio.h>
int main(){
  int x,y,z;
   x=5;
   y=2;
   z=9;
   x++; // x=5;
   //x=6;
   ++y; // y=3;
   // y=3;
   z--; // z=9;
   // z=8;
   x=y++; // x=3; // y=4;
   // y =4;
   z=++x; //z=4; x=4;
   // x=4;
   z=y--; // z=4; y=4;
   // y=3;
   z=--y; // z=2; y=2;
   printf("x : %d\n",x); //4
   printf("y : %d\n",y); //2
   printf("z : %d",z);   //2
       return 0 ; 
}