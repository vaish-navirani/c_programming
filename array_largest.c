/* wap to pick up the largest no from any 5 row by 5 column matrix
2105764
vaishnavi rani */
#include<stdio.h>
int main(){
    int arr[5][5];
    int i,j,k;
    for(i=0;i<=4;i++)
    {
        printf("\n");
        for(j=0;j<=4;j++)
        {
            printf("Enter the number matrix[%d][%d]: ", i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<=4;i++)
    {
        printf("\n");
        for(j=0;j<=4;j++)
        {
            if(arr[i][j]>arr[i][j-1])
            k=arr[i][j];
            arr[i][j]=k;
        }
    }
    printf("The Largest number in the 5*5 matrix is :  %d",k);
    return 0;
}