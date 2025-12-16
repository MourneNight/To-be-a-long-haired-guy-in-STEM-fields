#include<stdio.h>

int main(){
  int n;
  int temp = 1;
  scanf("%d",&n);
  for(int i = n; i >= 1; i--){
    for(int j = 1; j <= i - 1; j++){
      printf(" ");
    }
    for(int q = temp; q > 0; q--){
      printf("*");
    }
    temp += 2;
    printf("\n");
  }
  temp -= 4;
  for(int i = 1; i < n; i++){
    for(int j = 1; j <= i; j++){
      printf(" ");
    }
    for(int q = temp; q > 0; q--){
      printf("*");
    }
    temp -= 2;
    printf("\n");
  }
  return 0;
}
