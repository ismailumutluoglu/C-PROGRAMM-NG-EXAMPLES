#include <stdio.h>

int main(void) {
  int i=1;
  while (i<=100){
    if (i%2==0)
      printf("cift %d \n", i);
    else
      printf("tek %d \n", i);
    i++;
  }
  return 0;
}

