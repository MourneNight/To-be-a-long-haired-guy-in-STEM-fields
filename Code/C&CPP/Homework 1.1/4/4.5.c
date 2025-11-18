#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main(){
    int times = 1;
    int n,m = 0;
    int magic;
    srand(time(NULL));
    magic = rand() % 100 + 1;
    printf("请猜一个1到100之间的整数:");
    scanf("%d",&n);
    while(m != magic)
    {
        if(n > magic)
        {
            printf("您猜的数字大于生成的数字\n");
        }
        if(n < magic)
        {
            printf("您猜的数字小于生成的数字\n");
        }
        if(n == magic)
        {
            break;
        }
        printf("请输入您的猜测：");
        scanf("%d",&n);
        times++;
    }
    printf("猜对了，正确答案是 %d 。您共猜了 %d 次。\n",magic,times);
    return 0;
}