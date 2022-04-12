#include<stdio.h>

int isPrime (int n)
{
    int num,c;
    for(num = 1;num<=n;num++)
    {
       c = 0;
       for(int i=2;i<=num/2;i++)
      {
         if(num%i==0)
         {
            c++;
            break;
         }
      }
        
      if(c==0 && num!= 1)
      printf("%d ",num);
    }
}
int main()
{

    int n;
    printf("Enter number: ");
    scanf("%d",&n);
    isPrime (n);
    return 0;
}