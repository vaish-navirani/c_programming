//program for swapping of no using cal by ref
//2105764
#include<stdio.h>
int largesum(int *a, int *b,int n)
{
    int i,s1=0,s2=0;
    for(i=0;i<n;i++)
    {
       s1+=a[i];
       s2+=b[i];
    }
    if(s1==s2)
    return 0;
    else if(s1>s2)
    return 1;
    else 
    return 2;
}
int main()
{
    int a[50];int b[60],n;
    printf("enter a number:");
    scanf("%d",&n);
    printf("Enter array elements :");
    for(int i=0;i<5;i++)
    {
       scanf("%d",&a[i]);
       scanf("%d",&b[i]);
    }
    printf("%d", sum_com(a,b,n));
}
