/*[Q11.] Develop a program to sort the given set of N numbers using Bubble sort.*/

#include<stdio.h>
void main( )
{
    int n, i, j, temp, a[100];
    printf("Enter the value for n:\n");
    scanf("%d",&n);
    printf("Enter the array elements:\n");
    for(i=0; i<n; i++)
        scanf("%d",&a[i]);

    printf("The array elements before sorting are: \n");
    for(i=0; i<n; i++)
        printf("%d\n",a[i]);

    for(j=1; j<n; j++)
    {
        for(i=0 ; i< n-j ; i++)
        {
            if(a[i]>a[i+1])
            {
                temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
            }
        }
    }

    printf("The elements after sorting are: \n");
    for(i=0; i<n; i++)
        printf("%d\n",a[i]);
    return 0;
}
