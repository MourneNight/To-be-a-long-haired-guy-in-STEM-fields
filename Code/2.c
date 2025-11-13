#include<stdio.h>
#include<math.h>

int main(){
    double x,y;
    scanf("%lf",&x);
    if(x <= 0)
    {
        y = -2.5 * x - 36;
    }
    else if(x > 0 && x < 10)
    {
        y = 1 / x;
    }
    else if(x >= 10 && x <= 15)
    {
        y = sqrt(pow(x,2.0) + pow((x - 1.5),3.0));
    }
    else if(x > 15)
    {
        y = pow(0.7,x) + 16.3;
    }
    printf("%.2f\n",y);
    return 0;
}
