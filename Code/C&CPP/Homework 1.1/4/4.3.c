#include<stdio.h>

int main(){
    char n[7];
    int m = 0,zero = 0;
    for(int i = 0 ; i < 7 ; i++ )
    {
        scanf("%c",&n[i]);
        if(n[i] == ' ' || n[i] == '\n')
        {
            break;
        }
        else
        {
            m++;
        }
    }
    for(int i = m - 1 ; i >= 0 ; i-- )
    {
        if(zero == 1)
        {
            printf("%c",n[i]);
        }
        else
        {
            if(n[i] != '0')
            {
                printf("%c",n[i]);
                zero = 1;
            }
        }
    }
    return 0;
}
