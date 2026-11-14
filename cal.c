#include<stdio.h>
int main() {
    int a;
    int b;
    char operator;
    printf("enter the value a");
    scanf("%d",&a);
    printf("enter the value of b");
    scanf("%d",&b);
    printf("enter the operator(+,-,*,/):");
    scanf(" %c",&operator);
    switch(operator)
    {
        case '+':printf("%d\n",a+b);
        break;
        case '-':printf("%d\n",a-b);
        break;
        case '*':printf("%d\n",a*b);
        break;
        case '/':printf("%d\n",a/b);
        break;
        default:printf("invalid choice");
    }
    return 0;
}
