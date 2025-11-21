#include<stdio.h>
#include<math.h>

int main(){
  double height,weight,BMI;
  scanf("%lf%lf",&weight,&height);
  BMI = weight / pow(height,2);
  if(BMI < 18.5)
  {
    printf("偏瘦");
  }
  else if(BMI >= 18.5 && BMI < 24)
  {
    printf("正常");
  }
  else if(BMI >=24 && BMI < 28)
  {
    printf("过重");
  }
  else
  {
    printf("肥胖");
  }
  return 0;
}
