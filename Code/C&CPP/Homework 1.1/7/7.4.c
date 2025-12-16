#include<stdio.h>
#include<stdlib.h>

void combine_compare(int *arr,int value,int *found,int count);

int main(){
  int *arr = (int *)malloc(4 * sizeof(int));
  int found[10] = {0};
  int count = 0;
  for(int i = 0; i < 4; i++){
    arr[i] = 0;
  }
  for(int i = 1000; i < 9999; i++){
    arr[0] = i / 1000;
    arr[1] = (i / 100) % 10;
    arr[2] = (i / 10) % 10;
    arr[3] = i % 10;
    combine_compare(arr,i,found,count);
  }
  free(arr);
  return 0;
}

void combine_compare(int *arr,int value,int *found,int count){
  for(int i = 0; i < 4; i++){
    for(int j = 0; j < 4; j++){
      if(j == i) continue;
      int a = arr[i] * 10 + arr[j];
      int p = -1,q = -1;
      for(int k = 0; k < 4; k++){
        if(k != i && k != j){
          if(p == -1) p = k;
          else q = k;
        }
      }
      int b = arr[p] * 10 + arr[q];
      if(value == a * b){
        found[count] = value;
        count++;
        printf("%d ",value);
        return;
      }
    }
  }
}