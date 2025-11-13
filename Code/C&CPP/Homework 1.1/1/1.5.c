#include<stdio.h>
#include<stdbool.h>

int main(void){
    int n;
    bool a = 0;
    scanf("%d",&n);
    if(n % 3 == 0 && n % 5 == 0) a = 1;
    printf("%d",a);
    return 0;
}
