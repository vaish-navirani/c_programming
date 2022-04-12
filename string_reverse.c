//wap to find the reverse of a string with or without using library functions
//2105764
#include <stdio.h>
int main()
{
   char str[1000], rev[1000];
   int i, j, count = 0;
   printf("Input a string :");
   scanf ("%s", str);
   while (str[count] != '\0')
      count++;

   j = count - 1;

   for (i= 0; i < count; i++) {
      rev[i] = str[j];
      j--;
   }

   rev[i] = '\0';

   printf("In Reverse order : %s\n", rev);

   return 0;
}