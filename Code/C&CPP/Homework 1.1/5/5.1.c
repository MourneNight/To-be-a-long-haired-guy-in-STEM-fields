#include<stdio.h>

int main(){
  int n;
  scanf("%d",&n);
  if(n > 7) n = n % 7;
  switch(n){
    case 1:
      printf("星期一");
      break;
    case 2:
      printf("星期二");
      break;
    case 3:
      printf("星期三");
      break;
    case 4:
      printf("星期四");
      break;
    case 5:
      printf("星期五");
      break;
    case 6:
      printf("星期六");
      break;
    case 7:
      printf("星期日");
  }
  return 0;
}
