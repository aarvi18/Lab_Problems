/*[Q3.] Develop a program to find the reverse of a positive integer and check for palindrome or
not. Display appropriate messages.*/

#include<stdio.h>
void main( )
{
    int n, num, rev, digit;
    printf("Enter the number\n");
    scanf("%d", &n);
    num = n;
    rev=0;
    while(num!=0)
    {
        digit = num%10;
        rev = rev*10 + digit;
        num = num /10;
    }
    printf("The reverse of %d is %d\n", n, rev);
    if(n == rev)
        printf("%d is a palindrome\n", n);
    else
        printf("%d is not a palindrome\n", n);
    return 0;
}
