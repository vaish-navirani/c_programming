//program for swapping two numbers using cal by reference
//2105764
#include<stdio.h>
void swap(int *x,int *y)
{
    int t;
    t=*x;*x=*y;*y=t;
    printf("\n x = %d , y = %d \n",*x,*y);
}
int main()
{
    int a=10,b=20;
    swap(&a,&b);
    printf("\n a = %d , b = %d \n",a,b);
    return 0;
}