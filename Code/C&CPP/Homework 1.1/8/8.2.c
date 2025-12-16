#include<stdio.h>

int main(){
  int a,b,c;
  int sum = 0;
  for(int i = 1; i <= 300; i++){
    a = i / 100;
    b = (i / 10) % 10;
    c = i % 10;
    if(i % 3 == 0 && (a == 7 || b == 7 || c == 7)){
      sum += i;
    }
  }
  printf("%d",sum);
  return 0;
}
