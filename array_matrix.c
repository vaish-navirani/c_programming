/* program to read (from k/b) and display matrix format a 4*5 matrix.
vaishnavi rani 
2105764 */
#include <stdio.h>

int main()
{
    int arr[4][5];
    printf("Enter elements: ");
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<5;j++)
        scanf("%d",&arr[i][j]);
    }
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<5;j++)
        printf("%d ",arr[i][j]);
        printf("\n");
    }
}