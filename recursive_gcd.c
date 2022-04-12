/*recursive functn to find out gcd of 2 numbers
2105764
vaishnavi rani */
#include<stdio.h>
int gcd(int a , int b)
{
    int t;
    if(a %  b == 0)
        return b;
    else
        return(t=gcd(b,a%b));
}
int main()
{
    int g,x,y;
    printf("ENTER TWO NUMBERS:");
    scanf("%d%d",&x,&y);
    g=gcd(x,y);
    printf("GCD IS = %d",g);
    return 0;
}