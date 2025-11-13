#include<stdio.h>
#include<stdbool.h>

int main(){
    int sum_1 = 0,sum_2 = -1;
    bool n = 1;
    for(int i = 1 ; i <= 200 ; i++ )
    {
        if(i % 2 != 0)
        {
            sum_1+=i;
        }
        n = 1;
        if(i != 1 && i != 2)
        {
            for(int j = 2 ; j < i ; j++ )
            {
                if(i % j == 0) n = 0;
            }
        }
        if(n == 1) sum_2+=i;
    }
    printf("%d %d",sum_1,sum_2);
    return 0;
}
