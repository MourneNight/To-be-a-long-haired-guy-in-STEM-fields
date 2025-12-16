#include<stdio.h>

int main(){
  int a,b,c;
  for(int i = 100; i <= 999; i++){
    int sum_1 = 1,sum_2 = 1,sum_3 = 1; 
    a = i / 100;
    b = (i / 10) % 10;
    c = i % 10;
    for(int q = a; q >= 1; q--){
      sum_1 *= q;
    }
    for(int p = b; p >= 1; p--){
      sum_2 *= p;
    }
    for(int j = c; j >= 1; j--){
      sum_3 *= j;
    }
    if(sum_1 + sum_2 + sum_3 == i){
      printf("%d",i);
    }
  }
  return 0;
}
