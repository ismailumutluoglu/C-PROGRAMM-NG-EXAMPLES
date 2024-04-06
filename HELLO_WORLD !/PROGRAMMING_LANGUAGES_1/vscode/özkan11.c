#include <stdio.h>

int main(void) {
  int i;
  for (i=100; i<200; i++){
    if(i%3==0 && i%5==0 && i%7!=0){
      printf("Kosul saglandi %d\n",i);
    }
  }
  return 0 ; 
}
