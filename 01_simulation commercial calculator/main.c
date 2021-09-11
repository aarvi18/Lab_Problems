/*[Q2.] Develop a program to solve simple computational problems using arithmetic expressions
and use of each operator leading to simulation of a commercial calculator. (No built-in
math function)*/


#include<stdio.h>
void main()
{
    char op;
    float a, b, res;
    printf("Enter the operator \n");
    scanf("%c",&op);
    printf("Enter the two operands \n");
    scanf("%f %f",&a,&b);
    switch(op)
    {
    case '+' :
        res = a + b;
        break;
    case '-' :
        res = a - b;
        break;
    case '*' :
        res = a * b;
        break;
    case '/' :
        if( b != 0)
        {
            res = a / b;
        }
        else
        {
            printf("Division not possible\n");
            exit(0);
        }
        break;
    default :
        printf("invalid operator\n");
        exit(0);

    }
    printf("Result = %.2f \n", res);
}
