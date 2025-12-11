#include<stdio.h>
#include<stdlib.h>

int main(){
  int n;
  scanf("%d",&n);
  int *arr = (int*)malloc(n * sizeof(int));
  arr[0] = 1;
  for(int i = 0; i < n; i++){
    for(int j = i; j >= 1; j--){
      arr[j] = arr[j] + arr[j - 1];
    }
    for(int j = 0; j <= i; j++){
      printf("%d",arr[j]);
    }
    printf("\n");
  }
  free(arr);
  return 0;
}
