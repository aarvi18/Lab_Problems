/*[Q6.] Implement using functions to check whether the given number is prime and display
appropriate messages. (No built-in math function)*/

#include<stdio.h>
void checkprime( int n )
{
    int i;
    if( n==0 || n==1)
    {
        printf("Number is neither prime nor composite\n");
        exit(0);
    }
    for(i=2; i<=n/2; i++)
    {
        if( n % i == 0 )
        {
            printf("Number is not prime\n");
            exit(0);
        }
    }
    printf("Number is prime\n");
}
void main( )
{
    int n;
    printf("Enter the value of n\n");
    scanf("%d", &n);
    checkprime( n );
}
