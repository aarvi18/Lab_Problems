/*[Q4.] An electricity board charges the following rates for the use of electricity: for the first 200
units 80 paise per unit: for the next 100 units 90 paise per unit: beyond 300 units Rs 1 per
unit. All users are charged a minimum of Rs. 100 as meter charge. If the total amount is
more than Rs 400, then an additional surcharge of 15% of total amount is charged. Write
a program to read the name of the user, number of units consumed and print out the
charges.*/

#include<stdio.h>
void main( )
{
    char name[20];
    int units;
    float charges, subcharge;
    printf("Enter the name of the customer:\n");
    scanf("%s", name);
    printf("\nEnter the total number of units consumed:\n");
    scanf("%d", &units);
    if(units < 0)
    {
        printf("Invalid input\n");
    }
    else if(units == 0)
    {
        charges = 100;
    }
    else if(units > 0 && units <=200)
    {
        charges = 100 + units*0.80;
    }
    else if(units > 200 && units <=300)
    {
        charges = 100 + 200 * 0.80 + (units - 200) * 0.90;
    }
    else if(units > 300)
    {
        charges = 100 + 200 * 0.80 + 100 * 0.90 + (units - 300) * 1.00;
    }

    if(charges > 400)
    {
        subcharge = charges * 0.15;
        charges = charges + subcharge;
    }
    printf("\nUser %s need to pay %.2f rupees for electricity Bill\n\n\n" , name, charges );
    return 0;
}
