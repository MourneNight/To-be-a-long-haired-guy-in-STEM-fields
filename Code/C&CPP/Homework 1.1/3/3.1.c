#include<stdio.h>
#include<math.h>

int main(){
    double n[5];
    double max,sum = 0,psd = 0;
    for(int i = 0 ; i < 5 ; i++ )
    {
        scanf("%lf",&n[i]);
        sum += n[i];
        if(i == 0) max = n[i];
        if(n[i] >= max) max = n[i];
    }
    double aver = sum / 5;
    for(int i = 0 ; i < 5 ; i++ )
    {
        psd = psd + pow(fabs(n[i] - aver),2);
    }
    psd = pow(psd/5,1.0/2.0);
    printf("%.6f %.6f %.6f",aver,max,psd);
    return 0;
}
