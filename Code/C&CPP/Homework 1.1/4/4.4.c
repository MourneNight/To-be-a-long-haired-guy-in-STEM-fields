#include<stdio.h>

int main(){
    double x[5];
    for(int i = 0 ; i < 5 ; i++ )
    {
        scanf("%lf",&x[i]);
    }
    for(int j = 0 ; j < 4 ; j++ )
    {
        for(int i = 0 ; i < 4 - j ; i++ )
        {
            double temp = 0;
            if(x[i] > x[i+1])
            {
                temp = x[i];
                x[i] = x[i+1];
                x[i+1] = temp;
            }
        }
    }
    for(int i = 0 ; i < 5 ; i++ )
    {
        printf("%.2f ",x[i]);
    }
    return 0;
}
