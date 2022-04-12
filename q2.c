//2105764 vaishnavi rani 
//allocate and assign dynamically 2d array where column size is fixed to 5 to a
// pointer and find sum of all elements
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,j,s=0;
    int(*a)[5];
    printf("Enter the number of rows:");
    scanf("%d",&n);
    a=(int(*)[5])malloc(n*5*sizeof(int));
    for(i=0;i<n;i++){
        for(j=0;j<5;++j){
            scanf("%d",&((a+i)+j));
            s=s((a+i)+j);
        }
    }
    printf("sum = %d",s);
    return 0;
}