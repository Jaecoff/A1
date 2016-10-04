#include <stdlib.h>

int bubblesort(long length,long *list){

  int temp;
  int doneFlag=0;
  while(!doneFlag){
    doneFlag=1;
    for(int i=1;i<length;i++){
      if(list[i]<list[i-1]){
        temp=list[i];
        list[i]=list[i-1];
        list[i-1]=temp;
        doneFlag=0;
      }
    }
  }
  return 0;
}
