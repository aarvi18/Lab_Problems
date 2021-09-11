/*[Q8.] Develop a Program to compute Sin(x) using Taylor series approximation. Compare your
result with the built- in Library function. Print both the results with appropriate messages.*/

#include<stdio.h>
#define PI 3.142
void main( )
{
    int i, degree;
    float x, sum=0, term, num, deno;
    printf("Enter the value in degrees:\n");
    scanf("%d", &degree);
    x=degree * (PI / 180);
    num= x;
    deno=1;
    i = 2;
    do
    {
        term=num/deno;
        num=-num*x*x;
        sum=sum+term;
        deno = deno*i*(i+1);
        i = i + 2;
    }
    while(fabs(term)>=0.00001);
    printf("The sine of %d is: %f\n", degree, sum);
    printf("The sine function of %d is: %f\n" , degree, sin(x));
}
