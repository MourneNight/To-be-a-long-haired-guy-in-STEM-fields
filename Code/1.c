#include<stdio.h>
#include<math.h>

#define N 3

int main(int argc, char *argv[])
{
	double a[N],x;
	double max = 0;
	for(int i = 0;i < 3;i++)
    {
	    scanf("%lf",&x);
	    a[i] = x;
	    if(x > max)
        {
	        max = x;
	    }
	}
	if((a[0] + a[1] + a[2] - max) <= max)
	printf("Not triangle\n");
    else
    {
        double s = (a[0] + a[1] + a[2]) / 2;
        printf("%.2f\n",sqrt(s * (s - a[0]) * (s - a[1]) * (s - a[2])));
    }
    return 0;
}
