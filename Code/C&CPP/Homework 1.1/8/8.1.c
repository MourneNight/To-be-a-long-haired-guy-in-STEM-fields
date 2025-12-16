#include<stdio.h>
#include<math.h>

int main(){
  int a,b,c,d;
  for(int i = 1000; i <= 9999; i++){
    a = i / 1000;
    b = (i / 100) % 10;
    c = (i / 10) % 10;
    d = i % 10;
    if(a == b && c == d){
      double temp = sqrt(i);
      if((int)temp * (int)temp == i){
        printf("%d ",i);
      }
    }
  }
  return 0;
}
