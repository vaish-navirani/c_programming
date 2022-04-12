//  accessing 2d array using of pointer variable
//2105764
#include <stdio.h>

int main()
{
    char a[]="yudhistir",b[]="bheem",c[]="arjun",d[]="nakul",e[]="sahadev";
    int co=0;
    char *p[5];
     p[0]=a;
    p[1]=b;
    p[2]=c;
    p[3]=d;
    p[4]=e;
    for(int i=0;i<5;i++)
    {
        printf("%d",p[i]);
    }
}