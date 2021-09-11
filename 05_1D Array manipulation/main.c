/*[Q5]. Introduce 1D Array manipulation and implement Binary search.*/

#include<stdio.h>
#include<stdlib.h>
void main( )
{
    int i ,n, a[20], key, low, high, mid ;
    printf("Enter the size of an array:\n");
    scanf("%d", &n);
    printf("Enter the elements to an array:\n");
    for( i = 0; i < n ; i ++ )
    {
        scanf("%d", &a[i] );
    }
    printf("Enter the key element to be searched:\n");
    scanf("%d", &key);
    low = 0;
    high = n-1;
    while( low <= high )
    {
        mid = (low + high) / 2;
        if(key == a[mid])
        {
            printf("Element found at location: %d \n", mid + 1 );
            exit(0);
        }
        else if(key < a[mid])
            high = mid - 1;
        else
            low = mid +1;

    }
    printf("Key not found \n" );

}
