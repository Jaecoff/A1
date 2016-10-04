#include <stdio.h>
#include <stdlib.h>

int sort(int length, int *list);

int main(int argc, char *argv[]){
  int l=argc-1;
  int list[l];
  char *ptr;

  for(int i=1;i<=l;i++){
    printf("%s\n",argv[i]);
    list[i-1]=strtol(argv[i],&ptr,10);
  }
  printf("\n");

  sort(l,list);
  for(int i=0;i<l;i++){
    printf("%d ",list[i]);
  }
  printf("\n");
}

int sort(int length,int *list){
  int temp;

  for(int j=0;j<length;j++){
    for(int i=1;i<length;i++){
      if(list[i]<list[i-1]){
        temp=list[i];
        list[i]=list[i-1];
        list[i-1]=temp;
      }
    }
  }
}
