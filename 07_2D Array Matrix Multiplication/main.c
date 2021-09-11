/*[Q7] Develop a program to introduce 2D Array manipulation and implement
 Matrix multiplication and ensure the rules of multiplication are
checked. */


void main( )
{
    int m, n, p, q, i, j, a[10] [10], b[10][10], c[10][10];
    // m = row1 && n = columns1  || p = row2 && q = columns2

    printf("Enter the number of rows and columns of matrix A:\n");
    scanf("%d %d", &m,&n);
    printf("Enter the number of rows and columns of matrix B:\n");
    scanf("%d %d", &p,&q);
    if(n != p)
    {
        printf("Matrix multiplication is not possible\n");
        exit(0);
    }
    printf("Enter the elements of matrix A:\n");
    for( i = 0; i < m ; i ++ )
    {
        for( j = 0; j < n ; j ++ )
        {
            scanf("%d", &a[i][j] );
        }
    }
    printf("Enter the elements of matrix B:\n");
    for( i = 0; i < p ; i ++ )
    {
        for( j = 0; j < q ; j ++ )
        {
            scanf("%d", &b[i][j] );
        }
    }
    printf("The elements of matrix A are:\n");
    for( i = 0; i < m ; i ++ )
    {
        for( j = 0; j < n ; j ++ )
        {
            printf("%d \t",a[i][j] );
        }
        printf("\n");
    }
    printf("The elements of matrix B are:\n");
    for( i = 0; i < p ; i ++ )
    {
        for( j = 0; j < q ; j ++ )
        {
            printf("%d \t",b[i][j] );
        }
        printf("\n");
    }
// To multilpy the two matrices
    int k;
    for( i = 0; i < m ; i ++ )
    {
        for( j = 0; j < q ; j ++ )
        {
            c[i][j] = 0;
            for( k = 0; k < n ; k ++ )
            {
                c[i][j] = c[i][j] + a[i][k] * b[k][j];
            }
        }
    }
    printf("The resultant matrix is\n");
    for( i = 0; i < m ; i ++ )
    {
        for( j = 0; j < q ; j ++ )
        {
            printf("%d \t",c[i][j] );
        }
        printf("\n");
    }
}
