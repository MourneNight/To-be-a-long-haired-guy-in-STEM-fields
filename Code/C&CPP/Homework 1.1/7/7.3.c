#include<stdio.h>

int main(){
  int n;
  int temp = 0;
  scanf("%d",&n);
  for(int i = 1; i <= n; i++){
    if(temp == 10){
      printf("\n");
    }
    if(n > 100){
      n = 100;
      if(i % 3 == 0 || i % 5 == 0){
        printf("%d ",i);
        temp++;
      }
    }
    if(n <= 100){
      if(i % 3 == 0 || i % 5 == 0){
        printf("%d ",i);
        temp++;
      }
    }
  }
  return 0;
}
