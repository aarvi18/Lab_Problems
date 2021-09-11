/*[Q2.] Develop a program to compute the roots of a quadratic equation by accepting the
coefficients. Print appropriate messages.*/

#include<stdio.h>
#include<math.h>
void main( )
{
    float a, b, c, disc, root1, root2, x, y;
    printf("Enter the coefficients a,b and c of the quadratic equation \n");
    scanf("%f%f%f",&a, &b, &c);
    disc = b * b - 4 * a * c;
    if(disc == 0)
    {
        printf(" Roots are real and Equal\n");
        root1 = root2 = - b / (2 * a);
        printf(" Root1 = %f and Root2 = %f\n", root1, root2);
    }
    else if(disc > 0)
    {
        printf(" Roots are real and Distinct\n");
        root1 = ( - b + sqrt(disc) ) / (2 * a);
        root2 = ( - b - sqrt(disc) ) / (2 * a);
        printf(" Root1 = %f and Root2 = %f\n", root1, root2);
    }
    else if(disc < 0)
    {
        printf(" Roots are Complex and Distinct\n");
        x = - b / (2 * a);
        y = sqrt(fabs(disc) ) / (2 * a);
        printf(" Root1 = %f + i %f \n", x, y);
        printf(" Root2 = %f - i %f \n", x, y);
    }
    return 0;
}
