#include<stdio.h>
#include<stdbool.h>

int main(void){
    int n;
    bool t = 1;
    scanf("%d",&n);
    if(n != 2 && n != 1)
    {
        for(int i = 2 ; i < n ; i++ )
        {
            if(n % i == 0) t = 0;
        }
    }
    if(n == 1) t = 0;
    printf("%d",t);
    return 0;
}
