#include<stdio.h>
int main()
{
    double a,b;
    char opt;

    printf("Enter The First Value : ");
    scanf("%lf",&a);
    printf("Enter The Operator: ");
    scanf(" %c",&opt);
    printf("Enter The Second Value : ");
    scanf("%lf",&b);

    switch(opt){

    case '+':
    printf("Sum = %.2lf",a+b);
    break;
    case '-':
    printf("Sub = %.2lf",a-b);
    break;
    case '*':
    printf("Pro = %.2lf",a*b);
    break;
    case '/':
    printf("Div = %.2lf",a/b);
    break;
    default:
    printf("\n\nThe Operator Is Wrong!");
    }
    getch();

}
