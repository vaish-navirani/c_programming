/* wap to find if a square matrix is symmetric or not
2105764
vaishnavi rani */#include <stdio.h>
#define s 3

int main()
{
    int A[s][s]; 
    int B[s][s];
    int row, col, c=1;
    printf("Enter elements in matrix: \n");
    for(row=0; row<s; row++)
    {
        for(col=0; col<s; col++)
        {
            scanf("%d", &A[row][col]);
        }
    }
    for(row=0; row<s; row++)
    {
        for(col=0; col<s; col++)
        {
            B[row][col] = A[col][row];
        }
    }
    for(row=0; row<s && c; row++)
    {
        for(col=0; col<s; col++)
        {
            if(A[row][col] != B[row][col])
            {
                c = 0;
                break;
            }
        }
    }
    if(c == 1)
    {
        printf("\nThe given matrix is Symmetric matrix: \n");
    }
    else
    {
        printf("\nThe given matrix is not Symmetric matrix.");
    }

    return 0;
}