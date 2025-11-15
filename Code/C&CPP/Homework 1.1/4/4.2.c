#include<stdio.h>
#include<math.h>
#include<stdbool.h>

int main(){
    double value1,value2;
    char op;
    bool oppo = false;
    scanf("%lf%c%lf",&value1,&op,&value2);
    switch(op)
    {
        case '+':
            oppo = true;
            printf("%.6f",value1+value2);
            break;
        case '-':
            oppo = true;
            printf("%.6f",value1-value2);
            break;
        case '*':
            oppo = true;
            printf("%.6f",value1*value2);
            break;
        case '/':
            oppo = true;
            if(value2 == 0)
            {
                printf("Division by 0");
            }
            else
            {
                printf("%.6f",value1/value2);
            }
            break;
        case '^':
            oppo = true;
            printf("%.6f",pow(value1,value2));
            break;
    }
    if(oppo == false)
    {
        printf("Invalid operator");
    }
    return 0;
}
