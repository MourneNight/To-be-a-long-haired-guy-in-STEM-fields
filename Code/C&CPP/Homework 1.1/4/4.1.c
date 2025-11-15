#include<stdio.h>
#include<math.h>

int main(){
    double x;
    double y;
    scanf("%lf",&x);
    if(x >= 15)
    {
        y = pow(x,0.4) + 3 * x + pow(x,-1);
    }
    else if(x > 0 && x < 15)
    {
        y = sqrt(pow(x,3) + 14);
    }
    else if(x <= 0)
    {
        y = 2 * x - 1;    
    }
    printf("%.3f",y);
    return 0;
}
