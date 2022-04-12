/*write a function to add three numbers
2105764
vaishnavi rani */
#include <stdio.h>

int add(int a,int b,int c);
int main()
{
printf("enter three numbers:");
int a,b,c;
scanf("%d %d %d",&a,&b,&c);
printf("the sum is %d",add(a,b,c));
return 0;
}
int add(int a,int b,int c)
{
    return a+b+c;
}