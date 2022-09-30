//Q2. Write a program to find the factorial of a no.
#include <stdio.h>
void factorial(int a)
{
    int n=1;
    again:
    n = n * a;
    a--;
    if (a > 0)
    {
        goto again;
    }
    printf("\nFACTORIAL IS :%d", n);
}
int main()
{
    int x;
    printf("ENTER NUMBER:");
    scanf("%d",&x);
    factorial(x);
    return 0;
}