#include <stdio.h>
#include <stdlib.h>
#include "bubblesort.h"

int main(int argc, char *argv[]){
  int l;
  if(argc>1){
    l=argc-1;
  }else{
    l=10;
  }

  long list[l];

  if(argc>1){
    char *ptr;
    for(int i=1;i<=l;i++){
      list[i-1]=strtol(argv[i],&ptr,10);
    }
  }else{
    for(int i=0;i<l;i++){
      long n=7-i;
      list[i]=n;
    }
  }

  bubblesort(l,list);

  for(int i=0;i<l;i++){
    printf("%ld ",list[i]);
  }
  printf("\n");
}
