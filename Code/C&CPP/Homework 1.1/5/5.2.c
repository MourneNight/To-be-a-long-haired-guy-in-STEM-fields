#include<stdio.h>

int main(){
  int day;
  int month[12]={31,28,31,30,31,30,31,31,30,31,30,31};
  scanf("%d",&day);
  for(int i = 0 ; i < 12 ; i++ )
  {
    if(day - month[i] > 0)
    {
      day -= month[i];
    }
    else
    {
      printf("%d月%d日",i+1,day);
      break;
    }
  }
  return 0;
}
