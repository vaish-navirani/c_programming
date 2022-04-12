/*recursive function to find out factorial of a numbeer n
vaishnavi rani
2105764*/
#include<stdio.h>

int factorial(int n){
    if(n==1)
        return 1;
    else{
        return n*factorial(n-1);
    }
}

void main()
{

    int n;
    printf("enter the number: ");
    scanf("%d",&n);
    int fact=factorial(n);
    printf("\nThe factorial of %d is %d",n,fact);

}