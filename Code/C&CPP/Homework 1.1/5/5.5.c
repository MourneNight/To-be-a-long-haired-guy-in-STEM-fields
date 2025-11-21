#include<stdio.h>
#include<math.h>
#include<stdbool.h>

void average(double x[])
{
  double sum = 0;
  for(int i = 0 ; i < 5 ; i++ )
  {
    sum += x[i];
  }
  printf("%.0f",sum/5);
}

void median(double x[],int n)
{
  for(int i = 0 ; i < 5; i++ ){
    for(int j = 0 ; j < 4 ; j++ )
    {
      double temp;
      if(x[j] > x[j+1])
      {
        temp = x[j];
        x[j] = x[j+1];
        x[j+1] = temp;
      }
    }
  }
  if(n == 2)
  {
    printf("%.0f",x[2]);
  }
  if(n == 3)
  {
    printf("%.0f",x[0]);
  }
  if(n == 6)
  {
    printf("%.0f",x[3]*x[4]);
  }
}

void squares(double x[])
{
  double sum = 0;
  for(int i = 0 ; i < 5 ; i++ )
  {
    x[i] = pow(x[i],2);
    sum += x[i];
  }
  printf("%.0f",sum);
}

void prime(double x[])
{
  int sum = 0;
  for(int i = 0 ; i < 5 ; i++ )
  {
    int num = (int)x[i];
    bool pri = true;
    if(num <= 1)
    {
      pri = false;
    }
    else
    {
      for(int j = 2 ; j < x[i] ; j++)
      {
        if(num % j == 0)
        {
          pri = false;
          break;
        }
      }
    }
    if(pri)
    {
      sum++;
    }
  }
  printf("%d",sum);
}

int main(){
  double a[5];
  for(int i = 0 ; i < 5 ; i++ )
  {
    scanf("%lf",&a[i]);
  }
  int operate;
  scanf("%d",&operate);
  switch(operate){
    case 1:
      average(a);
      break;
    case 2:
      median(a,operate);
      break;
    case 3:
      median(a,operate);
      break;
    case 4:
      squares(a);
      break;
    case 5:
      prime(a);
      break;
    case 6:
      median(a,operate);
      break;
    case 7:
      return 0;
  }
  return 0;
}
