/*program to find out transpose of a matrix of size 4*4
vaishnavi rani
2105764 */
#include <stdio.h>

int main()
    {
   int a[4][4];
   for(int i=0;i<4;i++)
   {
       for(int j=0;j<4;j++)
       scanf("%d",&a[j][i]);
   }
   for(int i=0;i<4;i++)
   {
       for(int j=0;j<4;j++)
       scanf("%d",&a[i][j]);
       printf("\n");
   }
}

