/*wap to multiply a scalar to matrix of size 3*4
2105764
vaishnavi rani */
#include <stdio.h>
int main()
{
    int A[3][4]; 
    int num, i, j;
    printf("Enter elements in matrix");
    for(i=0; i<3; i++)
    {
        for(j=0; j<4; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }
    printf("Enter any number to multiply with matrix A: ");
    scanf("%d", &num);
    for(i=0; i<3; i++)
    {
        for(j=0; j<4; j++)
        {
            A[i][j] = num * A[i][j];
        }
    }
    printf("\nResultant matrix c.A = \n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<4; j++)
        {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }

    return 0;
}